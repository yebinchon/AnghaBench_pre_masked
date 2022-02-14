
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct baycom_state {int options; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct baycom_state *VAR_1, const char *VAR_2)
{
 if (!FUNC_1(VAR_2, "picpar", 6))
  VAR_1->options = 0;
 else if (!FUNC_1(VAR_2, "par96", 5))
  VAR_1->options = VAR_0;
 else
  VAR_1->options = !!FUNC_0(VAR_2, '*');
 return 0;
}
