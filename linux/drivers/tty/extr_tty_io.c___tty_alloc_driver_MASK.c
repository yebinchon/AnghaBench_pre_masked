
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_driver {unsigned int num; unsigned long flags; struct tty_driver* cdevs; struct tty_driver* termios; struct tty_driver* ttys; struct tty_driver* ports; struct module* owner; int magic; int kref; } ;
struct module {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tty_driver* FUNC_0 (int) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 void* FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (struct tty_driver*) ;
 int FUNC_3 (int *) ;
 struct tty_driver* FUNC_4 (int,int ) ;

struct tty_driver *FUNC_5(unsigned int VAR_7, struct module *VAR_8,
  unsigned long VAR_9)
{
 struct tty_driver *VAR_10;
 unsigned int VAR_11 = 1;
 int VAR_12;

 if (!VAR_7 || (VAR_9 & VAR_6 && VAR_7 > 1))
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_4(sizeof(struct tty_driver), VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 FUNC_3(&VAR_10->kref);
 VAR_10->magic = VAR_5;
 VAR_10->num = VAR_7;
 VAR_10->owner = VAR_8;
 VAR_10->flags = VAR_9;

 if (!(VAR_9 & VAR_3)) {
  VAR_10->ttys = FUNC_1(VAR_7, sizeof(*VAR_10->ttys),
    VAR_2);
  VAR_10->termios = FUNC_1(VAR_7, sizeof(*VAR_10->termios),
    VAR_2);
  if (!VAR_10->ttys || !VAR_10->termios) {
   VAR_12 = -VAR_1;
   goto err_free_all;
  }
 }

 if (!(VAR_9 & VAR_4)) {
  VAR_10->ports = FUNC_1(VAR_7, sizeof(*VAR_10->ports),
    VAR_2);
  if (!VAR_10->ports) {
   VAR_12 = -VAR_1;
   goto err_free_all;
  }
  VAR_11 = VAR_7;
 }

 VAR_10->cdevs = FUNC_1(VAR_11, sizeof(*VAR_10->cdevs), VAR_2);
 if (!VAR_10->cdevs) {
  VAR_12 = -VAR_1;
  goto err_free_all;
 }

 return VAR_10;
err_free_all:
 FUNC_2(VAR_10->ports);
 FUNC_2(VAR_10->ttys);
 FUNC_2(VAR_10->termios);
 FUNC_2(VAR_10->cdevs);
 FUNC_2(VAR_10);
 return FUNC_0(VAR_12);
}
