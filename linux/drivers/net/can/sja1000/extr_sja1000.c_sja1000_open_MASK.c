
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1000_priv {int flags; int irq_flags; } ;
struct net_device {int name; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*) ;
 struct sja1000_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ,int ,int ,void*) ;
 int FUNC_6 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_4)
{
 struct sja1000_priv *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;


 FUNC_6(VAR_4);


 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  return VAR_6;


 if (!(VAR_5->flags & VAR_2)) {
  VAR_6 = FUNC_5(VAR_4->irq, VAR_3, VAR_5->irq_flags,
      VAR_4->name, (void *)VAR_4);
  if (VAR_6) {
   FUNC_1(VAR_4);
   return -VAR_1;
  }
 }


 FUNC_7(VAR_4);

 FUNC_0(VAR_4, VAR_0);

 FUNC_3(VAR_4);

 return 0;
}
