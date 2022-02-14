
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct seq_tab {scalar_t__ data; } ;
struct rss_pf_conf {int rss_pf_config; void* rss_pf_mask; void* rss_pf_map; } ;
struct inode {struct adapter* i_private; } ;
struct file {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct seq_tab* FUNC_0 (struct file*,int,int,int,int ) ;
 int FUNC_1 (struct adapter*,int,int *,int) ;
 void* FUNC_2 (struct adapter*,int) ;
 void* FUNC_3 (struct adapter*,int) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 struct adapter *VAR_4 = VAR_2->i_private;
 struct seq_tab *VAR_5;
 u32 VAR_6, VAR_7;
 struct rss_pf_conf *VAR_8;
 int VAR_9;

 VAR_5 = FUNC_0(VAR_3, 8, sizeof(*VAR_8), 1, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_8 = (struct rss_pf_conf *)VAR_5->data;
 VAR_6 = FUNC_2(VAR_4, 1);
 VAR_7 = FUNC_3(VAR_4, 1);
 for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
  VAR_8[VAR_9].rss_pf_map = VAR_6;
  VAR_8[VAR_9].rss_pf_mask = VAR_7;
  FUNC_1(VAR_4, VAR_9, &VAR_8[VAR_9].rss_pf_config,
          1);
 }
 return 0;
}
