
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {int list; } ;
struct file {int private_data; } ;


 int FUNC_0 (struct nfs_open_context*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct nfs_open_context*) ;

void FUNC_3(struct file *VAR_0, struct nfs_open_context *VAR_1)
{
 VAR_0->private_data = FUNC_0(VAR_1);
 if (FUNC_1(&VAR_1->list))
  FUNC_2(VAR_1);
}
