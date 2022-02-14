
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct proc_data {int writelen; scalar_t__ wbuffer; } ;
struct net_device {struct airo_info* ml_priv; } ;
struct inode {int dummy; } ;
struct file {struct proc_data* private_data; } ;
struct TYPE_4__ {int * ap; int len; } ;
struct airo_info {TYPE_1__ APList; } ;
typedef TYPE_1__ APListRid ;


 struct net_device* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct airo_info*,int) ;
 int FUNC_3 (struct airo_info*,int) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (struct airo_info*,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_7( struct inode *VAR_0, struct file *VAR_1 ) {
 struct proc_data *VAR_2 = VAR_1->private_data;
 struct net_device *VAR_3 = FUNC_0(VAR_0);
 struct airo_info *VAR_4 = VAR_3->ml_priv;
 APListRid *VAR_5 = &VAR_4->APList;
 int VAR_6;

 if ( !VAR_2->writelen ) return;

 FUNC_5(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->len = FUNC_1(sizeof(*VAR_5));

 for (VAR_6 = 0; VAR_6 < 4 && VAR_2->writelen >= (VAR_6 + 1) * 6 * 3; VAR_6++)
  FUNC_4(VAR_2->wbuffer + VAR_6 * 6 * 3, VAR_5->ap[VAR_6]);

 FUNC_2(VAR_4, 1);
 FUNC_6(VAR_4, VAR_5, 1);
 FUNC_3(VAR_4, 1);
}
