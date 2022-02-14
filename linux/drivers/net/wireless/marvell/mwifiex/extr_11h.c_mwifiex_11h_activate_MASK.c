
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mwifiex_private {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mwifiex_private*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mwifiex_private*,int ,int ,int ,int*,int) ;

int FUNC_2(struct mwifiex_private *VAR_5, bool VAR_6)
{
 u32 VAR_7 = VAR_6;


 if ((FUNC_0(VAR_5) == VAR_3) && VAR_7)
  VAR_7 |= VAR_4;

 return FUNC_1(VAR_5, VAR_2,
    VAR_1, VAR_0, &VAR_7, 1);
}
