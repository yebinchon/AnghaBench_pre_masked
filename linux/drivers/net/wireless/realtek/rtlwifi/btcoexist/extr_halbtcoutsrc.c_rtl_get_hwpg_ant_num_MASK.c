
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ ant_num; } ;
struct TYPE_4__ {TYPE_1__ btc_info; } ;
struct rtl_priv {TYPE_2__ btcoexist; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u8 FUNC_0(struct rtl_priv *VAR_1)
{
 u8 VAR_2;

 if (VAR_1->btcoexist.btc_info.ant_num == VAR_0)
  VAR_2 = 2;
 else
  VAR_2 = 1;

 return VAR_2;
}
