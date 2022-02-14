
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;
struct cpsw_priv {struct cpsw_common* cpsw; } ;
struct cpsw_common {TYPE_1__* slaves; } ;
struct TYPE_2__ {int phy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct net_device*,struct ifreq*) ;
 int FUNC_1 (struct net_device*,struct ifreq*) ;
 int FUNC_2 (struct cpsw_common*,struct cpsw_priv*) ;
 struct cpsw_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,struct ifreq*,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct cpsw_priv *VAR_5 = FUNC_3(VAR_2);
 struct cpsw_common *VAR_6 = VAR_5->cpsw;
 int VAR_7 = FUNC_2(VAR_6, VAR_5);

 if (!FUNC_4(VAR_2))
  return -VAR_0;

 switch (VAR_4) {
 case 128:
  return FUNC_1(VAR_2, VAR_3);
 case 129:
  return FUNC_0(VAR_2, VAR_3);
 }

 if (!VAR_6->slaves[VAR_7].phy)
  return -VAR_1;
 return FUNC_5(VAR_6->slaves[VAR_7].phy, VAR_3, VAR_4);
}
