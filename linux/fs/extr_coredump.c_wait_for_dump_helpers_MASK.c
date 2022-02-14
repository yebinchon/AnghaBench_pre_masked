
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int readers; int writers; int wait; int fasync_readers; } ;
struct file {struct pipe_inode_info* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct pipe_inode_info*) ;
 int FUNC_2 (struct pipe_inode_info*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct file *VAR_2)
{
 struct pipe_inode_info *VAR_3 = VAR_2->private_data;

 FUNC_1(VAR_3);
 VAR_3->readers++;
 VAR_3->writers--;
 FUNC_4(&VAR_3->wait);
 FUNC_0(&VAR_3->fasync_readers, VAR_1, VAR_0);
 FUNC_2(VAR_3);





 FUNC_3(VAR_3->wait, VAR_3->readers == 1);

 FUNC_1(VAR_3);
 VAR_3->readers--;
 VAR_3->writers++;
 FUNC_2(VAR_3);
}
