
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int size; int buf; } ;
struct inode {int i_private; } ;
struct file {scalar_t__ private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct file*,int ,int ) ;
 int FUNC_2 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_4, struct file *VAR_5)
{
 struct seq_file *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_3, VAR_4->i_private);
 if (!VAR_7) {

  VAR_6 = (struct seq_file *)VAR_5->private_data;
  VAR_6->size = (VAR_2 * 2);
  VAR_6->buf = FUNC_0(VAR_6->size, VAR_1);
  if (!VAR_6->buf) {
   FUNC_2(VAR_4, VAR_5);
   VAR_7 = -VAR_0;
  }
 }
 return VAR_7;
}
