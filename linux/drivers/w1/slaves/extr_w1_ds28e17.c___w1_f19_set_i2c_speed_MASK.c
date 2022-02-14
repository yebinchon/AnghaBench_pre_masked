
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct w1_slave {int dev; int master; struct w1_f19_data* family_data; } ;
struct w1_f19_data {size_t speed; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,char*,int const) ;
 scalar_t__ FUNC_1 (struct w1_slave*) ;
 int FUNC_2 (int ,size_t*,int) ;

__attribute__((used)) static int FUNC_3(struct w1_slave *VAR_2, u8 VAR_3)
{
 struct w1_f19_data *VAR_4 = VAR_2->family_data;
 const int VAR_5[3] = { 100, 400, 900 };
 u8 VAR_6[2];


 if (FUNC_1(VAR_2))
  return -VAR_0;

 VAR_6[0] = VAR_1;
 VAR_6[1] = VAR_3;
 FUNC_2(VAR_2->master, VAR_6, 2);


 VAR_4->speed = VAR_3;

 FUNC_0(&VAR_2->dev, "i2c speed set to %d kBaud\n", VAR_5[VAR_3]);

 return 0;
}
