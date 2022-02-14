
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_link_config {scalar_t__ loopback_mode; } ;
struct niu {int phy_addr; struct niu_link_config link_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct niu*,int ,int ,int ) ;
 int FUNC_1 (struct niu*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct niu *VAR_4)
{
 struct niu_link_config *VAR_5 = &VAR_4->link_config;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_4->phy_addr, VAR_0,
   VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 &= ~VAR_1;

 if (VAR_5->loopback_mode == VAR_2)
  VAR_6 |= VAR_1;

 VAR_6 = FUNC_1(VAR_4, VAR_4->phy_addr, VAR_0,
    VAR_3, VAR_6);
 if (VAR_6)
  return VAR_6;

 return 0;
}
