
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct rpc_message {struct cred const* rpc_cred; struct nfs_readdirargs* rpc_argp; int * rpc_proc; } ;
struct page {int dummy; } ;
struct nfs_readdirargs {unsigned int count; struct page** pages; scalar_t__ cookie; int fh; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct cred {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct inode*) ;
 int * VAR_1 ;
 int FUNC_5 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_6(struct dentry *VAR_2, const struct cred *VAR_3,
   u64 VAR_4, struct page **VAR_5, unsigned int VAR_6, bool VAR_7)
{
 struct inode *VAR_8 = FUNC_2(VAR_2);
 struct nfs_readdirargs VAR_9 = {
  .fh = FUNC_1(VAR_8),
  .cookie = VAR_4,
  .count = VAR_6,
  .pages = VAR_5,
 };
 struct rpc_message VAR_10 = {
  .rpc_proc = &VAR_1[VAR_0],
  .rpc_argp = &VAR_9,
  .rpc_cred = VAR_3,
 };
 int VAR_11;

 FUNC_3("NFS call  readdir %d\n", (unsigned int)VAR_4);
 VAR_11 = FUNC_5(FUNC_0(VAR_8), &VAR_10, 0);

 FUNC_4(VAR_8);

 FUNC_3("NFS reply readdir: %d\n", VAR_11);
 return VAR_11;
}
