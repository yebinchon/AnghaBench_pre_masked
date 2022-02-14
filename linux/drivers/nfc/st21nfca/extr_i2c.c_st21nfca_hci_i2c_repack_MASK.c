
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; int* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;

 if (VAR_3->len < 1 || (VAR_3->len > 1 && VAR_3->data[1] != 0))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_3->data, VAR_3->len);
 if (VAR_7 > 0) {
  FUNC_3(VAR_3, VAR_7);

  for (VAR_4 = 1, VAR_5 = 0; VAR_4 < VAR_3->len; VAR_4++) {
   if (VAR_3->data[VAR_4 + VAR_5] ==
     (u8) VAR_2) {
    VAR_3->data[VAR_4] = VAR_3->data[VAR_4 + VAR_5 + 1]
      | VAR_1;
    VAR_4++;
    VAR_5++;
   }
   VAR_3->data[VAR_4] = VAR_3->data[VAR_4 + VAR_5];
  }

  FUNC_3(VAR_3, VAR_4 - VAR_5);

  FUNC_2(VAR_3, 1);

  VAR_6 = FUNC_0(VAR_3->data, VAR_3->len);
  if (VAR_6 != 0) {
   VAR_4 = 0;
   return -VAR_0;
  }


  FUNC_2(VAR_3, 1);

  FUNC_3(VAR_3, VAR_3->len - 2);
  return VAR_3->len;
 }
 return 0;
}
