
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct pn533 {int* gb; size_t gb_len; } ;


 size_t VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int*,int) ;
 struct sk_buff* FUNC_2 (struct pn533*,unsigned int) ;
 int* FUNC_3 (struct sk_buff*,int*,size_t) ;
 int FUNC_4 (struct sk_buff*,size_t) ;
 int* FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct pn533 *VAR_1)
{
 struct sk_buff *VAR_2;
 u8 *VAR_3, *VAR_4;

 u8 *VAR_5 = VAR_1->gb;
 size_t VAR_6 = VAR_1->gb_len;

 u8 VAR_7[18] = {0x1, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xff};

 u8 VAR_8[6] = {0x1, 0x1,
          0x0, 0x0, 0x0,
          0x40};

 unsigned int VAR_9 = 36 +



          VAR_6 +
          1;

 VAR_2 = FUNC_2(VAR_1, VAR_9);
 if (!VAR_2)
  return ((void*)0);


 FUNC_4(VAR_2, VAR_0);


 FUNC_3(VAR_2, VAR_8, 6);


 VAR_3 = FUNC_3(VAR_2, VAR_7, 18);
 FUNC_0(VAR_3 + 2, 6);


 VAR_4 = FUNC_5(VAR_2, 10);
 FUNC_1(VAR_4, VAR_3, 8);


 FUNC_4(VAR_2, VAR_6);

 FUNC_3(VAR_2, VAR_5, VAR_6);


 FUNC_4(VAR_2, 0);

 return VAR_2;
}
