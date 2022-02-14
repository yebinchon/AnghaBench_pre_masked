
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct iavf_adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iavf_adapter*,int const*) ;
 struct iavf_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, const u8 *VAR_2)
{
 struct iavf_adapter *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_3, VAR_2))
  return 0;
 else
  return -VAR_0;
}
