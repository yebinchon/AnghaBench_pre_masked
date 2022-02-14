
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u16 ;
struct proc_data {char* wbuffer; int writelen; } ;
struct net_device {struct airo_info* ml_priv; } ;
struct inode {int dummy; } ;
struct file {struct proc_data* private_data; } ;
struct airo_info {TYPE_1__* dev; } ;
typedef int key ;
struct TYPE_2__ {int name; } ;


 struct net_device* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,char*,...) ;
 char FUNC_2 (char) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct airo_info*,char,char*,int,int,int) ;
 int FUNC_5 (struct airo_info*,char,int,int) ;

__attribute__((used)) static void FUNC_6( struct inode *VAR_0, struct file *VAR_1 ) {
 struct proc_data *VAR_2;
 struct net_device *VAR_3 = FUNC_0(VAR_0);
 struct airo_info *VAR_4 = VAR_3->ml_priv;
 int VAR_5, VAR_6;
 char VAR_7[16];
 u16 VAR_8 = 0;
 int VAR_9 = 0;

 FUNC_3(VAR_7, 0, sizeof(VAR_7));

 VAR_2 = VAR_1->private_data;
 if ( !VAR_2->writelen ) return;

 if (VAR_2->wbuffer[0] >= '0' && VAR_2->wbuffer[0] <= '3' &&
     (VAR_2->wbuffer[1] == ' ' || VAR_2->wbuffer[1] == '\n')) {
  VAR_8 = VAR_2->wbuffer[0] - '0';
  if (VAR_2->wbuffer[1] == '\n') {
   VAR_6 = FUNC_5(VAR_4, VAR_8, 1, 1);
   if (VAR_6 < 0) {
    FUNC_1(VAR_4->dev->name, "failed to set "
                   "WEP transmit index to %d: %d.",
                   VAR_8, VAR_6);
   }
   return;
  }
  VAR_9 = 2;
 } else {
  FUNC_1(VAR_4->dev->name, "WepKey passed invalid key index");
  return;
 }

 for( VAR_5 = 0; VAR_5 < 16*3 && VAR_2->wbuffer[VAR_5+VAR_9]; VAR_5++ ) {
  switch(VAR_5%3) {
  case 0:
   VAR_7[VAR_5/3] = FUNC_2(VAR_2->wbuffer[VAR_5+VAR_9])<<4;
   break;
  case 1:
   VAR_7[VAR_5/3] |= FUNC_2(VAR_2->wbuffer[VAR_5+VAR_9]);
   break;
  }
 }

 VAR_6 = FUNC_4(VAR_4, VAR_8, VAR_7, VAR_5/3, 1, 1);
 if (VAR_6 < 0) {
  FUNC_1(VAR_4->dev->name, "failed to set WEP key at index "
                 "%d: %d.", VAR_8, VAR_6);
 }
}
