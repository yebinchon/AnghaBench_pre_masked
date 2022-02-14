
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {size_t len; int* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int,int,int*,size_t) ;
 int FUNC_2 (int*,int const*,int) ;
 int FUNC_3 (struct sk_buff*,size_t) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2, unsigned int VAR_3,
           u8 VAR_4, size_t VAR_5)
{
 size_t VAR_6;
 const u8 *VAR_7;
 const u8 *VAR_8;
 u8 *VAR_9;

 if (FUNC_0(VAR_2->len < VAR_5))
  return -VAR_0;

 VAR_9 = (u8 *)FUNC_1(VAR_3, VAR_4,
        VAR_2->data + VAR_5,
        VAR_2->len - VAR_5);
 if (!VAR_9)
  return -VAR_1;

 VAR_6 = VAR_9[1] + 2;
 VAR_8 = VAR_2->data + VAR_2->len;
 VAR_7 = VAR_9 + VAR_6;

 if (FUNC_0(VAR_7 > VAR_8))
  return -VAR_0;

 FUNC_2(VAR_9, VAR_7, VAR_8 - VAR_7);
 FUNC_3(VAR_2, VAR_2->len - VAR_6);

 return 0;
}
