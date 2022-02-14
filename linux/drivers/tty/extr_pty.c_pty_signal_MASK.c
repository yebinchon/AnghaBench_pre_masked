
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ link; } ;
struct pid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pid*,int,int) ;
 int FUNC_1 (struct pid*) ;
 struct pid* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_4, int VAR_5)
{
 struct pid *VAR_6;

 if (VAR_5 != VAR_1 && VAR_5 != VAR_2 && VAR_5 != VAR_3)
  return -VAR_0;

 if (VAR_4->link) {
  VAR_6 = FUNC_2(VAR_4->link);
  if (VAR_6)
   FUNC_0(VAR_6, VAR_5, 1);
  FUNC_1(VAR_6);
 }
 return 0;
}
