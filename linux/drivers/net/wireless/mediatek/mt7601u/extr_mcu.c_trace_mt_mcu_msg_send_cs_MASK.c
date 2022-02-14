
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct mt7601u_dev {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mt7601u_dev*,struct sk_buff*,int,int) ;

__attribute__((used)) static inline void FUNC_2(struct mt7601u_dev *VAR_0,
         struct sk_buff *VAR_1, bool VAR_2)
{
 u32 VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->len / 4; VAR_3++)
  VAR_4 ^= FUNC_0(VAR_1->data + VAR_3 * 4);

 FUNC_1(VAR_0, VAR_1, VAR_4, VAR_2);
}
