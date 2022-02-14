
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct hvc_opal_priv {int hvsi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct hvc_opal_priv** VAR_1 ;
 int FUNC_1 (int *,char const*,int) ;

__attribute__((used)) static int FUNC_2(uint32_t VAR_2, const char *VAR_3, int VAR_4)
{
 struct hvc_opal_priv *VAR_5 = VAR_1[VAR_2];

 if (FUNC_0(!VAR_5))
  return -VAR_0;

 return FUNC_1(&VAR_5->hvsi, VAR_3, VAR_4);
}
