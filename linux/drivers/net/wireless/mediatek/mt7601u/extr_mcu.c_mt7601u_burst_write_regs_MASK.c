
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const u32 ;
struct sk_buff {int dummy; } ;
struct mt7601u_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ const VAR_5 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (struct mt7601u_dev*,struct sk_buff*,int ,int) ;
 int FUNC_3 (struct sk_buff*,scalar_t__ const) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;

int FUNC_5(struct mt7601u_dev *VAR_6, u32 VAR_7,
        const u32 *VAR_8, int VAR_9)
{
 const int VAR_10 = VAR_3 / 4 - 1;
 struct sk_buff *VAR_11;
 int VAR_12, VAR_13, VAR_14;

 if (!VAR_9)
  return 0;

 VAR_12 = FUNC_1(VAR_10, VAR_9);

 VAR_11 = FUNC_0(VAR_12 * 4 + VAR_4 + 4, VAR_2);
 if (!VAR_11)
  return -VAR_1;
 FUNC_4(VAR_11, VAR_4);

 FUNC_3(VAR_11, VAR_5 + VAR_7);
 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
  FUNC_3(VAR_11, VAR_8[VAR_13]);

 VAR_14 = FUNC_2(VAR_6, VAR_11, VAR_0, VAR_12 == VAR_9);
 if (VAR_14)
  return VAR_14;

 return FUNC_5(VAR_6, VAR_7 + VAR_12 * 4,
     VAR_8 + VAR_12, VAR_9 - VAR_12);
}
