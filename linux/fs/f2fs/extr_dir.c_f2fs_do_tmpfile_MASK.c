
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int i_sem; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int VAR_1 ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (int *) ;
 struct page* FUNC_6 (struct inode*,struct inode*,int *,int *,int *) ;
 int FUNC_7 (struct page*,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct inode *VAR_2, struct inode *VAR_3)
{
 struct page *VAR_4;
 int VAR_5 = 0;

 FUNC_5(&FUNC_0(VAR_2)->i_sem);
 VAR_4 = FUNC_6(VAR_2, VAR_3, ((void*)0), ((void*)0), ((void*)0));
 if (FUNC_2(VAR_4)) {
  VAR_5 = FUNC_3(VAR_4);
  goto fail;
 }
 FUNC_7(VAR_4, 1);

 FUNC_4(VAR_2, VAR_0);
 FUNC_8(FUNC_1(VAR_2), VAR_1);
fail:
 FUNC_9(&FUNC_0(VAR_2)->i_sem);
 return VAR_5;
}
