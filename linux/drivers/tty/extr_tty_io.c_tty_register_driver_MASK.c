
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_driver {int num; int flags; int tty_drivers; int name; int minor_start; scalar_t__ major; } ;
struct device {int dummy; } ;
typedef int dev_t ;


 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,int ,int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct tty_driver*) ;
 int FUNC_11 (int ,int,int ) ;
 int FUNC_12 (struct tty_driver*,int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct device* FUNC_13 (struct tty_driver*,int,int *) ;
 int FUNC_14 (struct tty_driver*,int) ;
 int FUNC_15 (int ,int) ;

int FUNC_16(struct tty_driver *VAR_5)
{
 int VAR_6;
 int VAR_7;
 dev_t VAR_8;
 struct device *VAR_9;

 if (!VAR_5->major) {
  VAR_6 = FUNC_5(&VAR_8, VAR_5->minor_start,
      VAR_5->num, VAR_5->name);
  if (!VAR_6) {
   VAR_5->major = FUNC_1(VAR_8);
   VAR_5->minor_start = FUNC_2(VAR_8);
  }
 } else {
  VAR_8 = FUNC_3(VAR_5->major, VAR_5->minor_start);
  VAR_6 = FUNC_11(VAR_8, VAR_5->num, VAR_5->name);
 }
 if (VAR_6 < 0)
  goto err;

 if (VAR_5->flags & VAR_0) {
  VAR_6 = FUNC_12(VAR_5, VAR_8, 0, VAR_5->num);
  if (VAR_6)
   goto err_unreg_char;
 }

 FUNC_8(&VAR_4);
 FUNC_6(&VAR_5->tty_drivers, &VAR_3);
 FUNC_9(&VAR_4);

 if (!(VAR_5->flags & VAR_1)) {
  for (VAR_7 = 0; VAR_7 < VAR_5->num; VAR_7++) {
   VAR_9 = FUNC_13(VAR_5, VAR_7, ((void*)0));
   if (FUNC_0(VAR_9)) {
    VAR_6 = FUNC_4(VAR_9);
    goto err_unreg_devs;
   }
  }
 }
 FUNC_10(VAR_5);
 VAR_5->flags |= VAR_2;
 return 0;

err_unreg_devs:
 for (VAR_7--; VAR_7 >= 0; VAR_7--)
  FUNC_14(VAR_5, VAR_7);

 FUNC_8(&VAR_4);
 FUNC_7(&VAR_5->tty_drivers);
 FUNC_9(&VAR_4);

err_unreg_char:
 FUNC_15(VAR_8, VAR_5->num);
err:
 return VAR_6;
}
