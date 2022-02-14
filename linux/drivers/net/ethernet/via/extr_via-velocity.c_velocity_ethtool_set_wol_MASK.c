
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct velocity_info {int wol_passwd; int flags; int wol_opts; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; int sopass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int) ;
 struct velocity_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_9, struct ethtool_wolinfo *VAR_10)
{
 struct velocity_info *VAR_11 = FUNC_1(VAR_9);

 if (!(VAR_10->wolopts & (VAR_7 | VAR_6 | VAR_8 | VAR_5)))
  return -VAR_0;
 VAR_11->wol_opts = VAR_3;
 if (VAR_10->wolopts & VAR_6) {
  VAR_11->wol_opts |= VAR_3;
  VAR_11->flags |= VAR_1;
 }
 if (VAR_10->wolopts & VAR_8) {
  VAR_11->wol_opts |= VAR_4;
  VAR_11->flags |= VAR_1;
 }
 if (VAR_10->wolopts & VAR_5) {
  VAR_11->wol_opts |= VAR_2;
  VAR_11->flags |= VAR_1;
 }
 FUNC_0(VAR_11->wol_passwd, VAR_10->sopass, 6);
 return 0;
}
