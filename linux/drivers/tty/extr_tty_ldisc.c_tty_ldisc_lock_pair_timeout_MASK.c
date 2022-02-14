
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tty_struct*,unsigned long) ;
 int FUNC_2 (struct tty_struct*,unsigned long) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int
FUNC_5(struct tty_struct *VAR_2, struct tty_struct *VAR_3,
       unsigned long VAR_4)
{
 int VAR_5;

 if (VAR_2 < VAR_3) {
  VAR_5 = FUNC_1(VAR_2, VAR_4);
  if (VAR_5) {
   VAR_5 = FUNC_2(VAR_3, VAR_4);
   if (!VAR_5)
    FUNC_3(VAR_2);
  }
 } else {

  FUNC_0(VAR_2 == VAR_3);
  if (VAR_3 && VAR_2 != VAR_3) {
   VAR_5 = FUNC_1(VAR_3, VAR_4);
   if (VAR_5) {
    VAR_5 = FUNC_2(VAR_2, VAR_4);
    if (!VAR_5)
     FUNC_3(VAR_3);
   }
  } else
   VAR_5 = FUNC_1(VAR_2, VAR_4);
 }

 if (!VAR_5)
  return -VAR_0;

 FUNC_4(VAR_1, &VAR_2->flags);
 if (VAR_3)
  FUNC_4(VAR_1, &VAR_3->flags);
 return 0;
}
