
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct map_iter* private; } ;
struct map_iter {int dummy; } ;
struct inode {struct bpf_map* i_private; } ;
struct file {struct seq_file* private_data; } ;
struct bpf_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct map_iter* FUNC_0 (struct bpf_map*) ;
 int FUNC_1 (struct map_iter*) ;
 int FUNC_2 (struct file*,int *) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 struct bpf_map *VAR_4 = VAR_2->i_private;
 struct map_iter *VAR_5;
 struct seq_file *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_3, &VAR_1);
 if (VAR_7) {
  FUNC_1(VAR_5);
  return VAR_7;
 }

 VAR_6 = VAR_3->private_data;
 VAR_6->private = VAR_5;

 return 0;
}
