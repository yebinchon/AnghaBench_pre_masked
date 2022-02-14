
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct cx231xx {int norm; int dev; int active_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct cx231xx*,int ) ;
 int FUNC_2 (struct cx231xx*,int ,int,int) ;
 int FUNC_3 (struct cx231xx*,int,scalar_t__,int) ;
 int FUNC_4 (struct cx231xx*,int ,int ,scalar_t__*,int) ;
 int FUNC_5 (int ,char*,...) ;

void FUNC_6(struct cx231xx *VAR_3, u32 VAR_4,
   u8 VAR_5, u32 VAR_6)
{
 u32 VAR_7 = 0;
 u32 VAR_8 = 0x01;
 u32 VAR_9 = 0;
 u8 VAR_10[4] = { 0, 0, 0, 0 };

 FUNC_5(VAR_3->dev, "Enter cx231xx_set_Colibri_For_LowIF()\n");
 VAR_10[0] = (u8) 0x6F;
 VAR_10[1] = (u8) 0x6F;
 VAR_10[2] = (u8) 0x6F;
 VAR_10[3] = (u8) 0x6F;
 FUNC_4(VAR_3, VAR_2,
     VAR_1, VAR_10, 4);


 FUNC_1(VAR_3, VAR_0);


 VAR_9 = VAR_3->norm;
 FUNC_2(VAR_3, VAR_3->active_mode,
             VAR_8, VAR_9);


 VAR_7 = FUNC_0(VAR_6,
           VAR_9);

 FUNC_5(VAR_3->dev, "colibri_carrier_offset=%d, standard=0x%x\n",
       VAR_7, VAR_9);


 FUNC_3(VAR_3, (VAR_4+VAR_7),
     VAR_5, VAR_6);
}
