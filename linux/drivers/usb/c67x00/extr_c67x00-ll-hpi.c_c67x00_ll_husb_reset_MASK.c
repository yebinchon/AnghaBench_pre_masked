
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c67x00_sie {int sie_num; struct c67x00_device* dev; } ;
struct c67x00_lcp_int_data {int* regs; } ;
struct c67x00_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct c67x00_device*,int ,struct c67x00_lcp_int_data*) ;

void FUNC_2(struct c67x00_sie *VAR_1, int VAR_2)
{
 struct c67x00_device *VAR_3 = VAR_1->dev;
 struct c67x00_lcp_int_data VAR_4;
 int VAR_5;

 VAR_4.regs[0] = 50;
 VAR_4.regs[1] = VAR_2 | (VAR_1->sie_num << 1);
 VAR_5 = FUNC_1(VAR_3, VAR_0, &VAR_4);
 FUNC_0(VAR_5);
}
