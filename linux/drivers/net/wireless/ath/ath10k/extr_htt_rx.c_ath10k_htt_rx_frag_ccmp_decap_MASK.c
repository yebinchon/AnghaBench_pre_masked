
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int* data; scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_5,
      u16 VAR_6,
      u16 VAR_7)
{
 u8 *VAR_8, *VAR_9;

 VAR_9 = VAR_5->data;
 VAR_8 = VAR_9 + VAR_7 + VAR_6;


 if (!(VAR_8[VAR_4 - 1] & VAR_0))
  return -VAR_1;

 FUNC_2(VAR_5, VAR_5->len - VAR_3);
 FUNC_0(VAR_9 + VAR_2, VAR_9, VAR_6 + VAR_7);
 FUNC_1(VAR_5, VAR_2);
 return 0;
}
