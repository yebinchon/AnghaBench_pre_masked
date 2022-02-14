
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct tty_dev {struct gdm** gdm; } ;
struct gdm {size_t index; size_t minor; int port; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int *** VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (int *) ;
 struct tty_struct* FUNC_4 (int *) ;
 int FUNC_5 (int ,size_t) ;
 int FUNC_6 (struct tty_struct*) ;

void FUNC_7(struct tty_dev *VAR_4)
{
 struct gdm *VAR_5;
 struct tty_struct *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5 = VAR_4->gdm[VAR_7];
  if (!VAR_5)
   continue;

  FUNC_0(&VAR_3);
  VAR_2[VAR_5->index][VAR_5->minor] = ((void*)0);
  FUNC_1(&VAR_3);

  VAR_6 = FUNC_4(&VAR_5->port);
  if (VAR_6) {
   FUNC_6(VAR_6);
   FUNC_2(VAR_6);
  }

  FUNC_5(VAR_1[VAR_7], VAR_5->minor);
  FUNC_3(&VAR_5->port);
 }
}
