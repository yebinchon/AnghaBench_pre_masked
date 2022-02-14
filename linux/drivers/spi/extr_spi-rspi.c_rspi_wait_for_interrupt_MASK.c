
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rspi_data {int spsr; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rspi_data*,int) ;
 int FUNC_1 (struct rspi_data*,int ) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct rspi_data *VAR_3, u8 VAR_4,
       u8 VAR_5)
{
 int VAR_6;

 VAR_3->spsr = FUNC_1(VAR_3, VAR_2);
 if (VAR_3->spsr & VAR_4)
  return 0;

 FUNC_0(VAR_3, VAR_5);
 VAR_6 = FUNC_2(VAR_3->wait, VAR_3->spsr & VAR_4, VAR_1);
 if (VAR_6 == 0 && !(VAR_3->spsr & VAR_4))
  return -VAR_0;

 return 0;
}
