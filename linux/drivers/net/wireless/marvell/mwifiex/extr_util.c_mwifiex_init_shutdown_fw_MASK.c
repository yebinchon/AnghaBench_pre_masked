
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct mwifiex_private {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (struct mwifiex_private*,int ,int ,int ,int *,int) ;

int FUNC_2(struct mwifiex_private *VAR_6,
        u32 VAR_7)
{
 u16 VAR_8;

 if (VAR_7 == VAR_4) {
  VAR_8 = VAR_2;
 } else if (VAR_7 == VAR_5) {
  VAR_8 = VAR_3;
 } else {
  FUNC_0(VAR_6->adapter, VAR_0,
       "unsupported parameter\n");
  return -1;
 }

 return FUNC_1(VAR_6, VAR_8, VAR_1, 0, ((void*)0), 1);
}
