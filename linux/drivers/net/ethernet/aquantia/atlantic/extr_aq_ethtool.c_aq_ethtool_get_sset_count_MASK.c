
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct aq_nic_s {int dummy; } ;
struct aq_nic_cfg_s {int vecs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 struct aq_nic_cfg_s* FUNC_1 (struct aq_nic_s*) ;
 struct aq_nic_s* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 struct aq_nic_s *VAR_6 = FUNC_2(VAR_3);
 struct aq_nic_cfg_s *VAR_7 = FUNC_1(VAR_6);

 switch (VAR_4) {
 case 128:
  VAR_5 = FUNC_0(VAR_2) +
   VAR_7->vecs * FUNC_0(VAR_1);
  break;
 default:
  VAR_5 = -VAR_0;
 }
 return VAR_5;
}
