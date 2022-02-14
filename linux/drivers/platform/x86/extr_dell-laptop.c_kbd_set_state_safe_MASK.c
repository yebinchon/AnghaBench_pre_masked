
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbd_state {int dummy; } ;


 int FUNC_0 (struct kbd_state*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct kbd_state *VAR_0, struct kbd_state *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 == 0)
  return 0;







 if (FUNC_0(VAR_1))
  FUNC_1("Setting old previous keyboard state failed\n");

 return VAR_2;
}
