
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int port; } ;
struct tty_driver {int port; } ;
typedef int dev_t ;


 int VAR_0 ;
 struct tty_struct* FUNC_0 (struct tty_struct*) ;
 struct tty_struct* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tty_struct*) ;
 struct tty_struct* FUNC_6 (struct tty_struct*,int *,int) ;
 struct tty_struct* FUNC_7 (struct tty_struct*,int) ;
 int FUNC_8 (struct tty_struct*) ;
 struct tty_struct* FUNC_9 (int ,int *,int*) ;
 int VAR_1 ;
 int FUNC_10 (int ,int) ;

struct tty_struct *FUNC_11(dev_t VAR_2)
{
 struct tty_struct *VAR_3;
 struct tty_driver *VAR_4 = ((void*)0);
 int VAR_5 = -1;

 FUNC_3(&VAR_1);
 VAR_4 = FUNC_9(VAR_2, ((void*)0), &VAR_5);
 if (FUNC_2(VAR_4)) {
  FUNC_4(&VAR_1);
  return FUNC_0(VAR_4);
 }


 VAR_3 = FUNC_6(VAR_4, ((void*)0), VAR_5);
 if (FUNC_2(VAR_3))
  goto out;

 if (VAR_3) {

  FUNC_8(VAR_3);
  VAR_3 = FUNC_1(-VAR_0);
 } else {
  VAR_3 = FUNC_7(VAR_4, VAR_5);
  if (FUNC_2(VAR_3))
   goto out;
  FUNC_10(VAR_3->port, 1);
 }
out:
 FUNC_4(&VAR_1);
 FUNC_5(VAR_4);
 return VAR_3;
}
