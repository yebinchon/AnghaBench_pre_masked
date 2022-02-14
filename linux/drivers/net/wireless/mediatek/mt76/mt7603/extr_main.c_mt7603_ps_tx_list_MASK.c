
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct mt7603_dev {int dummy; } ;


 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct mt7603_dev*,int ,struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_3(struct mt7603_dev *VAR_0, struct sk_buff_head *VAR_1)
{
 struct sk_buff *VAR_2;

 while ((VAR_2 = FUNC_0(VAR_1)) != ((void*)0))
  FUNC_1(VAR_0, FUNC_2(VAR_2),
          VAR_2, 0);
}
