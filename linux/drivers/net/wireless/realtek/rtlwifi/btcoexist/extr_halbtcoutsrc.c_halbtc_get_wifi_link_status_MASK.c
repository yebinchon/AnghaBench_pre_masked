
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct rtl_mac {scalar_t__ opmode; scalar_t__ link_state; } ;
struct btc_coexist {struct rtl_priv* adapter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct btc_coexist*) ;
 struct rtl_mac* FUNC_1 (struct rtl_priv*) ;

__attribute__((used)) static u32 FUNC_2(struct btc_coexist *VAR_4)
{




 struct rtl_priv *VAR_5 = VAR_4->adapter;
 struct rtl_mac *VAR_6 = FUNC_1(VAR_5);
 u32 VAR_7 = 0;
 u32 VAR_8 = 0, VAR_9 = 0;

 if (VAR_6->opmode == VAR_1 &&
     VAR_6->link_state >= VAR_0) {
  VAR_8 |= VAR_3;
  VAR_9++;
 }

 if (FUNC_0(VAR_4)) {
  VAR_8 |= VAR_2;
  VAR_9++;
 }


 VAR_7 = (VAR_9 << 16) | VAR_8;

 return VAR_7;
}
