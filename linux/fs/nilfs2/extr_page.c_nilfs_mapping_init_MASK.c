
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct address_space {int * a_ops; int * private_data; scalar_t__ flags; struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct address_space*,int ) ;

void FUNC_1(struct address_space *VAR_2, struct inode *VAR_3)
{
 VAR_2->host = VAR_3;
 VAR_2->flags = 0;
 FUNC_0(VAR_2, VAR_0);
 VAR_2->private_data = ((void*)0);
 VAR_2->a_ops = &VAR_1;
}
