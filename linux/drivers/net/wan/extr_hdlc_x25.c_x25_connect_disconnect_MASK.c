
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int protocol; } ;
struct net_device {int dummy; } ;


 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 (struct sk_buff*) ;
 unsigned char* FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0, int VAR_1, int VAR_2)
{
 struct sk_buff *VAR_3;
 unsigned char *VAR_4;

 if ((VAR_3 = FUNC_0(1)) == ((void*)0)) {
  FUNC_1(VAR_0, "out of memory\n");
  return;
 }

 VAR_4 = FUNC_3(VAR_3, 1);
 *VAR_4 = VAR_2;

 VAR_3->protocol = FUNC_4(VAR_3, VAR_0);
 FUNC_2(VAR_3);
}
