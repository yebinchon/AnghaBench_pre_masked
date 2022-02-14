
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int port; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_0(!VAR_0 || !VAR_0->port))
  return VAR_3;

 VAR_3 = FUNC_2(VAR_0->port, VAR_1, VAR_2);
 if (VAR_3)
  FUNC_1(VAR_0->port);

 return VAR_3;
}
