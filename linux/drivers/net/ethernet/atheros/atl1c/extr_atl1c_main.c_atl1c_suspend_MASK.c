
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
struct atl1c_hw {int dummy; } ;
struct atl1c_adapter {int flags; scalar_t__ wol; struct atl1c_hw hw; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct atl1c_hw*) ;
 int FUNC_2 (struct atl1c_adapter*) ;
 scalar_t__ FUNC_3 (struct atl1c_hw*) ;
 int FUNC_4 (struct atl1c_hw*,scalar_t__) ;
 int FUNC_5 (struct device*,char*) ;
 struct net_device* FUNC_6 (struct device*) ;
 struct atl1c_adapter* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_1)
{
 struct net_device *VAR_2 = FUNC_6(VAR_1);
 struct atl1c_adapter *VAR_3 = FUNC_7(VAR_2);
 struct atl1c_hw *VAR_4 = &VAR_3->hw;
 u32 VAR_5 = VAR_3->wol;

 FUNC_1(VAR_4);
 if (FUNC_9(VAR_2)) {
  FUNC_0(FUNC_10(VAR_0, &VAR_3->flags));
  FUNC_2(VAR_3);
 }
 FUNC_8(VAR_2);

 if (VAR_5)
  if (FUNC_3(VAR_4) != 0)
   FUNC_5(VAR_1, "phy power saving failed");

 FUNC_4(VAR_4, VAR_5);

 return 0;
}
