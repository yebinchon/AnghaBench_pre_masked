
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int dummy; } ;
struct tty_struct {int winsize_mutex; struct winsize winsize; } ;
struct pid {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pid*,int ,int) ;
 int FUNC_1 (struct winsize*,struct winsize*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pid*) ;
 struct pid* FUNC_5 (struct tty_struct*) ;

int FUNC_6(struct tty_struct *VAR_1, struct winsize *VAR_2)
{
 struct pid *VAR_3;


 FUNC_2(&VAR_1->winsize_mutex);
 if (!FUNC_1(VAR_2, &VAR_1->winsize, sizeof(*VAR_2)))
  goto done;


 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3)
  FUNC_0(VAR_3, VAR_0, 1);
 FUNC_4(VAR_3);

 VAR_1->winsize = *VAR_2;
done:
 FUNC_3(&VAR_1->winsize_mutex);
 return 0;
}
