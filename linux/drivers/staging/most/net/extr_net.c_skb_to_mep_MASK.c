
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; int data; } ;
struct mbo {unsigned int buffer_length; int * virt_address; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(const struct sk_buff *VAR_9, struct mbo *VAR_10)
{
 u8 *VAR_11 = VAR_10->virt_address;
 unsigned int VAR_12 = VAR_9->len + VAR_2;

 if (VAR_10->buffer_length < VAR_12) {
  FUNC_3("drop: too small buffer! (%d for %d)\n",
         VAR_10->buffer_length, VAR_12);
  return -VAR_0;
 }

 *VAR_11++ = FUNC_0(VAR_12 - 2);
 *VAR_11++ = FUNC_1(VAR_12 - 2);

 *VAR_11++ = VAR_3;
 *VAR_11++ = (VAR_5 << VAR_6) | VAR_7;
 *VAR_11++ = (VAR_1 << VAR_8) | VAR_4;
 *VAR_11++ = 0;
 *VAR_11++ = 0;
 *VAR_11++ = 0;

 FUNC_2(VAR_11, VAR_9->data, VAR_9->len);
 VAR_10->buffer_length = VAR_12;
 return 0;
}
