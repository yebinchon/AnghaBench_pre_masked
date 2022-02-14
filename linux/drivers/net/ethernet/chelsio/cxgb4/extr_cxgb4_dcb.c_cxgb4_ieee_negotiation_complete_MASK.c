
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_dcb_info {scalar_t__ state; int msgs; int supported; } ;
struct port_info {struct port_dcb_info dcb; } ;
struct net_device {int dummy; } ;
typedef enum cxgb4_dcb_fw_msgs { ____Placeholder_cxgb4_dcb_fw_msgs } cxgb4_dcb_fw_msgs ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 struct port_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static inline int
FUNC_2(struct net_device *VAR_2,
    enum cxgb4_dcb_fw_msgs VAR_3)
{
 struct port_info *VAR_4 = FUNC_1(VAR_2);
 struct port_dcb_info *VAR_5 = &VAR_4->dcb;

 if (VAR_5->state == VAR_0)
  if (VAR_3 && !(VAR_5->msgs & VAR_3))
   return 0;

 return (FUNC_0(VAR_5->state) &&
  (VAR_5->supported & VAR_1));
}
