
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int index; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int xattr_sem; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct page*,int ,int ) ;

int FUNC_9(struct inode *VAR_2, struct page *VAR_3)
{
 int VAR_4 = 0;

 FUNC_3(&FUNC_0(VAR_2)->xattr_sem);
 if (!FUNC_4(VAR_2)) {
  FUNC_7(&FUNC_0(VAR_2)->xattr_sem);
  return -VAR_0;
 }





 if (!VAR_3->index)
  VAR_4 = FUNC_5(VAR_2, VAR_3);
 else if (!FUNC_1(VAR_3)) {
  FUNC_8(VAR_3, 0, VAR_1);
  FUNC_2(VAR_3);
 }

 FUNC_7(&FUNC_0(VAR_2)->xattr_sem);

 FUNC_6(VAR_3);
 return VAR_4 >= 0 ? 0 : VAR_4;
}
