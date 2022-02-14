
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct port_info {TYPE_1__* adapter; int link_cfg; int tx_chan; int smt_idx; int xact_addr_filt; int viid; } ;
struct net_device {int features; int dev_addr; int mtu; } ;
struct TYPE_4__ {unsigned int pf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct port_info*,int ,int *,int ,int,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct port_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_1__*,unsigned int,struct port_info*,int,int,int ) ;
 int FUNC_5 (TYPE_1__*,unsigned int,int ,int *) ;
 int FUNC_6 (TYPE_1__*,unsigned int,int ,int ,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2)
{
 int VAR_3;
 struct port_info *VAR_4 = FUNC_3(VAR_2);
 unsigned int VAR_5 = VAR_4->adapter->pf;





 VAR_3 = FUNC_6(VAR_4->adapter, VAR_5, VAR_4->viid, VAR_2->mtu, -1, -1, -1,
       !!(VAR_2->features & VAR_1), 1);
 if (VAR_3 == 0)
  VAR_3 = FUNC_0(VAR_4, VAR_4->viid, &VAR_4->xact_addr_filt,
         VAR_2->dev_addr, 1, &VAR_4->smt_idx);
 if (VAR_3 == 0)
  VAR_3 = FUNC_5(VAR_4->adapter, VAR_5, VAR_4->tx_chan,
        &VAR_4->link_cfg);
 if (VAR_3 == 0) {
  FUNC_1();
  VAR_3 = FUNC_4(VAR_4->adapter, VAR_5, VAR_4, 1,
       1, VAR_0);
  FUNC_2();
 }

 return VAR_3;
}
