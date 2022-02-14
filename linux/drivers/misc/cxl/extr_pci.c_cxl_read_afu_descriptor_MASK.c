
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cxl_afu {int pp_size; int crs_len; int eb_len; int dev; int eb_offset; int crs_offset; TYPE_1__* native; int pp_psa; int psa; int modes_supported; int crs_num; int max_procs_virtualised; int pp_irqs; } ;
struct TYPE_2__ {int pp_offset; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct cxl_afu*) ;
 int FUNC_11 (struct cxl_afu*) ;
 int FUNC_12 (struct cxl_afu*) ;
 int FUNC_13 (struct cxl_afu*) ;
 int FUNC_14 (struct cxl_afu*) ;
 int FUNC_15 (struct cxl_afu*) ;
 int FUNC_16 (struct cxl_afu*) ;
 scalar_t__ FUNC_17 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_18 (int ,int ,int) ;
 int FUNC_19 (int *,char*) ;
 int FUNC_20 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_21(struct cxl_afu *VAR_3)
{
 u64 VAR_4;

 VAR_4 = FUNC_14(VAR_3);
 VAR_3->pp_irqs = FUNC_5(VAR_4);
 VAR_3->max_procs_virtualised = FUNC_6(VAR_4);
 VAR_3->crs_num = FUNC_4(VAR_4);

 if (FUNC_0(VAR_4))
  VAR_3->modes_supported |= VAR_1;
 if (FUNC_2(VAR_4))
  VAR_3->modes_supported |= VAR_0;
 if (FUNC_17(VAR_4))
  VAR_3->modes_supported |= VAR_2;

 VAR_4 = FUNC_15(VAR_3);
 VAR_3->pp_size = FUNC_7(VAR_4) * 4096;
 VAR_3->psa = FUNC_9(VAR_4);
 if ((VAR_3->pp_psa = FUNC_8(VAR_4)))
  VAR_3->native->pp_offset = FUNC_16(VAR_3);

 VAR_4 = FUNC_10(VAR_3);
 VAR_3->crs_len = FUNC_1(VAR_4) * 256;
 VAR_3->crs_offset = FUNC_11(VAR_3);



 VAR_3->eb_len = FUNC_3(FUNC_12(VAR_3)) * 4096;
 VAR_3->eb_offset = FUNC_13(VAR_3);


 if (FUNC_18(VAR_3->eb_offset, 0, 11) != 0) {
  FUNC_20(&VAR_3->dev,
    "Invalid AFU error buffer offset %Lx\n",
    VAR_3->eb_offset);
  FUNC_19(&VAR_3->dev,
    "Ignoring AFU error buffer in the descriptor\n");

  VAR_3->eb_len = 0;
 }

 return 0;
}
