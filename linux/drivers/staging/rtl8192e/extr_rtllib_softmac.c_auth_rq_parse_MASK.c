
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct rtllib_info_element {int dummy; } ;
struct TYPE_2__ {int addr2; } ;
struct rtllib_authentication {int algorithm; TYPE_1__ header; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, struct sk_buff *VAR_4, u8 *VAR_5)
{
 struct rtllib_authentication *VAR_6;

 if (VAR_4->len < (sizeof(struct rtllib_authentication) -
     sizeof(struct rtllib_info_element))) {
  FUNC_2(VAR_3, "invalid len in auth request: %d\n", VAR_4->len);
  return -1;
 }
 VAR_6 = (struct rtllib_authentication *) VAR_4->data;

 FUNC_0(VAR_5, VAR_6->header.addr2);

 if (FUNC_1(VAR_6->algorithm) != VAR_0)
  return VAR_1;

 return VAR_2;
}
