
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int netdev; } ;
struct nfp_net {int link_up; int link_status_lock; TYPE_2__ dp; TYPE_1__* port; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfp_net*,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct nfp_net *VAR_3)
{
 unsigned long VAR_4;
 bool VAR_5;
 u32 VAR_6;

 FUNC_5(&VAR_3->link_status_lock, VAR_4);

 VAR_6 = FUNC_3(VAR_3, VAR_0);
 VAR_5 = !!(VAR_6 & VAR_1);

 if (VAR_3->link_up == VAR_5)
  goto out;

 VAR_3->link_up = VAR_5;
 if (VAR_3->port)
  FUNC_4(VAR_2, &VAR_3->port->flags);

 if (VAR_3->link_up) {
  FUNC_2(VAR_3->dp.netdev);
  FUNC_0(VAR_3->dp.netdev, "NIC Link is Up\n");
 } else {
  FUNC_1(VAR_3->dp.netdev);
  FUNC_0(VAR_3->dp.netdev, "NIC Link is Down\n");
 }
out:
 FUNC_6(&VAR_3->link_status_lock, VAR_4);
}
