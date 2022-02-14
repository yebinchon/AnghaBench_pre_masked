
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cx231xx {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cx231xx*,int,int ) ;
 int FUNC_1 (struct cx231xx*,int ,int) ;
 int FUNC_2 (struct cx231xx*,int,int *,int,int ,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct cx231xx*,int,int *) ;
 int FUNC_5 (struct cx231xx*,int,int) ;

void FUNC_6(struct cx231xx *VAR_3)
{
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;
 u8 VAR_6 = 0;

 VAR_4 = VAR_4 & 0xFC0003FF;
 VAR_4 = VAR_4 | 0x03FDFC00;
 FUNC_2(VAR_3, VAR_4, (u8 *)&VAR_5, 4, 0, 0);

 FUNC_4(VAR_3, 0x07, &VAR_6);
 FUNC_3(VAR_3->dev, "verve_read_byte address0x07=0x%x\n", VAR_6);
 FUNC_5(VAR_3, 0x07, 0xF4);
 FUNC_4(VAR_3, 0x07, &VAR_6);
 FUNC_3(VAR_3->dev, "verve_read_byte address0x07=0x%x\n", VAR_6);

 FUNC_0(VAR_3, 1, VAR_2);

 FUNC_1(VAR_3, VAR_0, 0x0500FE00);
 FUNC_1(VAR_3, VAR_1, 0xFFFDFFFF);

}
