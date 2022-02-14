
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int ifindex; } ;
struct TYPE_2__ {int fw_fid; } ;
struct bnxt {TYPE_1__ pf; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,struct net_device*) ;
 struct bnxt* FUNC_4 (struct net_device*) ;

__attribute__((used)) static u16 FUNC_5(struct bnxt *VAR_1, struct net_device *VAR_2)
{
 struct bnxt *VAR_3;


 if (!FUNC_3(VAR_1->dev, VAR_2)) {
  FUNC_2(VAR_1->dev, "dev(ifindex=%d) not on same switch",
       VAR_2->ifindex);
  return VAR_0;
 }


 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_4(VAR_2);
 return VAR_3->pf.fw_fid;
}
