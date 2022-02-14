
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_flctl {TYPE_1__* pdev; int * done_buff; scalar_t__ page_size; } ;
struct TYPE_4__ {int failed; int corrected; } ;
struct mtd_info {int writesize; TYPE_2__ ecc_stats; } ;
typedef enum flctl_ecc_res_t { ____Placeholder_flctl_ecc_res_t } flctl_ecc_res_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct sh_flctl*) ;
 int FUNC_1 (struct sh_flctl*) ;
 int FUNC_2 (struct sh_flctl*) ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (struct sh_flctl*) ;
 struct sh_flctl* FUNC_6 (struct mtd_info*) ;
 int FUNC_7 (struct sh_flctl*,int *,int) ;
 int FUNC_8 (struct sh_flctl*,int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct mtd_info*,int,int) ;
 int FUNC_11 (struct sh_flctl*) ;
 int FUNC_12 (struct sh_flctl*) ;
 int FUNC_13 (int,int ) ;

__attribute__((used)) static void FUNC_14(struct mtd_info *VAR_4, int VAR_5)
{
 struct sh_flctl *VAR_6 = FUNC_6(VAR_4);
 int VAR_7, VAR_8;
 enum flctl_ecc_res_t VAR_9;

 VAR_8 = VAR_6->page_size ? 4 : 1;

 FUNC_10(VAR_4, VAR_1,
  (VAR_2 << 8) | VAR_1);

 FUNC_13(FUNC_9(FUNC_2(VAR_6)) | VAR_0 | VAR_3,
   FUNC_2(VAR_6));
 FUNC_13(FUNC_9(FUNC_1(VAR_6)) | VAR_8, FUNC_1(VAR_6));
 FUNC_13(VAR_5 << 2, FUNC_0(VAR_6));

 FUNC_5(VAR_6);
 FUNC_11(VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  FUNC_8(VAR_6, 512, 512 * VAR_7);

  VAR_9 = FUNC_7(VAR_6,
   &VAR_6->done_buff[VAR_4->writesize + 16 * VAR_7],
   VAR_7);

  switch (VAR_9) {
  case 128:
   FUNC_3(&VAR_6->pdev->dev,
    "applied ecc on page 0x%x", VAR_5);
   VAR_4->ecc_stats.corrected++;
   break;
  case 129:
   FUNC_4(&VAR_6->pdev->dev,
    "page 0x%x contains corrupted data\n",
    VAR_5);
   VAR_4->ecc_stats.failed++;
   break;
  default:
   ;
  }
 }

 FUNC_12(VAR_6);

 FUNC_13(FUNC_9(FUNC_2(VAR_6)) & ~(VAR_0 | VAR_3),
   FUNC_2(VAR_6));
}
