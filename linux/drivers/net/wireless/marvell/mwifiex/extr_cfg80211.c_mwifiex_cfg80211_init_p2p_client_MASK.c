
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mwifiex_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mwifiex_private*) ;
 scalar_t__ FUNC_1 (struct mwifiex_private*,int ,int ,int ,int *,int) ;

__attribute__((used)) static int
FUNC_2(struct mwifiex_private *VAR_4)
{
 u16 VAR_5;

 if (FUNC_0(VAR_4))
  return -1;

 VAR_5 = VAR_3;
 if (FUNC_1(VAR_4, VAR_1,
        VAR_0, 0, &VAR_5, 1))
  return -1;

 VAR_5 = VAR_2;
 if (FUNC_1(VAR_4, VAR_1,
        VAR_0, 0, &VAR_5, 1))
  return -1;

 return 0;
}
