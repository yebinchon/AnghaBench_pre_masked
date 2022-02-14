
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct p54_sta_unlock {int addr; } ;
struct p54_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,int ) ;
 struct sk_buff* FUNC_1 (struct p54_common*,int ,int,int ,int ) ;
 int FUNC_2 (struct p54_common*,struct sk_buff*) ;
 struct p54_sta_unlock* FUNC_3 (struct sk_buff*,int) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct p54_common *VAR_5, u8 *VAR_6)
{
 struct sk_buff *VAR_7;
 struct p54_sta_unlock *VAR_8;

 VAR_7 = FUNC_1(VAR_5, VAR_4, sizeof(*VAR_8),
       VAR_3, VAR_2);
 if (FUNC_4(!VAR_7))
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_7, sizeof(*VAR_8));
 FUNC_0(VAR_8->addr, VAR_6, VAR_1);
 FUNC_2(VAR_5, VAR_7);
 return 0;
}
