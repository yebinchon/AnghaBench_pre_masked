
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct niu {size_t port; TYPE_2__* parent; } ;
struct TYPE_3__ {int** phy_id; } ;
struct TYPE_4__ {TYPE_1__ phy_probe_info; int port_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (struct niu*) ;
 int FUNC_6 (struct niu*) ;

__attribute__((used)) static int FUNC_7(struct niu *VAR_6)
{
 int VAR_7, VAR_8;
 u64 VAR_9;

 VAR_9 = FUNC_1(VAR_3);
 VAR_9 &= ~VAR_5;
 VAR_9 |= VAR_4;
 FUNC_3(VAR_3, VAR_9);


 VAR_9 = FUNC_0(VAR_0);
 VAR_9 |= VAR_1;
 FUNC_2(VAR_0, VAR_9);

 VAR_7 = FUNC_4(VAR_6->parent->port_phy, VAR_6->port);
 VAR_7 = VAR_6->parent->phy_probe_info.phy_id[VAR_7][VAR_6->port];


 switch (VAR_7 & VAR_2) {
 case 128:
  VAR_8 = FUNC_6(VAR_6);
  break;

 default:
  VAR_8 = FUNC_5(VAR_6);
  break;
 }

 return VAR_8;
}
