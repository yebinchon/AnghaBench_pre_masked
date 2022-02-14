
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct aspeed_p2a_user* private_data; } ;
struct aspeed_p2a_user {struct aspeed_p2a_user* parent; int readwrite; scalar_t__ read; struct file* file; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct aspeed_p2a_user* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, struct file *VAR_3)
{
 struct aspeed_p2a_user *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->file = VAR_3;
 VAR_4->read = 0;
 FUNC_1(VAR_4->readwrite, 0, sizeof(VAR_4->readwrite));


 VAR_4->parent = VAR_3->private_data;


 VAR_3->private_data = VAR_4;

 return 0;
}
