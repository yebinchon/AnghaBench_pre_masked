
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tb ;
struct vxlan_config {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 struct net_device* FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net*,struct net_device*,struct vxlan_config*,int *) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_5 (struct nlattr***,int ,int) ;
 int FUNC_6 (struct net_device*,int *) ;
 struct net_device* FUNC_7 (struct net*,char const*,int ,int *,struct nlattr**,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct net_device*,int *) ;
 int VAR_2 ;

struct net_device *FUNC_10(struct net *VAR_3, const char *VAR_4,
        u8 VAR_5,
        struct vxlan_config *VAR_6)
{
 struct nlattr *VAR_7[VAR_0 + 1];
 struct net_device *VAR_8;
 int VAR_9;

 FUNC_5(&VAR_7, 0, sizeof(VAR_7));

 VAR_8 = FUNC_7(VAR_3, VAR_4, VAR_5,
          &VAR_2, VAR_7, ((void*)0));
 if (FUNC_1(VAR_8))
  return VAR_8;

 VAR_9 = FUNC_3(VAR_3, VAR_8, VAR_6, ((void*)0));
 if (VAR_9 < 0) {
  FUNC_4(VAR_8);
  return FUNC_0(VAR_9);
 }

 VAR_9 = FUNC_6(VAR_8, ((void*)0));
 if (VAR_9 < 0) {
  FUNC_2(VAR_1);

  FUNC_9(VAR_8, &VAR_1);
  FUNC_8(&VAR_1);
  return FUNC_0(VAR_9);
 }

 return VAR_8;
}
