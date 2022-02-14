
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int sd3_drv_type; int uhs_max_dtr; } ;
struct mmc_card {int drive_strength; int host; TYPE_1__ sw_caps; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmc_card*,int,int,int,int*) ;
 int FUNC_2 (struct mmc_card*,int ,int,int*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static int FUNC_5(struct mmc_card *VAR_1, u8 *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 int VAR_6;

 VAR_1->drive_strength = 0;

 VAR_3 = VAR_1->sw_caps.sd3_drv_type | VAR_0;

 VAR_4 = FUNC_2(VAR_1,
         VAR_1->sw_caps.uhs_max_dtr,
         VAR_3, &VAR_5);

 if (VAR_4) {
  VAR_6 = FUNC_1(VAR_1, 1, 2, VAR_4, VAR_2);
  if (VAR_6)
   return VAR_6;
  if ((VAR_2[15] & 0xF) != VAR_4) {
   FUNC_4("%s: Problem setting drive strength!\n",
    FUNC_0(VAR_1->host));
   return 0;
  }
  VAR_1->drive_strength = VAR_4;
 }

 if (VAR_5)
  FUNC_3(VAR_1->host, VAR_5);

 return 0;
}
