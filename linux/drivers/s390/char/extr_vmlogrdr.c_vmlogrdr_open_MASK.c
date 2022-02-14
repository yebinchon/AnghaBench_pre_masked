
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmlogrdr_priv_t {int dev_in_use; int buffer_free; int * path; int autopurge; scalar_t__ autorecording; scalar_t__ iucv_path_severed; scalar_t__ connection_established; int system_service; int priv_lock; int receive_ready; } ;
struct inode {int dummy; } ;
struct file {int f_flags; struct vmlogrdr_priv_t* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct inode*) ;
 int * FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int *,int *,int ,int *,int *,struct vmlogrdr_priv_t*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,struct file*) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct vmlogrdr_priv_t* VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (struct vmlogrdr_priv_t*,int,int ) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static int FUNC_12 (struct inode *VAR_10, struct file *VAR_11)
{
 int VAR_12 = 0;
 struct vmlogrdr_priv_t * VAR_13 = ((void*)0);
 int VAR_14 = 0;
 int VAR_15;

 VAR_12 = FUNC_1(VAR_10);
 if (VAR_12 >= VAR_5)
  return -VAR_2;
 VAR_13 = &VAR_8[VAR_12];




 if (VAR_11->f_flags & VAR_6)
  return -VAR_3;


 FUNC_8(&VAR_13->priv_lock);
 if (VAR_13->dev_in_use) {
  FUNC_9(&VAR_13->priv_lock);
  return -VAR_0;
 }
 VAR_13->dev_in_use = 1;
 VAR_13->connection_established = 0;
 VAR_13->iucv_path_severed = 0;
 FUNC_0(&VAR_13->receive_ready, 0);
 VAR_13->buffer_free = 1;
 FUNC_9(&VAR_13->priv_lock);


 VAR_11->private_data = VAR_13;


 if (VAR_13->autorecording) {
  VAR_15 = FUNC_10(VAR_13,1,VAR_13->autopurge);
  if (VAR_15)
   FUNC_7("vmlogrdr: failed to start recording automatically\n");
 }


 VAR_13->path = FUNC_2(10, 0, VAR_4);
 if (!VAR_13->path)
  goto out_dev;
 VAR_14 = FUNC_3(VAR_13->path, &VAR_9,
           VAR_13->system_service, ((void*)0), ((void*)0),
           VAR_13);
 if (VAR_14) {
  FUNC_6("vmlogrdr: iucv connection to %s "
         "failed with rc %i \n",
         VAR_13->system_service, VAR_14);
  goto out_path;
 }





 FUNC_11(VAR_7, (VAR_13->connection_established)
     || (VAR_13->iucv_path_severed));
 if (VAR_13->iucv_path_severed)
  goto out_record;
 FUNC_5(VAR_10, VAR_11);
 return 0;

out_record:
 if (VAR_13->autorecording)
  FUNC_10(VAR_13,0,VAR_13->autopurge);
out_path:
 FUNC_4(VAR_13->path);
 VAR_13->path = ((void*)0);
out_dev:
 VAR_13->dev_in_use = 0;
 return -VAR_1;
}
