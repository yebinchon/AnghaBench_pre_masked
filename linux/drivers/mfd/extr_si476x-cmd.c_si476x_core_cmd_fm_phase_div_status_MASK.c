
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si476x_core {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct si476x_core*,int ,int *,int ,int*,int ,int ) ;

int FUNC_2(struct si476x_core *VAR_3)
{
 int VAR_4;
 u8 VAR_5[VAR_1];

 VAR_4 = FUNC_1(VAR_3, VAR_0,
           ((void*)0), 0,
           VAR_5, FUNC_0(VAR_5),
           VAR_2);

 return (VAR_4 < 0) ? VAR_4 : VAR_5[1];
}
