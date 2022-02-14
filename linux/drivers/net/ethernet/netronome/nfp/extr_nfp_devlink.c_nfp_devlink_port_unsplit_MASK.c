
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_pf {int lock; } ;
struct nfp_eth_table_port {unsigned int port_lanes; int index; int is_split; } ;
struct netlink_ext_ack {int dummy; } ;
struct devlink {int dummy; } ;


 int VAR_0 ;
 struct nfp_pf* FUNC_0 (struct devlink*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfp_pf*,unsigned int,struct nfp_eth_table_port*) ;
 int FUNC_4 (struct nfp_pf*,int ,unsigned int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(struct devlink *VAR_1, unsigned int VAR_2,
    struct netlink_ext_ack *VAR_3)
{
 struct nfp_pf *VAR_4 = FUNC_0(VAR_1);
 struct nfp_eth_table_port VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 FUNC_1(&VAR_4->lock);

 FUNC_5();
 VAR_7 = FUNC_3(VAR_4, VAR_2, &VAR_5);
 FUNC_6();
 if (VAR_7)
  goto out;

 if (!VAR_5.is_split) {
  VAR_7 = -VAR_0;
  goto out;
 }


 VAR_6 = VAR_5.port_lanes;
 if (VAR_5.port_lanes == 8)
  VAR_6 = 10;

 VAR_7 = FUNC_4(VAR_4, VAR_5.index, VAR_6);
out:
 FUNC_2(&VAR_4->lock);

 return VAR_7;
}
