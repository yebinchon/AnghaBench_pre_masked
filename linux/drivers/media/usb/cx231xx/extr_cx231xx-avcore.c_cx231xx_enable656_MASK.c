
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx231xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx231xx*,int ,int*) ;
 int FUNC_1 (struct cx231xx*,int ,int) ;

void FUNC_2(struct cx231xx *VAR_2)
{
 u8 VAR_3 = 0;


 FUNC_1(VAR_2, VAR_0, 0xFF);



 FUNC_0(VAR_2, VAR_1, &VAR_3);
 VAR_3 = VAR_3|0x04;

 FUNC_1(VAR_2, VAR_1, VAR_3);
}
