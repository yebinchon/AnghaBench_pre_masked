
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
struct nfsd_net {int svc_export_cache; } ;
struct net {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 struct nfsd_net* FUNC_0 (struct net*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct file*,int *) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_2, struct file *VAR_3)
{
 int VAR_4;
 struct seq_file *VAR_5;
 struct nfsd_net *VAR_6 = FUNC_0(VAR_2, VAR_1);

 VAR_4 = FUNC_1(VAR_3, &VAR_0);
 if (VAR_4)
  return VAR_4;

 VAR_5 = VAR_3->private_data;
 VAR_5->private = VAR_6->svc_export_cache;
 return 0;
}
