
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dev_addr; } ;
struct bmac_data {int lock; scalar_t__ sleeping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct bmac_data*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 int FUNC_6 (struct net_device*,int ,int ) ;
 int FUNC_7 (unsigned char*,int ,int) ;
 struct sk_buff* FUNC_8 (struct net_device*,int ) ;
 struct bmac_data* FUNC_9 (struct net_device*) ;
 unsigned char* FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_13(struct net_device *VAR_4)
{
 struct bmac_data *VAR_5 = FUNC_9(VAR_4);
 unsigned long VAR_6;
 struct sk_buff *VAR_7;
 unsigned char *VAR_8;

 FUNC_11(&VAR_5->lock, VAR_6);
 FUNC_0(VAR_4);
 FUNC_3(VAR_5);
 FUNC_2(VAR_4);
 FUNC_1(VAR_4);
 FUNC_4(VAR_4);
 FUNC_6(VAR_4, VAR_3, VAR_2);
 VAR_5->sleeping = 0;





 VAR_7 = FUNC_8(VAR_4, VAR_0);
 if (VAR_7 != ((void*)0)) {
  VAR_8 = FUNC_10(VAR_7, VAR_0);
  FUNC_7(VAR_8, VAR_4->dev_addr, VAR_1);
  FUNC_7(VAR_8 + VAR_1, VAR_4->dev_addr, VAR_1);
  FUNC_5(VAR_7, VAR_4);
 }
 FUNC_12(&VAR_5->lock, VAR_6);
}
