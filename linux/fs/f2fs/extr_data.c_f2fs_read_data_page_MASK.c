
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (TYPE_1__*,int *,struct page*,int,int) ;
 int FUNC_2 (struct inode*,struct page*) ;
 TYPE_1__* FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, struct page *VAR_3)
{
 struct inode *VAR_4 = FUNC_3(VAR_3)->host;
 int VAR_5 = -VAR_1;

 FUNC_4(VAR_3, VAR_0);


 if (FUNC_0(VAR_4))
  VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (VAR_5 == -VAR_1)
  VAR_5 = FUNC_1(FUNC_3(VAR_3),
      ((void*)0), VAR_3, 1, 0);
 return VAR_5;
}
