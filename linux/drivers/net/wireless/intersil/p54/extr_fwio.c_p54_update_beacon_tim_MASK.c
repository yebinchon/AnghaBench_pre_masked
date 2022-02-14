
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct p54_tim {int count; int * entry; } ;
struct p54_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (struct p54_common*,int ,int,int ,int ) ;
 int FUNC_2 (struct p54_common*,struct sk_buff*) ;
 struct p54_tim* FUNC_3 (struct sk_buff*,int) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct p54_common *VAR_4, u16 VAR_5, bool VAR_6)
{
 struct sk_buff *VAR_7;
 struct p54_tim *VAR_8;

 VAR_7 = FUNC_1(VAR_4, VAR_3, sizeof(*VAR_8),
       VAR_2, VAR_1);
 if (FUNC_4(!VAR_7))
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_7, sizeof(*VAR_8));
 VAR_8->count = 1;
 VAR_8->entry[0] = FUNC_0(VAR_6 ? (VAR_5 | 0x8000) : VAR_5);
 FUNC_2(VAR_4, VAR_7);
 return 0;
}
