
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_private {int path; int iucv_connected; int iucv_severed; } ;
struct inode {int dummy; } ;
struct file {struct mon_private* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,struct mon_private*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int *,int ,int *,int ,struct mon_private*) ;
 int FUNC_6 (int ) ;
 struct mon_private* FUNC_7 () ;
 int VAR_8 ;
 int FUNC_8 (struct mon_private*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (struct inode*,struct file*) ;
 int FUNC_10 (char*,int) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int VAR_12 ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_13, struct file *VAR_14)
{
 struct mon_private *VAR_15;
 int VAR_16;




 VAR_16 = -VAR_0;
 if (FUNC_11(VAR_5, &VAR_9))
  goto out;

 VAR_16 = -VAR_2;
 VAR_15 = FUNC_7();
 if (!VAR_15)
  goto out_use;




 VAR_15->path = FUNC_4(VAR_6, VAR_4, VAR_3);
 if (!VAR_15->path)
  goto out_priv;
 VAR_16 = FUNC_5(VAR_15->path, &VAR_11,
          VAR_7, ((void*)0), VAR_12, VAR_15);
 if (VAR_16) {
  FUNC_10("Connecting to the z/VM *MONITOR system service "
         "failed with rc=%i\n", VAR_16);
  VAR_16 = -VAR_1;
  goto out_path;
 }



 FUNC_12(VAR_8,
     FUNC_0(&VAR_15->iucv_connected) ||
     FUNC_0(&VAR_15->iucv_severed));
 if (FUNC_0(&VAR_15->iucv_severed)) {
  FUNC_1(&VAR_15->iucv_severed, 0);
  FUNC_1(&VAR_15->iucv_connected, 0);
  VAR_16 = -VAR_1;
  goto out_path;
 }
 VAR_14->private_data = VAR_15;
 FUNC_3(VAR_10, VAR_15);
 return FUNC_9(VAR_13, VAR_14);

out_path:
 FUNC_6(VAR_15->path);
out_priv:
 FUNC_8(VAR_15);
out_use:
 FUNC_2(VAR_5, &VAR_9);
out:
 return VAR_16;
}
