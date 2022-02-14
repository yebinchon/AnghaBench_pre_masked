
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct niu_link_config {int active_speed; int active_duplex; } ;
struct niu {int lock; int phy_addr; struct niu_link_config link_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct niu*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct niu *VAR_6, int *VAR_7)
{
 struct niu_link_config *VAR_8 = &VAR_6->link_config;
 u16 VAR_9, VAR_10;
 unsigned long VAR_11;
 u8 VAR_12;
 int VAR_13, VAR_14;

 VAR_14 = 0;
 VAR_9 = VAR_5;
 VAR_12 = VAR_2;

 FUNC_1(&VAR_6->lock, VAR_11);

 VAR_13 = FUNC_0(VAR_6, VAR_6->phy_addr, VAR_3);
 if (VAR_13 < 0)
  goto out;

 VAR_10 = VAR_13;
 if (VAR_10 & VAR_0) {
  VAR_14 = 1;
  VAR_9 = VAR_4;
  VAR_12 = VAR_1;
 }
 VAR_8->active_speed = VAR_9;
 VAR_8->active_duplex = VAR_12;
 VAR_13 = 0;

out:
 FUNC_2(&VAR_6->lock, VAR_11);

 *VAR_7 = VAR_14;
 return VAR_13;
}
