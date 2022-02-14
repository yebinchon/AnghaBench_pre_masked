
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct velocity_info {int flags; int napi; } ;
struct net_device {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (int *) ;
 struct velocity_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct velocity_info*) ;
 int FUNC_5 (struct velocity_info*) ;
 int FUNC_6 (struct velocity_info*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2)
{
 struct velocity_info *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(&VAR_3->napi);
 FUNC_3(VAR_2);
 FUNC_6(VAR_3);

 if (VAR_3->flags & VAR_1)
  FUNC_5(VAR_3);

 FUNC_0(VAR_2->irq, VAR_2);

 FUNC_4(VAR_3);

 VAR_3->flags &= (~VAR_0);
 return 0;
}
