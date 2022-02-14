
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct proc_data {char* wbuffer; int writelen; } ;
struct net_device {struct airo_info* ml_priv; } ;
struct inode {int dummy; } ;
struct file {struct proc_data* private_data; } ;
struct airo_info {int dummy; } ;
struct TYPE_6__ {void* len; TYPE_1__* ssids; } ;
struct TYPE_5__ {void* len; int * ssid; } ;
typedef TYPE_2__ SsidRid ;
typedef int SSID_rid ;


 struct net_device* FUNC_0 (struct inode*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct airo_info*,int) ;
 int FUNC_3 (struct airo_info*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (struct airo_info*,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_0, struct file *VAR_1)
{
 struct proc_data *VAR_2 = VAR_1->private_data;
 struct net_device *VAR_3 = FUNC_0(VAR_0);
 struct airo_info *VAR_4 = VAR_3->ml_priv;
 SsidRid VAR_5;
 int VAR_6;
 char *VAR_7 = VAR_2->wbuffer;
 char *VAR_8 = VAR_7 + VAR_2->writelen;

 if (!VAR_2->writelen)
  return;

 *VAR_8 = '\n';

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));

 for (VAR_6 = 0; VAR_6 < 3 && VAR_7 < VAR_8; VAR_6++) {
  int VAR_9 = 0;

  while (*VAR_7 != '\n' && VAR_9 < 32)
   VAR_5.ssids[VAR_6].ssid[VAR_9++] = *VAR_7++;
  if (VAR_9 == 0)
   break;
  VAR_5.ssids[VAR_6].len = FUNC_1(VAR_9);

  while (*VAR_7++ != '\n')
   ;
 }
 if (VAR_6)
  VAR_5.len = FUNC_1(sizeof(VAR_5));
 FUNC_2(VAR_4, 1);
 FUNC_5(VAR_4, &VAR_5, 1);
 FUNC_3(VAR_4, 1);
}
