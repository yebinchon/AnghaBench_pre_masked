
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nfp_pf {int lock; int app; } ;
struct netlink_ext_ack {int dummy; } ;
struct devlink {int dummy; } ;


 struct nfp_pf* FUNC_0 (struct devlink*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct devlink *VAR_0, u16 VAR_1,
     struct netlink_ext_ack *VAR_2)
{
 struct nfp_pf *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 FUNC_1(&VAR_3->lock);
 VAR_4 = FUNC_3(VAR_3->app, VAR_1);
 FUNC_2(&VAR_3->lock);

 return VAR_4;
}
