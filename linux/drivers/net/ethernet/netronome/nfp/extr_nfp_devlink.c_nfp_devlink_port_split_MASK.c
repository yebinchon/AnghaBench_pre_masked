
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_pf {int lock; } ;
struct nfp_eth_table_port {unsigned int port_lanes; int lanes; int index; scalar_t__ is_split; } ;
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
         unsigned int VAR_3, struct netlink_ext_ack *VAR_4)
{
 struct nfp_pf *VAR_5 = FUNC_0(VAR_1);
 struct nfp_eth_table_port VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 if (VAR_3 < 2)
  return -VAR_0;

 FUNC_1(&VAR_5->lock);

 FUNC_5();
 VAR_8 = FUNC_3(VAR_5, VAR_2, &VAR_6);
 FUNC_6();
 if (VAR_8)
  goto out;

 if (VAR_6.is_split || VAR_6.port_lanes % VAR_3) {
  VAR_8 = -VAR_0;
  goto out;
 }


 VAR_7 = VAR_6.port_lanes / VAR_3;
 if (VAR_6.lanes == 10 && VAR_3 == 2)
  VAR_7 = 8 / VAR_3;

 VAR_8 = FUNC_4(VAR_5, VAR_6.index, VAR_7);
out:
 FUNC_2(&VAR_5->lock);

 return VAR_8;
}
