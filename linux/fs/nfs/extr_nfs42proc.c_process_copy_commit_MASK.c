
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfs_writeverf {int dummy; } ;
struct nfs_commitres {TYPE_3__* verf; } ;
struct TYPE_5__ {int verifier; } ;
struct TYPE_6__ {TYPE_1__ verifier; int count; } ;
struct nfs42_copy_res {TYPE_2__ write_res; } ;
struct file {int dummy; } ;
typedef int loff_t ;
struct TYPE_7__ {int verifier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int,int ) ;
 int FUNC_3 (struct file*,int ,int ,struct nfs_commitres*) ;
 scalar_t__ FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, loff_t VAR_4,
          struct nfs42_copy_res *VAR_5)
{
 struct nfs_commitres VAR_6;
 int VAR_7 = -VAR_1;

 VAR_6.verf = FUNC_2(sizeof(struct nfs_writeverf), VAR_2);
 if (!VAR_6.verf)
  goto out;

 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5->write_res.count, &VAR_6);
 if (VAR_7)
  goto out_free;
 if (FUNC_4(&VAR_5->write_res.verifier.verifier,
        &VAR_6.verf->verifier)) {
  FUNC_0("commit verf differs from copy verf\n");
  VAR_7 = -VAR_0;
 }
out_free:
 FUNC_1(VAR_6.verf);
out:
 return VAR_7;
}
