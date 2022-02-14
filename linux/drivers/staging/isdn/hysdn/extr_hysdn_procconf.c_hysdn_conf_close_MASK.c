
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_mode; struct conf_writedata* private_data; TYPE_1__* f_cred; } ;
struct conf_writedata {scalar_t__ state; int card; } ;
struct TYPE_6__ {int debug_flags; } ;
typedef TYPE_2__ hysdn_card ;
struct TYPE_5__ {int fsgid; int fsuid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (TYPE_2__*,char*,int ,int ,int) ;
 int VAR_5 ;
 int FUNC_2 (struct conf_writedata*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_6, struct file *VAR_7)
{
 hysdn_card *VAR_8;
 struct conf_writedata *VAR_9;
 int VAR_10 = 0;

 FUNC_3(&VAR_5);
 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8->debug_flags & (VAR_4 | VAR_3))
  FUNC_1(VAR_8, "config close for uid=%d gid=%d mode=0x%x",
        VAR_7->f_cred->fsuid, VAR_7->f_cred->fsgid,
        VAR_7->f_mode);

 if ((VAR_7->f_mode & (VAR_1 | VAR_2)) == VAR_2) {

  if (VAR_7->private_data) {
   VAR_9 = VAR_7->private_data;

   if (VAR_9->state == VAR_0)
    VAR_10 = FUNC_5(VAR_9->card);
   FUNC_2(VAR_7->private_data);

  }
 } else if ((VAR_7->f_mode & (VAR_1 | VAR_2)) == VAR_1) {


  FUNC_2(VAR_7->private_data);
 }
 FUNC_4(&VAR_5);
 return (VAR_10);
}
