
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rspi_data {TYPE_1__* ctlr; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct rspi_data*,unsigned int) ;
 unsigned int FUNC_2 (struct rspi_data*,unsigned int) ;
 int FUNC_3 (struct rspi_data*) ;
 int FUNC_4 (struct rspi_data*) ;
 int FUNC_5 (struct rspi_data*) ;
 int FUNC_6 (struct rspi_data*,int ) ;

__attribute__((used)) static int FUNC_7(struct rspi_data *VAR_0, const u8 *VAR_1,
     u8 *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5;
 int VAR_6;

 while (VAR_3 > 0) {
  VAR_5 = FUNC_2(VAR_0, VAR_3);
  FUNC_1(VAR_0, VAR_3);
  VAR_6 = FUNC_5(VAR_0);
  if (VAR_6 < 0) {
   FUNC_0(&VAR_0->ctlr->dev, "transmit timeout\n");
   return VAR_6;
  }
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
   FUNC_6(VAR_0, *VAR_1++);

  VAR_6 = FUNC_4(VAR_0);
  if (VAR_6 < 0) {
   FUNC_0(&VAR_0->ctlr->dev, "receive timeout\n");
   return VAR_6;
  }
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
   *VAR_2++ = FUNC_3(VAR_0);

  VAR_3 -= VAR_5;
 }

 return 0;
}
