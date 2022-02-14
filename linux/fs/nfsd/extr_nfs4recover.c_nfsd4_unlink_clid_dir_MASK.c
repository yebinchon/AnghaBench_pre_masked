
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfsd_net {TYPE_2__* rec_file; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {struct dentry* dentry; } ;
struct TYPE_4__ {TYPE_1__ f_path; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_1 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (struct dentry*) ;
 int FUNC_4 (char*,int,char*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 struct dentry* FUNC_8 (char*,struct dentry*,int) ;
 int FUNC_9 (int ,struct dentry*) ;

__attribute__((used)) static int
FUNC_10(char *VAR_2, int VAR_3, struct nfsd_net *VAR_4)
{
 struct dentry *VAR_5, *VAR_6;
 int VAR_7;

 FUNC_4("NFSD: nfsd4_unlink_clid_dir. name %.*s\n", VAR_3, VAR_2);

 VAR_5 = VAR_4->rec_file->f_path.dentry;
 FUNC_6(FUNC_2(VAR_5), VAR_1);
 VAR_6 = FUNC_8(VAR_2, VAR_5, VAR_3);
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  goto out_unlock;
 }
 VAR_7 = -VAR_0;
 if (FUNC_3(VAR_6))
  goto out;
 VAR_7 = FUNC_9(FUNC_2(VAR_5), VAR_6);
out:
 FUNC_5(VAR_6);
out_unlock:
 FUNC_7(FUNC_2(VAR_5));
 return VAR_7;
}
