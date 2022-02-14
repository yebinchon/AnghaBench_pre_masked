
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; int irq; int name; } ;
struct hp100_private {scalar_t__ bus; int hash_bytes; int mac2_mode; int mac1_mode; int lan_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_7 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,int,int) ;
 struct hp100_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (char*,int ,...) ;
 scalar_t__ FUNC_10 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_8)
{
 struct hp100_private *VAR_9 = FUNC_6(VAR_8);
 if (FUNC_10(VAR_8->irq, VAR_7,
   VAR_9->bus == VAR_2 || VAR_9->bus ==
   VAR_1 ? VAR_5 : 0,
   VAR_8->name, VAR_8)) {
  FUNC_9("hp100: %s: unable to get IRQ %d\n", VAR_8->name, VAR_8->irq);
  return -VAR_0;
 }

 FUNC_8(VAR_8);
 FUNC_7(VAR_8);

 VAR_9->lan_type = FUNC_2(VAR_8);
 VAR_9->mac1_mode = VAR_3;
 VAR_9->mac2_mode = VAR_4;
 FUNC_5(&VAR_9->hash_bytes, 0x00, 8);

 FUNC_4(VAR_8);

 FUNC_0(VAR_8);

 FUNC_3(VAR_8);

 return 0;
}
