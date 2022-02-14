
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int protocol; } ;
struct net_device {int dummy; } ;


 unsigned char VAR_0 ;
 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*) ;
 unsigned char* FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1, int VAR_2)
{
 unsigned char *VAR_3;
 struct sk_buff *VAR_4 = FUNC_0(1);

 if (!VAR_4) {
  FUNC_2("out of memory\n");
  return;
 }

 VAR_3 = FUNC_3(VAR_4, 1);
 *VAR_3 = VAR_0;

 VAR_4->protocol = FUNC_4(VAR_4, VAR_1);
 FUNC_1(VAR_4);
}
