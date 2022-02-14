
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int* data; scalar_t__ len; } ;
struct mbo {int* virt_address; unsigned int buffer_length; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int) ;
 void* FUNC_1 (unsigned int) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int*,scalar_t__,unsigned int) ;
 int FUNC_3 (char*,scalar_t__,...) ;

__attribute__((used)) static int FUNC_4(const struct sk_buff *VAR_9, struct mbo *VAR_10)
{
 u8 *VAR_11 = VAR_10->virt_address;
 static const u8 VAR_12[] = { 0x03, 0xFF };
 const u8 *VAR_13 = VAR_9->data + 4;
 const u8 *VAR_14 = VAR_9->data + 12;
 unsigned int VAR_15 = VAR_9->len - VAR_1;
 unsigned int VAR_16 = VAR_15 + VAR_2;

 if (VAR_10->buffer_length < VAR_16) {
  FUNC_3("drop: too small buffer! (%d for %d)\n",
         VAR_10->buffer_length, VAR_16);
  return -VAR_0;
 }

 if (VAR_9->len < VAR_1) {
  FUNC_3("drop: too small packet! (%d)\n", VAR_9->len);
  return -VAR_0;
 }

 if (VAR_13[0] == 0xFF && VAR_13[1] == 0xFF)
  VAR_13 = VAR_12;

 *VAR_11++ = FUNC_0(VAR_16 - 2);
 *VAR_11++ = FUNC_1(VAR_16 - 2);

 *VAR_11++ = VAR_3;
 *VAR_11++ = (VAR_5 << VAR_6) | VAR_7;
 *VAR_11++ = VAR_4;
 *VAR_11++ = VAR_13[0];
 *VAR_11++ = VAR_13[1];
 *VAR_11++ = 0x00;

 *VAR_11++ = FUNC_0(VAR_15 + 6);
 *VAR_11++ = FUNC_1(VAR_15 + 6);



 *VAR_11++ = VAR_14[0];
 *VAR_11++ = VAR_14[1];
 *VAR_11++ = 0;
 *VAR_11++ = 0;

 *VAR_11++ = VAR_8 << 4 | FUNC_0(VAR_15);
 *VAR_11++ = FUNC_1(VAR_15);

 FUNC_2(VAR_11, VAR_9->data + VAR_1, VAR_15);
 VAR_10->buffer_length = VAR_16;
 return 0;
}
