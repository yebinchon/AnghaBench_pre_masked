
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; int protocol; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, struct sk_buff *VAR_3)
{
 unsigned char *VAR_4;

 FUNC_2(VAR_3, 1);

 if (FUNC_1(VAR_3, 1))
  return VAR_0;

 VAR_4 = VAR_3->data;
 *VAR_4 = VAR_1;

 VAR_3->protocol = FUNC_3(VAR_3, VAR_2);
 return FUNC_0(VAR_3);
}
