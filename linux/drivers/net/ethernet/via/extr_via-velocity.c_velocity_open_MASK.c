
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct velocity_info {int flags; int napi; int mac_regs; } ;
struct net_device {int name; int irq; int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct velocity_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_5 (struct velocity_info*) ;
 int FUNC_6 (struct velocity_info*) ;
 int FUNC_7 (struct velocity_info*,int ) ;
 int FUNC_8 (struct velocity_info*,int ) ;
 int VAR_5 ;
 int FUNC_9 (struct velocity_info*,int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_6)
{
 struct velocity_info *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_8(VAR_7, VAR_6->mtu);
 if (VAR_8 < 0)
  goto out;


 FUNC_9(VAR_7, VAR_1);

 FUNC_7(VAR_7, VAR_4);

 VAR_8 = FUNC_4(VAR_6->irq, VAR_5, VAR_0,
     VAR_6->name, VAR_6);
 if (VAR_8 < 0) {

  FUNC_9(VAR_7, VAR_2);
  FUNC_5(VAR_7);
  goto out;
 }

 FUNC_6(VAR_7);

 FUNC_0(VAR_7->mac_regs);
 FUNC_3(VAR_6);
 FUNC_1(&VAR_7->napi);
 VAR_7->flags |= VAR_3;
out:
 return VAR_8;
}
