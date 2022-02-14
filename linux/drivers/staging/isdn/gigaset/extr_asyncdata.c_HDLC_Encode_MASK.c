
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; int len; scalar_t__ mac_len; } ;
typedef int __u16 ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (int,int ) ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,unsigned char) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct sk_buff *VAR_4)
{
 struct sk_buff *VAR_5;
 __u16 VAR_6;
 unsigned char VAR_7;
 unsigned char *VAR_8;
 int VAR_9;
 unsigned int VAR_10;

 VAR_10 = 0;
 VAR_6 = VAR_2;
 VAR_8 = VAR_4->data;
 VAR_9 = VAR_4->len;
 while (VAR_9--) {
  if (FUNC_4(*VAR_8))
   VAR_10++;
  VAR_6 = FUNC_0(VAR_6, *VAR_8++);
 }
 VAR_6 ^= 0xffff;





 VAR_5 = FUNC_1(VAR_4->len + VAR_10 + 6 + VAR_4->mac_len);
 if (!VAR_5) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }


 FUNC_8(VAR_5);
 FUNC_7(VAR_5, VAR_4->mac_len);
 FUNC_3(FUNC_5(VAR_5), FUNC_5(VAR_4), VAR_4->mac_len);
 VAR_5->mac_len = VAR_4->mac_len;


 FUNC_6(VAR_5, VAR_1);


 while (VAR_4->len--) {
  if (FUNC_4(*VAR_4->data)) {
   FUNC_6(VAR_5, VAR_0);
   FUNC_6(VAR_5, (*VAR_4->data++) ^ VAR_3);
  } else
   FUNC_6(VAR_5, *VAR_4->data++);
 }


 VAR_7 = (VAR_6 & 0x00ff);
 if (FUNC_4(VAR_7)) {
  FUNC_6(VAR_5, VAR_0);
  VAR_7 ^= VAR_3;
 }
 FUNC_6(VAR_5, VAR_7);

 VAR_7 = ((VAR_6 >> 8) & 0x00ff);
 if (FUNC_4(VAR_7)) {
  FUNC_6(VAR_5, VAR_0);
  VAR_7 ^= VAR_3;
 }
 FUNC_6(VAR_5, VAR_7);

 FUNC_6(VAR_5, VAR_1);

 FUNC_2(VAR_4);
 return VAR_5;
}
