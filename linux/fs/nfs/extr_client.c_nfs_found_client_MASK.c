
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client_initdata {int dummy; } ;
struct nfs_client {scalar_t__ cl_cons_state; } ;


 int VAR_0 ;
 struct nfs_client* FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct nfs_client*) ;
 int FUNC_2 (struct nfs_client*) ;
 int FUNC_3 () ;

__attribute__((used)) static struct nfs_client *
FUNC_4(const struct nfs_client_initdata *VAR_2,
   struct nfs_client *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 < 0) {
  FUNC_1(VAR_3);
  return FUNC_0(-VAR_0);
 }

 if (VAR_3->cl_cons_state < VAR_1) {
  VAR_4 = VAR_3->cl_cons_state;
  FUNC_1(VAR_3);
  return FUNC_0(VAR_4);
 }

 FUNC_3();
 return VAR_3;
}
