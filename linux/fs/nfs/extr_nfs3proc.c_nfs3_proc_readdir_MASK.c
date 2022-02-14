
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rpc_message {int * rpc_proc; struct cred const* rpc_cred; struct nfs3_readdirres* rpc_resp; struct nfs3_readdirargs* rpc_argp; } ;
struct page {int dummy; } ;
struct nfs3_readdirres {int plus; int * dir_attr; int * verf; } ;
struct nfs3_readdirargs {int plus; unsigned int count; struct page** pages; int verf; scalar_t__ cookie; int fh; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;
struct cred {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int * cookieverf; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct dentry*) ;
 int FUNC_4 (char*,char*,int) ;
 int * VAR_3 ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,int *) ;
 int FUNC_9 (int ,struct rpc_message*,int ) ;

__attribute__((used)) static int
FUNC_10(struct dentry *VAR_4, const struct cred *VAR_5,
    u64 VAR_6, struct page **VAR_7, unsigned int VAR_8, bool VAR_9)
{
 struct inode *VAR_10 = FUNC_3(VAR_4);
 __be32 *VAR_11 = FUNC_2(VAR_10)->cookieverf;
 struct nfs3_readdirargs VAR_12 = {
  .fh = FUNC_1(VAR_10),
  .cookie = VAR_6,
  .verf = {VAR_11[0], VAR_11[1]},
  .plus = VAR_9,
  .count = VAR_8,
  .pages = VAR_7
 };
 struct nfs3_readdirres VAR_13 = {
  .verf = VAR_11,
  .plus = VAR_9
 };
 struct rpc_message VAR_14 = {
  .rpc_proc = &VAR_3[VAR_1],
  .rpc_argp = &VAR_12,
  .rpc_resp = &VAR_13,
  .rpc_cred = VAR_5,
 };
 int VAR_15 = -VAR_0;

 if (VAR_9)
  VAR_14.rpc_proc = &VAR_3[VAR_2];

 FUNC_4("NFS call  readdir%s %d\n",
   VAR_9? "plus" : "", (unsigned int) VAR_6);

 VAR_13.dir_attr = FUNC_5();
 if (VAR_13.dir_attr == ((void*)0))
  goto out;

 VAR_15 = FUNC_9(FUNC_0(VAR_10), &VAR_14, 0);

 FUNC_7(VAR_10);
 FUNC_8(VAR_10, VAR_13.dir_attr);

 FUNC_6(VAR_13.dir_attr);
out:
 FUNC_4("NFS reply readdir%s: %d\n",
   VAR_9? "plus" : "", VAR_15);
 return VAR_15;
}
