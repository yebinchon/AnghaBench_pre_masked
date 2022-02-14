
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_operations {int dummy; } ;
struct seq_file {struct fm10k_ring* private; } ;
struct inode {struct fm10k_ring* i_private; } ;
struct fm10k_ring {struct fm10k_q_vector* q_vector; } ;
struct TYPE_2__ {struct fm10k_ring* ring; } ;
struct fm10k_q_vector {TYPE_1__ rx; } ;
struct file {scalar_t__ private_data; } ;


 struct seq_operations VAR_0 ;
 struct seq_operations VAR_1 ;
 int FUNC_0 (struct file*,struct seq_operations const*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_2, struct file *VAR_3)
{
 struct fm10k_ring *VAR_4 = VAR_2->i_private;
 struct fm10k_q_vector *VAR_5 = VAR_4->q_vector;
 const struct seq_operations *VAR_6;
 int VAR_7;

 if (VAR_4 < VAR_5->rx.ring)
  VAR_6 = &VAR_1;
 else
  VAR_6 = &VAR_0;

 VAR_7 = FUNC_0(VAR_3, VAR_6);
 if (VAR_7)
  return VAR_7;

 ((struct seq_file *)VAR_3->private_data)->private = VAR_4;

 return 0;
}
