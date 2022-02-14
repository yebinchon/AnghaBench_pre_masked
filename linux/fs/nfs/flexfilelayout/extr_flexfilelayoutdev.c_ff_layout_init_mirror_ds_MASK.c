
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_hdr {int plh_lc_cred; int plh_inode; } ;
struct nfs4_ff_layout_mirror {int * mirror_ds; int devid; } ;
struct nfs4_ff_layout_ds {int dummy; } ;
struct nfs4_deviceid_node {int dummy; } ;


 int VAR_0 ;
 struct nfs4_ff_layout_ds* FUNC_0 (int ) ;
 struct nfs4_ff_layout_ds* FUNC_1 (struct nfs4_deviceid_node*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int **,int *,struct nfs4_ff_layout_ds*) ;
 struct nfs4_deviceid_node* FUNC_5 (int ,int *,int ,int ) ;
 int FUNC_6 (struct nfs4_deviceid_node*) ;

__attribute__((used)) static bool
FUNC_7(struct pnfs_layout_hdr *VAR_2,
    struct nfs4_ff_layout_mirror *VAR_3)
{
 if (VAR_3 == ((void*)0))
  goto outerr;
 if (VAR_3->mirror_ds == ((void*)0)) {
  struct nfs4_deviceid_node *VAR_4;
  struct nfs4_ff_layout_ds *VAR_5 = FUNC_0(-VAR_0);

  VAR_4 = FUNC_5(FUNC_3(VAR_2->plh_inode),
    &VAR_3->devid, VAR_2->plh_lc_cred,
    VAR_1);
  if (VAR_4)
   VAR_5 = FUNC_1(VAR_4);


  if (FUNC_4(&VAR_3->mirror_ds, ((void*)0), VAR_5) &&
      VAR_5 != FUNC_0(-VAR_0))
   FUNC_6(VAR_4);
 }

 if (FUNC_2(VAR_3->mirror_ds))
  goto outerr;

 return 1;
outerr:
 return 0;
}
