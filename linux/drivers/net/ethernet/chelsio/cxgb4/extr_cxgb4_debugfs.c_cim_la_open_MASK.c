
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct seq_tab {scalar_t__ data; } ;
struct inode {struct adapter* i_private; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int cim_la_size; int chip; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 struct seq_tab* FUNC_1 (struct file*,int,int,int,int ) ;
 int FUNC_2 (struct inode*,struct file*) ;
 int FUNC_3 (struct adapter*,int ,int,unsigned int*) ;
 int FUNC_4 (struct adapter*,int *,int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_7, struct file *VAR_8)
{
 int VAR_9;
 unsigned int VAR_10;
 struct seq_tab *VAR_11;
 struct adapter *VAR_12 = VAR_7->i_private;

 VAR_9 = FUNC_3(VAR_12, VAR_2, 1, &VAR_10);
 if (VAR_9)
  return VAR_9;

 if (FUNC_0(VAR_12->params.chip)) {

  VAR_11 = FUNC_1(VAR_8, (VAR_12->params.cim_la_size / 10) + 1,
     10 * sizeof(u32), 1,
     VAR_10 & VAR_1 ?
     VAR_5 : VAR_6);
 } else {
  VAR_11 = FUNC_1(VAR_8, VAR_12->params.cim_la_size / 8,
     8 * sizeof(u32), 1,
     VAR_10 & VAR_1 ? VAR_4 :
            VAR_3);
 }
 if (!VAR_11)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_12, (u32 *)VAR_11->data, ((void*)0));
 if (VAR_9)
  FUNC_2(VAR_7, VAR_8);
 return VAR_9;
}
