
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct lms283gf05_state {struct lcd_device* ld; struct spi_device* spi; } ;
struct lms283gf05_pdata {int reset_inverted; int reset_gpio; } ;
struct lcd_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct lcd_device*) ;
 int FUNC_2 (struct lcd_device*) ;
 struct lms283gf05_pdata* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int,char*) ;
 struct lms283gf05_state* FUNC_5 (int *,int,int ) ;
 struct lcd_device* FUNC_6 (int *,char*,int *,struct lms283gf05_state*,int *) ;
 int VAR_5 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct spi_device*,int ,int ) ;
 int VAR_6 ;
 int FUNC_9 (struct spi_device*,struct lms283gf05_state*) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_7)
{
 struct lms283gf05_state *VAR_8;
 struct lms283gf05_pdata *VAR_9 = FUNC_3(&VAR_7->dev);
 struct lcd_device *VAR_10;
 int VAR_11 = 0;

 if (VAR_9 != ((void*)0)) {
  VAR_11 = FUNC_4(&VAR_7->dev, VAR_9->reset_gpio,
    VAR_2 | (!VAR_9->reset_inverted ?
    VAR_3 : VAR_4),
    "LMS283GF05 RESET");
  if (VAR_11)
   return VAR_11;
 }

 VAR_8 = FUNC_5(&VAR_7->dev, sizeof(struct lms283gf05_state),
    VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_10 = FUNC_6(&VAR_7->dev, "lms283gf05", &VAR_7->dev, VAR_8,
     &VAR_6);
 if (FUNC_1(VAR_10))
  return FUNC_2(VAR_10);

 VAR_8->spi = VAR_7;
 VAR_8->ld = VAR_10;

 FUNC_9(VAR_7, VAR_8);


 if (VAR_9)
  FUNC_7(VAR_9->reset_gpio, VAR_9->reset_inverted);
 FUNC_8(VAR_7, VAR_5, FUNC_0(VAR_5));

 return 0;
}
