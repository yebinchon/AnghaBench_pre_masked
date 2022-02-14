
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int dummy; } ;
struct qstr {int dummy; } ;
struct page {int dummy; } ;
struct nfs4_secinfo_flavors {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct rpc_clnt* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct inode*) ;
 struct page* FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,struct qstr const*,struct nfs4_secinfo_flavors*) ;
 struct rpc_clnt* FUNC_4 (struct rpc_clnt*,int ,struct nfs4_secinfo_flavors*) ;
 struct nfs4_secinfo_flavors* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

struct rpc_clnt *
FUNC_7(struct rpc_clnt *VAR_2, struct inode *VAR_3,
     const struct qstr *VAR_4)
{
 struct page *VAR_5;
 struct nfs4_secinfo_flavors *VAR_6;
 struct rpc_clnt *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_2(VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_5(VAR_5);

 VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_6);
 if (VAR_8 < 0) {
  VAR_7 = FUNC_0(VAR_8);
  goto out;
 }

 VAR_7 = FUNC_4(VAR_2, FUNC_1(VAR_3), VAR_6);

out:
 FUNC_6(VAR_5);
 return VAR_7;
}
