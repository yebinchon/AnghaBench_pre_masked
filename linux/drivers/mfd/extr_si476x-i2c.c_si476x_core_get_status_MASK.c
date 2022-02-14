
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si476x_core {int dummy; } ;
typedef int response ;


 int VAR_0 ;
 int FUNC_0 (struct si476x_core*,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct si476x_core *VAR_1)
{
 u8 VAR_2;
 int VAR_3 = FUNC_0(VAR_1, VAR_0,
      &VAR_2, sizeof(VAR_2));

 return (VAR_3 < 0) ? VAR_3 : VAR_2;
}
