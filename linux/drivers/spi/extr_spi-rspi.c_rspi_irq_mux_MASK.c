
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rspi_data*,int) ;
 int FUNC_1 (struct rspi_data*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct rspi_data *VAR_9 = VAR_8;
 u8 VAR_10;
 irqreturn_t VAR_11 = VAR_1;
 u8 VAR_12 = 0;

 VAR_9->spsr = VAR_10 = FUNC_1(VAR_9, VAR_2);
 if (VAR_10 & VAR_5)
  VAR_12 |= VAR_3;
 if (VAR_10 & VAR_6)
  VAR_12 |= VAR_4;

 if (VAR_12) {
  VAR_11 = VAR_0;
  FUNC_0(VAR_9, VAR_12);
  FUNC_2(&VAR_9->wait);
 }

 return VAR_11;
}
