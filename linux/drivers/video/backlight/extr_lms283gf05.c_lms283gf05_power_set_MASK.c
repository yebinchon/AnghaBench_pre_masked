
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct lms283gf05_state {struct spi_device* spi; } ;
struct lms283gf05_pdata {int reset_inverted; int reset_gpio; } ;
struct lcd_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct lms283gf05_pdata* FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 struct lms283gf05_state* FUNC_3 (struct lcd_device*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct spi_device*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct lcd_device *VAR_3, int VAR_4)
{
 struct lms283gf05_state *VAR_5 = FUNC_3(VAR_3);
 struct spi_device *VAR_6 = VAR_5->spi;
 struct lms283gf05_pdata *VAR_7 = FUNC_1(&VAR_6->dev);

 if (VAR_4 <= VAR_0) {
  if (VAR_7)
   FUNC_4(VAR_7->reset_gpio,
     VAR_7->reset_inverted);
  FUNC_5(VAR_6, VAR_1, FUNC_0(VAR_1));
 } else {
  FUNC_5(VAR_6, VAR_2, FUNC_0(VAR_2));
  if (VAR_7)
   FUNC_2(VAR_7->reset_gpio,
     VAR_7->reset_inverted);
 }

 return 0;
}
