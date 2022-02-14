
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_comm {int vc_mutex; scalar_t__ vc_seq; int * vc_sb; int vc_waitq; int vc_processing; int vc_pending; int vc_inuse; } ;
struct inode {int dummy; } ;
struct file {struct venus_comm* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 struct venus_comm* VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 () ;
 int FUNC_2 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct inode * VAR_8, struct file * VAR_9)
{
 struct venus_comm *VAR_10;
 int VAR_11, VAR_12;

 if (FUNC_6(VAR_5) != &VAR_6)
  return -VAR_1;

 if (FUNC_1() != &VAR_7)
  return -VAR_1;

 VAR_11 = FUNC_2(VAR_8);
 if (VAR_11 < 0 || VAR_11 >= VAR_3)
  return -VAR_2;

 VAR_12 = -VAR_0;
 VAR_10 = &VAR_4[VAR_11];
 FUNC_4(&VAR_10->vc_mutex);

 if (!VAR_10->vc_inuse) {
  VAR_10->vc_inuse++;

  FUNC_0(&VAR_10->vc_pending);
  FUNC_0(&VAR_10->vc_processing);
  FUNC_3(&VAR_10->vc_waitq);
  VAR_10->vc_sb = ((void*)0);
  VAR_10->vc_seq = 0;

  VAR_9->private_data = VAR_10;
  VAR_12 = 0;
 }

 FUNC_5(&VAR_10->vc_mutex);
 return VAR_12;
}
