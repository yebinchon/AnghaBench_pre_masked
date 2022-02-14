
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct cxl_afu {int crs_len; int crs_offset; TYPE_1__* native; int adapter; } ;
struct TYPE_4__ {int (* link_ok ) (int ,struct cxl_afu*) ;} ;
struct TYPE_3__ {int afu_desc_mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,struct cxl_afu*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct cxl_afu *VAR_3, int VAR_4, u64 VAR_5, u32 VAR_6)
{
 if (FUNC_2(!VAR_2->link_ok(VAR_3->adapter, VAR_3)))
  return -VAR_0;
 if (FUNC_2(VAR_5 >= VAR_3->crs_len))
  return -VAR_1;
 FUNC_0(VAR_3->native->afu_desc_mmio + VAR_3->crs_offset +
  (VAR_4 * VAR_3->crs_len) + VAR_5, VAR_6);
 return 0;
}
