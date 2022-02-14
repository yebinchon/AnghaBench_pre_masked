
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct proc_data {int readlen; int * rbuffer; } ;
struct net_device {struct airo_info* ml_priv; } ;
struct inode {int dummy; } ;
struct file {struct proc_data* private_data; } ;
struct airo_info {TYPE_1__* dev; } ;
typedef int __le32 ;
struct TYPE_5__ {int len; int * vals; } ;
struct TYPE_4__ {int name; } ;
typedef TYPE_2__ StatsRid ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct proc_data*) ;
 int * FUNC_3 (int,int ) ;
 struct proc_data* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct airo_info*,TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_8 (int *,char*,char*,int) ;
 char** VAR_2 ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10( struct inode *VAR_3,
    struct file *VAR_4,
    u16 VAR_5 )
{
 struct proc_data *VAR_6;
 struct net_device *VAR_7 = FUNC_0(VAR_3);
 struct airo_info *VAR_8 = VAR_7->ml_priv;
 StatsRid VAR_9;
 int VAR_10, VAR_11;
 __le32 *VAR_12 = VAR_9.vals;
 int VAR_13;

 if ((VAR_4->private_data = FUNC_4(sizeof(struct proc_data ), VAR_1)) == ((void*)0))
  return -VAR_0;
 VAR_6 = VAR_4->private_data;
 if ((VAR_6->rbuffer = FUNC_3( 4096, VAR_1 )) == ((void*)0)) {
  FUNC_2 (VAR_4->private_data);
  return -VAR_0;
 }

 FUNC_7(VAR_8, &VAR_9, VAR_5, 1);
 VAR_13 = FUNC_5(VAR_9.len);

        VAR_11 = 0;
 for(VAR_10=0; VAR_2[VAR_10]!=(char *)-1 && VAR_10*4<VAR_13; VAR_10++) {
  if (!VAR_2[VAR_10]) continue;
  if (VAR_11+FUNC_9(VAR_2[VAR_10])+16>4096) {
   FUNC_1(VAR_8->dev->name,
          "Potentially disastrous buffer overflow averted!");
   break;
  }
  VAR_11+=FUNC_8(VAR_6->rbuffer+VAR_11, "%s: %u\n", VAR_2[VAR_10],
    FUNC_6(VAR_12[VAR_10]));
 }
 if (VAR_10*4 >= VAR_13) {
  FUNC_1(VAR_8->dev->name, "Got a short rid");
 }
 VAR_6->readlen = VAR_11;
 return 0;
}
