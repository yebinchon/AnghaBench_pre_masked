
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sd3_drv_type; int uhs_max_dtr; } ;
struct mmc_card {int drive_strength; int host; TYPE_1__ sw_caps; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 unsigned char FUNC_0 (int) ;
 int FUNC_1 (struct mmc_card*,int,int ,int ,unsigned char,unsigned char*) ;
 int FUNC_2 (struct mmc_card*,int ,int,int*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct mmc_card *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 unsigned char VAR_8;
 int VAR_9;

 VAR_4->drive_strength = 0;

 VAR_5 = VAR_4->sw_caps.sd3_drv_type | VAR_3;

 VAR_6 = FUNC_2(VAR_4,
         VAR_4->sw_caps.uhs_max_dtr,
         VAR_5, &VAR_7);

 if (VAR_6) {

  VAR_9 = FUNC_1(VAR_4, 0, 0, VAR_0, 0,
           &VAR_8);
  if (VAR_9)
   return;

  VAR_8 &= ~(VAR_1<<VAR_2);
  VAR_8 |= FUNC_0(VAR_6);


  VAR_9 = FUNC_1(VAR_4, 1, 0, VAR_0,
           VAR_8, ((void*)0));
  if (VAR_9)
   return;
  VAR_4->drive_strength = VAR_6;
 }

 if (VAR_7)
  FUNC_3(VAR_4->host, VAR_7);
}
