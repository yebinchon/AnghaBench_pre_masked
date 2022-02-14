
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_private {struct mon_private** msg_array; scalar_t__ read_index; scalar_t__ write_index; int msglim_count; int read_ready; int iucv_connected; int iucv_severed; scalar_t__ path; } ;
struct inode {int dummy; } ;
struct file {struct mon_private* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct mon_private*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_5, struct file *VAR_6)
{
 int VAR_7, VAR_8;
 struct mon_private *VAR_9 = VAR_6->private_data;




 if (VAR_9->path) {
  VAR_7 = FUNC_4(VAR_9->path, VAR_4);
  if (VAR_7)
   FUNC_6("Disconnecting the z/VM *MONITOR system service failed with rc=%i\n",
    VAR_7);
  FUNC_3(VAR_9->path);
 }

 FUNC_0(&VAR_9->iucv_severed, 0);
 FUNC_0(&VAR_9->iucv_connected, 0);
 FUNC_0(&VAR_9->read_ready, 0);
 FUNC_0(&VAR_9->msglim_count, 0);
 VAR_9->write_index = 0;
 VAR_9->read_index = 0;
 FUNC_2(VAR_3, ((void*)0));

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  FUNC_5(VAR_9->msg_array[VAR_8]);
 FUNC_5(VAR_9);
 FUNC_1(VAR_0, &VAR_2);
 return 0;
}
