
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int flags; int portnum; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_1 (struct qlcnic_adapter*,int) ;
 int FUNC_2 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (struct net_device*,char*,int ) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct qlcnic_adapter *VAR_2, int VAR_3)
{
 struct net_device *VAR_4 = VAR_2->netdev;
 int VAR_5;

 if (!(VAR_2->flags & VAR_1)) {
  FUNC_3(VAR_4,
      "SR-IOV cannot be enabled, when legacy interrupts are enabled\n");
  return -VAR_0;
 }

 FUNC_8();
 if (FUNC_5(VAR_4))
  FUNC_0(VAR_2, VAR_4);

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5)
  goto error;

 if (FUNC_5(VAR_4))
  FUNC_2(VAR_2, VAR_4);

 FUNC_9();
 VAR_5 = FUNC_7(VAR_2, VAR_3);
 if (!VAR_5) {
  FUNC_4(VAR_4,
       "SR-IOV is enabled successfully on port %d\n",
       VAR_2->portnum);

  return VAR_3;
 }

 FUNC_8();
 if (FUNC_5(VAR_4))
  FUNC_0(VAR_2, VAR_4);

error:
 if (!FUNC_6(VAR_2)) {
  if (FUNC_5(VAR_4))
   FUNC_2(VAR_2, VAR_4);
 }

 FUNC_9();
 FUNC_4(VAR_4, "Failed to enable SR-IOV on port %d\n",
      VAR_2->portnum);

 return VAR_5;
}
