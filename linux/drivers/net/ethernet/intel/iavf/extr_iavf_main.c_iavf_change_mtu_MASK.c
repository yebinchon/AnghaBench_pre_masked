
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct iavf_adapter {int reset_task; int flags; int vsi; } ;


 scalar_t__ FUNC_0 (struct iavf_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 struct iavf_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, int VAR_4)
{
 struct iavf_adapter *VAR_5 = FUNC_2(VAR_3);

 VAR_3->mtu = VAR_4;
 if (FUNC_0(VAR_5)) {
  FUNC_1(&VAR_5->vsi);
  VAR_5->flags |= VAR_1;
 }
 VAR_5->flags |= VAR_0;
 FUNC_3(VAR_2, &VAR_5->reset_task);

 return 0;
}
