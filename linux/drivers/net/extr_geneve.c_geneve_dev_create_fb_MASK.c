
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int tb ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ip_tunnel_info {int dummy; } ;


 struct net_device* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net*,struct net_device*,int *,struct ip_tunnel_info*,int,int,int,int ) ;
 int FUNC_6 (struct net_device*,int *) ;
 int VAR_3 ;
 int FUNC_7 (struct ip_tunnel_info*,int ) ;
 int VAR_4 ;
 int FUNC_8 (struct nlattr**,int ,int) ;
 int FUNC_9 (struct net_device*,int *) ;
 struct net_device* FUNC_10 (struct net*,char const*,int ,int *,struct nlattr**,int *) ;
 int FUNC_11 (int *) ;

struct net_device *FUNC_12(struct net *VAR_5, const char *VAR_6,
     u8 VAR_7, u16 VAR_8)
{
 struct nlattr *VAR_9[VAR_1 + 1];
 struct ip_tunnel_info VAR_10;
 struct net_device *VAR_11;
 FUNC_2(VAR_4);
 int VAR_12;

 FUNC_8(VAR_9, 0, sizeof(VAR_9));
 VAR_11 = FUNC_10(VAR_5, VAR_6, VAR_7,
          &VAR_3, VAR_9, ((void*)0));
 if (FUNC_1(VAR_11))
  return VAR_11;

 FUNC_7(&VAR_10, VAR_8);
 VAR_12 = FUNC_5(VAR_5, VAR_11, ((void*)0), &VAR_10,
          1, 1, 0, VAR_0);
 if (VAR_12) {
  FUNC_3(VAR_11);
  return FUNC_0(VAR_12);
 }




 VAR_12 = FUNC_4(VAR_11, VAR_2);
 if (VAR_12)
  goto err;

 VAR_12 = FUNC_9(VAR_11, ((void*)0));
 if (VAR_12 < 0)
  goto err;

 return VAR_11;
err:
 FUNC_6(VAR_11, &VAR_4);
 FUNC_11(&VAR_4);
 return FUNC_0(VAR_12);
}
