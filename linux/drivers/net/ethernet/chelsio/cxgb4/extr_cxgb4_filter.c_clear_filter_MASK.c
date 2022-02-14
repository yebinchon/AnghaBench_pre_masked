
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct port_info {int viid; } ;
struct TYPE_5__ {int ovlan; int lip; scalar_t__ ovlan_vld; scalar_t__ encap_vld; } ;
struct TYPE_6__ {TYPE_2__ val; scalar_t__ type; scalar_t__ hash; } ;
struct filter_entry {TYPE_3__ fs; int dev; scalar_t__ smt; scalar_t__ l2t; } ;
struct TYPE_4__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 int FUNC_0 (int ,int const*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct filter_entry*,int ,int) ;
 struct port_info* FUNC_5 (int ) ;
 int FUNC_6 (struct adapter*,int ,int,int ) ;

void FUNC_7(struct adapter *VAR_0, struct filter_entry *VAR_1)
{
 struct port_info *VAR_2 = FUNC_5(VAR_1->dev);





 if (VAR_1->l2t)
  FUNC_1(VAR_1->l2t);

 if (VAR_1->smt)
  FUNC_2(VAR_1->smt);

 if (VAR_1->fs.val.encap_vld && VAR_1->fs.val.ovlan_vld)
  FUNC_6(VAR_0, VAR_2->viid,
           VAR_1->fs.val.ovlan & 0x1ff, 0);

 if ((VAR_1->fs.hash || FUNC_3(VAR_0->params.chip)) && VAR_1->fs.type)
  FUNC_0(VAR_1->dev, (const u32 *)&VAR_1->fs.val.lip, 1);





 FUNC_4(VAR_1, 0, sizeof(*VAR_1));
}
