
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int dummy; } ;
struct nfs4_deviceid_node {int nfs_client; int ld; int timestamp_unavailable; int flags; } ;
struct nfs4_deviceid {int dummy; } ;
struct cred {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct nfs4_deviceid_node* FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (int ,int ,struct nfs4_deviceid const*) ;
 struct nfs4_deviceid_node* FUNC_2 (struct nfs_server*,struct nfs4_deviceid const*,struct cred const*,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,unsigned long,unsigned long) ;

__attribute__((used)) static struct nfs4_deviceid_node *
FUNC_5(struct nfs_server *VAR_4,
  const struct nfs4_deviceid *VAR_5, const struct cred *VAR_6,
  gfp_t VAR_7)
{
 struct nfs4_deviceid_node *VAR_8;
 unsigned long VAR_9, VAR_10;

retry:
 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 if (FUNC_3(VAR_1, &VAR_8->flags) == 0)
  return VAR_8;

 VAR_10 = VAR_3;
 VAR_9 = VAR_10 - VAR_2;
 if (!FUNC_4(VAR_8->timestamp_unavailable, VAR_9, VAR_10)) {
  FUNC_1(VAR_8->ld, VAR_8->nfs_client, VAR_5);
  goto retry;
 }
 return FUNC_0(-VAR_0);
}
