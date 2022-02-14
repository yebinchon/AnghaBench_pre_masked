
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct be_adapter {int rx_filter_lock; int vlans_added; int vids; } ;
typedef int __be16 ;


 int FUNC_0 (struct be_adapter*) ;
 scalar_t__ FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct be_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_0, __be16 VAR_1, u16 VAR_2)
{
 struct be_adapter *VAR_3 = FUNC_4(VAR_0);
 int VAR_4 = 0;

 FUNC_2(&VAR_3->rx_filter_lock);


 if (FUNC_1(VAR_3) && VAR_2 == 0)
  goto done;

 if (FUNC_6(VAR_2, VAR_3->vids))
  goto done;

 FUNC_5(VAR_2, VAR_3->vids);
 VAR_3->vlans_added++;

 VAR_4 = FUNC_0(VAR_3);
done:
 FUNC_3(&VAR_3->rx_filter_lock);
 return VAR_4;
}
