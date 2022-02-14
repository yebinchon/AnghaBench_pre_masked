
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_pf {int app; int ddir; } ;
struct nfp_net {unsigned int id; scalar_t__ port; int debugfs_dir; } ;


 int FUNC_0 (int ,struct nfp_net*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct nfp_net*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nfp_net*,int ) ;
 int FUNC_8 (struct nfp_net*) ;
 int FUNC_9 (struct nfp_net*) ;
 scalar_t__ FUNC_10 (struct nfp_net*) ;

__attribute__((used)) static int
FUNC_11(struct nfp_pf *VAR_0, struct nfp_net *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 VAR_1->id = VAR_2;

 if (VAR_1->port) {
  VAR_3 = FUNC_1(VAR_0->app, VAR_1->port);
  if (VAR_3)
   return VAR_3;
 }

 VAR_3 = FUNC_9(VAR_1);
 if (VAR_3)
  goto err_devlink_port_clean;

 FUNC_7(VAR_1, VAR_0->ddir);

 if (VAR_1->port)
  FUNC_3(VAR_1->port);

 FUNC_8(VAR_1);

 if (FUNC_10(VAR_1)) {
  VAR_3 = FUNC_0(VAR_0->app, VAR_1);
  if (VAR_3)
   goto err_devlink_port_type_clean;
 }

 return 0;

err_devlink_port_type_clean:
 if (VAR_1->port)
  FUNC_2(VAR_1->port);
 FUNC_6(&VAR_1->debugfs_dir);
 FUNC_5(VAR_1);
err_devlink_port_clean:
 if (VAR_1->port)
  FUNC_4(VAR_1->port);
 return VAR_3;
}
