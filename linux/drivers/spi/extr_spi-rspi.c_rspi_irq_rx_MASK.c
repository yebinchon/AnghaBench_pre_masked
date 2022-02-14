
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rspi_data {int spsr; int wait; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rspi_data*,int ) ;
 int FUNC_1 (struct rspi_data*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct rspi_data *VAR_6 = VAR_5;
 u8 VAR_7;

 VAR_6->spsr = VAR_7 = FUNC_1(VAR_6, VAR_1);
 if (VAR_7 & VAR_3) {
  FUNC_0(VAR_6, VAR_2);
  FUNC_2(&VAR_6->wait);
  return VAR_0;
 }

 return 0;
}
