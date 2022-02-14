
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int port; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_2, int VAR_3)
{
 if (FUNC_0(!VAR_2 || !VAR_2->port))
  return 1;




 if (FUNC_1(VAR_0, &VAR_2->flags) ||
     (FUNC_2(VAR_2->port, VAR_1) < VAR_1))
  return 0;

 return 1;
}
