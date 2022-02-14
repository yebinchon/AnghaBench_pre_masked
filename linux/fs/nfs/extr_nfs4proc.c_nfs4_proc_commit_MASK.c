
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int dummy; } ;
struct nfs_commitres {int dummy; } ;
struct nfs_commitargs {int count; int offset; } ;
struct nfs4_exception {scalar_t__ retry; } ;
struct file {int dummy; } ;
typedef int __u64 ;
typedef int __u32 ;


 struct nfs_server* FUNC_0 (int ) ;
 int FUNC_1 (struct file*,struct nfs_commitargs*,struct nfs_commitres*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct nfs_server*,int,struct nfs4_exception*) ;

int FUNC_4(struct file *VAR_0, __u64 VAR_1, __u32 VAR_2, struct nfs_commitres *VAR_3)
{
 struct nfs_commitargs VAR_4 = {
  .offset = VAR_1,
  .count = VAR_2,
 };
 struct nfs_server *VAR_5 = FUNC_0(FUNC_2(VAR_0));
 struct nfs4_exception VAR_6 = { };
 int VAR_7;

 do {
  VAR_7 = FUNC_1(VAR_0, &VAR_4, VAR_3);
  VAR_7 = FUNC_3(VAR_5, VAR_7, &VAR_6);
 } while (VAR_6.retry);

 return VAR_7;
}
