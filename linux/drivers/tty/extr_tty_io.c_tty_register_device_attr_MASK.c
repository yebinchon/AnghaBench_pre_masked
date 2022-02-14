
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_driver {unsigned int num; scalar_t__ type; int flags; struct ktermios** termios; int name; int minor_start; int major; } ;
struct ktermios {int dummy; } ;
struct device {int kobj; struct attribute_group const** groups; int release; struct device* parent; int class; scalar_t__ devt; } ;
struct attribute_group {int dummy; } ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct device* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct device*,void*) ;
 int FUNC_3 (struct device*,char*,char*) ;
 int FUNC_4 (struct device*,int) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct ktermios*) ;
 int FUNC_8 (int *,int ) ;
 struct device* FUNC_9 (int,int ) ;
 int FUNC_10 (char*,int ,unsigned int) ;
 int FUNC_11 (struct tty_driver*,unsigned int,char*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct tty_driver*,scalar_t__,unsigned int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (struct tty_driver*,unsigned int,char*) ;

struct device *FUNC_15(struct tty_driver *VAR_8,
       unsigned VAR_9, struct device *VAR_10,
       void *VAR_11,
       const struct attribute_group **VAR_12)
{
 char VAR_13[64];
 dev_t VAR_14 = FUNC_1(VAR_8->major, VAR_8->minor_start) + VAR_9;
 struct ktermios *VAR_15;
 struct device *VAR_16;
 int VAR_17;

 if (VAR_9 >= VAR_8->num) {
  FUNC_10("%s: Attempt to register invalid tty line number (%d)\n",
         VAR_8->name, VAR_9);
  return FUNC_0(-VAR_0);
 }

 if (VAR_8->type == VAR_5)
  FUNC_11(VAR_8, VAR_9, VAR_13);
 else
  FUNC_14(VAR_8, VAR_9, VAR_13);

 VAR_16 = FUNC_9(sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return FUNC_0(-VAR_1);

 VAR_16->devt = VAR_14;
 VAR_16->class = VAR_6;
 VAR_16->parent = VAR_10;
 VAR_16->release = VAR_7;
 FUNC_3(VAR_16, "%s", VAR_13);
 VAR_16->groups = VAR_12;
 FUNC_2(VAR_16, VAR_11);

 FUNC_4(VAR_16, 1);

 VAR_17 = FUNC_6(VAR_16);
 if (VAR_17)
  goto err_put;

 if (!(VAR_8->flags & VAR_4)) {




  VAR_15 = VAR_8->termios[VAR_9];
  if (VAR_15) {
   VAR_8->termios[VAR_9] = ((void*)0);
   FUNC_7(VAR_15);
  }

  VAR_17 = FUNC_13(VAR_8, VAR_14, VAR_9, 1);
  if (VAR_17)
   goto err_del;
 }

 FUNC_4(VAR_16, 0);
 FUNC_8(&VAR_16->kobj, VAR_3);

 return VAR_16;

err_del:
 FUNC_5(VAR_16);
err_put:
 FUNC_12(VAR_16);

 return FUNC_0(VAR_17);
}
