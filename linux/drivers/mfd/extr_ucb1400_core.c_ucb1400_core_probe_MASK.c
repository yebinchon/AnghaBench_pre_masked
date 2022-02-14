
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucb_ts ;
typedef int ucb_gpio ;
struct ucb1400_ts {scalar_t__ id; int irq; struct snd_ac97* ac97; int gpio_offset; int gpio_teardown; int gpio_setup; } ;
struct ucb1400_pdata {scalar_t__ irq; int gpio_offset; int gpio_teardown; int gpio_setup; } ;
struct ucb1400_gpio {scalar_t__ id; int irq; struct snd_ac97* ac97; int gpio_offset; int gpio_teardown; int gpio_setup; } ;
struct ucb1400 {void* ucb1400_gpio; void* ucb1400_ts; } ;
struct snd_ac97 {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct ucb1400_pdata* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,struct ucb1400*) ;
 int FUNC_2 (struct ucb1400*) ;
 struct ucb1400* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ucb1400_ts*,int ,int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*,struct ucb1400_ts*,int) ;
 void* FUNC_7 (char*,int) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 struct snd_ac97* FUNC_10 (struct device*) ;
 scalar_t__ FUNC_11 (struct snd_ac97*,int ) ;

__attribute__((used)) static int FUNC_12(struct device *VAR_5)
{
 int VAR_6;
 struct ucb1400 *VAR_7;
 struct ucb1400_ts VAR_8;
 struct ucb1400_gpio VAR_9;
 struct snd_ac97 *VAR_10;
 struct ucb1400_pdata *VAR_11 = FUNC_0(VAR_5);

 FUNC_4(&VAR_8, 0, sizeof(VAR_8));
 FUNC_4(&VAR_9, 0, sizeof(VAR_9));

 VAR_7 = FUNC_3(sizeof(struct ucb1400), VAR_2);
 if (!VAR_7) {
  VAR_6 = -VAR_1;
  goto err;
 }

 FUNC_1(VAR_5, VAR_7);

 VAR_10 = FUNC_10(VAR_5);

 VAR_8.id = FUNC_11(VAR_10, VAR_3);
 if (VAR_8.id != VAR_4) {
  VAR_6 = -VAR_0;
  goto err0;
 }


 VAR_9.ac97 = VAR_10;
 if (VAR_11) {
  VAR_9.gpio_setup = VAR_11->gpio_setup;
  VAR_9.gpio_teardown = VAR_11->gpio_teardown;
  VAR_9.gpio_offset = VAR_11->gpio_offset;
 }
 VAR_7->ucb1400_gpio = FUNC_7("ucb1400_gpio", -1);
 if (!VAR_7->ucb1400_gpio) {
  VAR_6 = -VAR_1;
  goto err0;
 }
 VAR_6 = FUNC_6(VAR_7->ucb1400_gpio, &VAR_9,
     sizeof(VAR_9));
 if (VAR_6)
  goto err1;
 VAR_6 = FUNC_5(VAR_7->ucb1400_gpio);
 if (VAR_6)
  goto err1;


 VAR_8.ac97 = VAR_10;

 if (VAR_11 != ((void*)0) && VAR_11->irq >= 0)
  VAR_8.irq = VAR_11->irq;
 else
  VAR_8.irq = -1;

 VAR_7->ucb1400_ts = FUNC_7("ucb1400_ts", -1);
 if (!VAR_7->ucb1400_ts) {
  VAR_6 = -VAR_1;
  goto err2;
 }
 VAR_6 = FUNC_6(VAR_7->ucb1400_ts, &VAR_8,
     sizeof(VAR_8));
 if (VAR_6)
  goto err3;
 VAR_6 = FUNC_5(VAR_7->ucb1400_ts);
 if (VAR_6)
  goto err3;

 return 0;

err3:
 FUNC_9(VAR_7->ucb1400_ts);
err2:
 FUNC_8(VAR_7->ucb1400_gpio);
err1:
 FUNC_9(VAR_7->ucb1400_gpio);
err0:
 FUNC_2(VAR_7);
err:
 return VAR_6;
}
