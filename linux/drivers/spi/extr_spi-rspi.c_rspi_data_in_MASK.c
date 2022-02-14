
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rspi_data {TYPE_1__* ctlr; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct rspi_data*) ;
 int FUNC_2 (struct rspi_data*) ;

__attribute__((used)) static int FUNC_3(struct rspi_data *VAR_0)
{
 int VAR_1;
 u8 VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 < 0) {
  FUNC_0(&VAR_0->ctlr->dev, "receive timeout\n");
  return VAR_1;
 }
 VAR_2 = FUNC_1(VAR_0);
 return VAR_2;
}
