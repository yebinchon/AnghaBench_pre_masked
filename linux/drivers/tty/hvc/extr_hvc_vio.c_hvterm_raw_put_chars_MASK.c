
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct hvterm_priv {int termno; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char const*,int) ;
 struct hvterm_priv** VAR_0 ;

__attribute__((used)) static int FUNC_2(uint32_t VAR_1, const char *VAR_2, int VAR_3)
{
 struct hvterm_priv *VAR_4 = VAR_0[VAR_1];

 if (FUNC_0(!VAR_4))
  return 0;

 return FUNC_1(VAR_4->termno, VAR_2, VAR_3);
}
