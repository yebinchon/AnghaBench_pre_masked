
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ksz_device {int br_member; int dev_mutex; } ;
struct dsa_switch {struct ksz_device* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct dsa_switch *VAR_0, int VAR_1,
    struct net_device *VAR_2)
{
 struct ksz_device *VAR_3 = VAR_0->priv;

 FUNC_0(&VAR_3->dev_mutex);
 VAR_3->br_member |= (1 << VAR_1);
 FUNC_1(&VAR_3->dev_mutex);





 return 0;
}
