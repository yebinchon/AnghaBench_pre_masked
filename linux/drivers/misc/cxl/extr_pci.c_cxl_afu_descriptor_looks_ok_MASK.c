
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct cxl_afu {int pp_size; int max_procs_virtualised; int crs_num; int modes_supported; int dev; scalar_t__ pp_psa; TYPE_2__* native; TYPE_1__* adapter; scalar_t__ psa; } ;
struct TYPE_6__ {int (* afu_cr_read32 ) (struct cxl_afu*,int,int ,scalar_t__*) ;} ;
struct TYPE_5__ {scalar_t__ pp_offset; } ;
struct TYPE_4__ {scalar_t__ ps_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct cxl_afu*,int,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct cxl_afu *VAR_5)
{
 int VAR_6, VAR_7;
 u32 VAR_8;

 if (VAR_5->psa && VAR_5->adapter->ps_size <
   (VAR_5->native->pp_offset + VAR_5->pp_size*VAR_5->max_procs_virtualised)) {
  FUNC_0(&VAR_5->dev, "per-process PSA can't fit inside the PSA!\n");
  return -VAR_2;
 }

 if (VAR_5->pp_psa && (VAR_5->pp_size < VAR_3))
  FUNC_1(&VAR_5->dev, "AFU uses pp_size(%#016llx) < PAGE_SIZE per-process PSA!\n", VAR_5->pp_size);

 for (VAR_6 = 0; VAR_6 < VAR_5->crs_num; VAR_6++) {
  VAR_7 = VAR_4->afu_cr_read32(VAR_5, VAR_6, 0, &VAR_8);
  if (VAR_7 || VAR_8 == 0) {
   FUNC_0(&VAR_5->dev, "ABORTING: AFU configuration record %i is invalid\n", VAR_6);
   return -VAR_1;
  }
 }

 if ((VAR_5->modes_supported & ~VAR_0) && VAR_5->max_procs_virtualised == 0) {
  FUNC_0(&VAR_5->dev, "AFU does not support any processes\n");
  return -VAR_1;
 }

 return 0;
}
