
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_slave {struct w1_f1C_data* family_data; } ;
struct w1_f1C_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct w1_f1C_data* FUNC_0 (int,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1(struct w1_slave *VAR_3)
{
 struct w1_f1C_data *VAR_4 = ((void*)0);

 if (VAR_2) {
  VAR_4 = FUNC_0(sizeof(struct w1_f1C_data), VAR_1);
  if (!VAR_4)
   return -VAR_0;
  VAR_3->family_data = VAR_4;
 }

 return 0;
}
