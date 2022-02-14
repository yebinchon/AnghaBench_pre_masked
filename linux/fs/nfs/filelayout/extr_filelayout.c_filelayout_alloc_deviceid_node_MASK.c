
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_device {int dummy; } ;
struct nfs_server {int dummy; } ;
struct nfs4_deviceid_node {int dummy; } ;
struct nfs4_file_layout_dsaddr {struct nfs4_deviceid_node id_node; } ;
typedef int gfp_t ;


 struct nfs4_file_layout_dsaddr* FUNC_0 (struct nfs_server*,struct pnfs_device*,int ) ;

__attribute__((used)) static struct nfs4_deviceid_node *
FUNC_1(struct nfs_server *VAR_0,
  struct pnfs_device *VAR_1, gfp_t VAR_2)
{
 struct nfs4_file_layout_dsaddr *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (!VAR_3)
  return ((void*)0);
 return &VAR_3->id_node;
}
