
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int mode; int cs_gpio; int dev; int master; scalar_t__ controller_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_2->controller_state)
  VAR_2->controller_state = FUNC_5(VAR_2->master);
 else if (FUNC_3(VAR_2->cs_gpio))
  goto out_gpio;
 else if (VAR_2->cs_gpio == -VAR_0)
  return 0;

 if (FUNC_3(VAR_2->cs_gpio)) {
  VAR_3 = FUNC_4(VAR_2->cs_gpio, FUNC_1(&VAR_2->dev));
  if (VAR_3) {
   FUNC_0(&VAR_2->dev, "failed to request cs gpio\n");
   return VAR_3;
  }
 }

out_gpio:
 VAR_3 = FUNC_2(VAR_2->cs_gpio,
   !(VAR_2->mode & VAR_1));

 return VAR_3;
}
