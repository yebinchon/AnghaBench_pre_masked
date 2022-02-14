
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_asy {int dev; } ;
struct sk_buff {int protocol; } ;
struct net_device {int dummy; } ;


 unsigned char VAR_0 ;
 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct x25_asy* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 unsigned char* FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_1, int VAR_2)
{
 struct x25_asy *VAR_3 = FUNC_2(VAR_1);
 struct sk_buff *VAR_4;
 unsigned char *VAR_5;

 VAR_4 = FUNC_0(1);
 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_1, "out of memory\n");
  return;
 }

 VAR_5 = FUNC_4(VAR_4, 1);
 *VAR_5 = VAR_0;

 VAR_4->protocol = FUNC_5(VAR_4, VAR_3->dev);
 FUNC_3(VAR_4);
}
