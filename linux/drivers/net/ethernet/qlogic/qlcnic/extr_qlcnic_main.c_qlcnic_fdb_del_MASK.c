
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qlcnic_adapter {int flags; int fdb_mac_learn; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct ndmsg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,unsigned char const*) ;
 int FUNC_1 (struct net_device*,unsigned char const*) ;
 scalar_t__ FUNC_2 (unsigned char const*) ;
 scalar_t__ FUNC_3 (unsigned char const*) ;
 int FUNC_4 (struct ndmsg*,struct nlattr**,struct net_device*,unsigned char const*,int ) ;
 struct qlcnic_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct qlcnic_adapter*,unsigned char const*) ;
 scalar_t__ FUNC_7 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_8(struct ndmsg *VAR_3, struct nlattr *VAR_4[],
   struct net_device *VAR_5,
   const unsigned char *VAR_6, u16 VAR_7)
{
 struct qlcnic_adapter *VAR_8 = FUNC_5(VAR_5);
 int VAR_9 = -VAR_1;

 if (!VAR_8->fdb_mac_learn)
  return FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

 if ((VAR_8->flags & VAR_2) ||
     FUNC_7(VAR_8)) {
  if (FUNC_3(VAR_6)) {
   VAR_9 = FUNC_1(VAR_5, VAR_6);
   if (!VAR_9)
    VAR_9 = FUNC_6(VAR_8, VAR_6);
  } else if (FUNC_2(VAR_6)) {
   VAR_9 = FUNC_0(VAR_5, VAR_6);
  } else {
   VAR_9 = -VAR_0;
  }
 }
 return VAR_9;
}
