
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {struct bpf_map* private_data; } ;
struct bpf_map {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* map_release ) (struct bpf_map*,struct file*) ;} ;


 int FUNC_0 (struct bpf_map*) ;
 int FUNC_1 (struct bpf_map*,struct file*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct bpf_map *VAR_2 = VAR_1->private_data;

 if (VAR_2->ops->map_release)
  VAR_2->ops->map_release(VAR_2, VAR_1);

 FUNC_0(VAR_2);
 return 0;
}
