
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx231xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cx231xx*,int ,int ,int*,int) ;

void FUNC_1(struct cx231xx *VAR_3)
{
 u8 VAR_4[4] = { 0, 0, 0, 0 };

 VAR_4[0] = 0x00;
 VAR_4[1] = 0x03;
 VAR_4[2] = 0x00;
 VAR_4[3] = 0x00;
 FUNC_0(VAR_3, VAR_2,
   VAR_1, VAR_4, 4);

 VAR_4[0] = 0x00;
 VAR_4[1] = 0x70;
 VAR_4[2] = 0x04;
 VAR_4[3] = 0x00;
 FUNC_0(VAR_3, VAR_2,
   VAR_0, VAR_4, 4);
}
