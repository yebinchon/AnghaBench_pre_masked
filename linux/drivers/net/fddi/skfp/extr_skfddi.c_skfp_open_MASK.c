
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int a; } ;
struct TYPE_4__ {TYPE_1__ fddi_canon_addr; } ;
struct s_smc {TYPE_2__ hw; } ;
struct net_device {int dev_addr; int name; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct s_smc*,int *) ;
 int FUNC_2 (struct s_smc*) ;
 int FUNC_3 (struct s_smc*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 struct s_smc* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct s_smc*,int *) ;
 int FUNC_9 (int ,int ,int ,int ,struct net_device*) ;
 int VAR_3 ;
 int FUNC_10 (struct s_smc*,int) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_4)
{
 struct s_smc *VAR_5 = FUNC_5(VAR_4);
 int VAR_6;

 FUNC_7("entering skfp_open\n");

 VAR_6 = FUNC_9(VAR_4->irq, VAR_3, VAR_1,
     VAR_4->name, VAR_4);
 if (VAR_6)
  return VAR_6;
 FUNC_8(VAR_5, ((void*)0));
 FUNC_4(VAR_4->dev_addr, VAR_5->hw.fddi_canon_addr.a, VAR_0);

 FUNC_1(VAR_5, ((void*)0));
 FUNC_10(VAR_5, 1);
 FUNC_0();


 FUNC_2(VAR_5);


 FUNC_3(VAR_5, VAR_2);

 FUNC_6(VAR_4);
 return 0;
}
