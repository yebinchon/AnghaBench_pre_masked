
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {struct nfs_linkargs* rpc_argp; int * rpc_proc; } ;
struct qstr {int name; int len; } ;
struct nfs_linkargs {int toname; int tolen; int tofh; int fromfh; } ;
struct inode {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct inode*) ;
 int * VAR_1 ;
 int FUNC_4 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_2, struct inode *VAR_3, const struct qstr *VAR_4)
{
 struct nfs_linkargs VAR_5 = {
  .fromfh = FUNC_1(VAR_2),
  .tofh = FUNC_1(VAR_3),
  .toname = VAR_4->name,
  .tolen = VAR_4->len
 };
 struct rpc_message VAR_6 = {
  .rpc_proc = &VAR_1[VAR_0],
  .rpc_argp = &VAR_5,
 };
 int VAR_7;

 FUNC_2("NFS call  link %s\n", VAR_4->name);
 VAR_7 = FUNC_4(FUNC_0(VAR_2), &VAR_6, 0);
 FUNC_3(VAR_2);
 FUNC_3(VAR_3);
 FUNC_2("NFS reply link: %d\n", VAR_7);
 return VAR_7;
}
