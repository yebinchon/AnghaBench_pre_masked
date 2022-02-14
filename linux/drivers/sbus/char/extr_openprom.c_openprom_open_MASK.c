
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {void* private_data; } ;
struct TYPE_3__ {int current_node; int lastnode; } ;
typedef TYPE_1__ DATA ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct inode * VAR_3, struct file * VAR_4)
{
 DATA *VAR_5;

 VAR_5 = FUNC_0(sizeof(DATA), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(&VAR_2);
 VAR_5->current_node = FUNC_3("/");
 VAR_5->lastnode = VAR_5->current_node;
 VAR_4->private_data = (void *) VAR_5;
 FUNC_2(&VAR_2);

 return 0;
}
