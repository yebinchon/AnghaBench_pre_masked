
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {char irq; scalar_t__ base_addr; } ;
struct frad_local {scalar_t__ type; int state; int initialized; } ;
typedef int irqreturn_t ;
typedef int byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct frad_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*,char) ;
 int FUNC_2 (int ,scalar_t__) ;
 char FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ,int ,int ,int *,int ,int *,int *) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int ,char*,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_9, void *VAR_10)
{
 struct net_device *VAR_11;
 struct frad_local *VAR_12;
 char VAR_13;

 VAR_11 = VAR_10;

 VAR_12 = FUNC_0(VAR_11);

 if (!VAR_12->initialized)
 {
  FUNC_1(VAR_11, "irq %d for uninitialized device\n", VAR_11->irq);
  return VAR_1;
 }

 VAR_13 = FUNC_3(VAR_11, VAR_12->type == VAR_8 ? VAR_3 : VAR_2);
 switch (VAR_13)
 {
  case 131:
   FUNC_5(VAR_11);
   break;


  case 132:
  case 130:
   FUNC_4(VAR_11, VAR_4, 0, 0, ((void*)0), 0, ((void*)0), ((void*)0));
   break;

  case 128:
  case 133:
  case 129:
   FUNC_1(VAR_11, "invalid irq flag 0x%02X\n", VAR_13);
   break;
 }


 if (VAR_12->type == VAR_6)
 {
  VAR_12->state &= ~VAR_7;
  FUNC_2(VAR_12->state, VAR_11->base_addr + VAR_5);
  VAR_12->state |= VAR_7;
  FUNC_2(VAR_12->state, VAR_11->base_addr + VAR_5);
 }


 VAR_13 = 0;
 FUNC_6(VAR_11, VAR_12->type == VAR_8 ? VAR_3 : VAR_2, &VAR_13, sizeof(VAR_13));
 return VAR_0;
}
