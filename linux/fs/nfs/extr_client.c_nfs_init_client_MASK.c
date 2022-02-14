
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client_initdata {int dummy; } ;
struct nfs_client {scalar_t__ cl_cons_state; } ;


 struct nfs_client* FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nfs_client*,struct nfs_client_initdata const*,int ) ;
 int FUNC_2 (struct nfs_client*,scalar_t__) ;
 int FUNC_3 (struct nfs_client*) ;

struct nfs_client *FUNC_4(struct nfs_client *VAR_2,
       const struct nfs_client_initdata *VAR_3)
{
 int VAR_4;


 if (VAR_2->cl_cons_state == VAR_0)
  return VAR_2;





 VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_1);
 FUNC_2(VAR_2, VAR_4 == 0 ? VAR_0 : VAR_4);
 if (VAR_4 < 0) {
  FUNC_3(VAR_2);
  VAR_2 = FUNC_0(VAR_4);
 }
 return VAR_2;
}
