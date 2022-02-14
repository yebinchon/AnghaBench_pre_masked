
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_tab {scalar_t__ data; } ;
struct rss_vf_conf {int rss_vf_vfh; int rss_vf_vfl; } ;
struct inode {struct adapter* i_private; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int vfcount; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;
struct adapter {TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct seq_tab* FUNC_0 (struct file*,int,int,int,int ) ;
 int FUNC_1 (struct adapter*,int,int *,int *,int) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, struct file *VAR_3)
{
 struct adapter *VAR_4 = VAR_2->i_private;
 struct seq_tab *VAR_5;
 struct rss_vf_conf *VAR_6;
 int VAR_7, VAR_8 = VAR_4->params.arch.vfcount;

 VAR_5 = FUNC_0(VAR_3, VAR_8, sizeof(*VAR_6), 1, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = (struct rss_vf_conf *)VAR_5->data;
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  FUNC_1(VAR_4, VAR_7, &VAR_6[VAR_7].rss_vf_vfl,
          &VAR_6[VAR_7].rss_vf_vfh, 1);
 }
 return 0;
}
