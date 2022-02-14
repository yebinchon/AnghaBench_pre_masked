
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct rtllib_info_element {int dummy; } ;
struct TYPE_2__ {int addr2; } ;
struct rtllib_assoc_request_frame {TYPE_1__ header; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct net_device*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, struct sk_buff *VAR_1, u8 *VAR_2)
{
 struct rtllib_assoc_request_frame *VAR_3;

 if (VAR_1->len < (sizeof(struct rtllib_assoc_request_frame) -
  sizeof(struct rtllib_info_element))) {
  FUNC_1(VAR_0, "invalid len in auth request:%d\n", VAR_1->len);
  return -1;
 }

 VAR_3 = (struct rtllib_assoc_request_frame *) VAR_1->data;

 FUNC_0(VAR_2, VAR_3->header.addr2);

 return 0;
}
