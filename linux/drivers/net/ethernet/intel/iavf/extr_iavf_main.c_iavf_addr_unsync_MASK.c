
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dev_addr; } ;
struct iavf_mac_filter {int remove; } ;
struct iavf_adapter {int aq_required; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int ) ;
 struct iavf_mac_filter* FUNC_1 (struct iavf_adapter*,int const*) ;
 struct iavf_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, const u8 *VAR_2)
{
 struct iavf_adapter *VAR_3 = FUNC_2(VAR_1);
 struct iavf_mac_filter *VAR_4;






 if (FUNC_0(VAR_2, VAR_1->dev_addr))
  return 0;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (VAR_4) {
  VAR_4->remove = 1;
  VAR_3->aq_required |= VAR_0;
 }
 return 0;
}
