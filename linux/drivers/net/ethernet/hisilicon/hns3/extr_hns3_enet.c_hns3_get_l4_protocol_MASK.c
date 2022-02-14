
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union l3_hdr_info {unsigned char* hdr; TYPE_2__* v4; TYPE_1__* v6; } ;
typedef int u8 ;
struct sk_buff {scalar_t__ protocol; int data; int encapsulation; } ;
typedef int __be16 ;
struct TYPE_4__ {int version; int protocol; } ;
struct TYPE_3__ {int version; int nexthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,unsigned char*,int *,int *) ;
 unsigned char* FUNC_2 (struct sk_buff*) ;
 unsigned char* FUNC_3 (struct sk_buff*) ;
 unsigned char* FUNC_4 (struct sk_buff*) ;
 unsigned char* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3, u8 *VAR_4,
    u8 *VAR_5)
{
 union l3_hdr_info VAR_6;
 unsigned char *VAR_7;
 unsigned char *VAR_8;
 u8 VAR_9;
 __be16 VAR_10;


 VAR_6 = FUNC_4(VAR_3);
 VAR_7 = FUNC_5(VAR_3);

 if (VAR_3->protocol == FUNC_0(VAR_2)) {
  VAR_8 = VAR_6 + sizeof(*VAR_6);
  VAR_9 = VAR_6->nexthdr;
  if (VAR_7 != VAR_8)
   FUNC_1(VAR_3, VAR_8 - VAR_3->data,
      &VAR_9, &VAR_10);
 } else if (VAR_3->protocol == FUNC_0(VAR_1)) {
  VAR_9 = VAR_6->protocol;
 } else {
  return -VAR_0;
 }

 *VAR_4 = VAR_9;


 if (!VAR_3->encapsulation) {
  *VAR_5 = 0;
  return 0;
 }


 VAR_6 = FUNC_2(VAR_3);
 VAR_7 = FUNC_3(VAR_3);

 if (VAR_6->version == 6) {
  VAR_8 = VAR_6 + sizeof(*VAR_6);
  VAR_9 = VAR_6->nexthdr;
  if (VAR_7 != VAR_8)
   FUNC_1(VAR_3, VAR_8 - VAR_3->data,
      &VAR_9, &VAR_10);
 } else if (VAR_6->version == 4) {
  VAR_9 = VAR_6->protocol;
 }

 *VAR_5 = VAR_9;

 return 0;
}
