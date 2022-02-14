
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {int xattr_sem; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,int ,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,int ) ;
 int VAR_3 ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,struct page*) ;
 int FUNC_10 (struct inode*) ;
 struct page* FUNC_11 (struct address_space*,int ,unsigned int) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct address_space *VAR_4,
       struct inode *VAR_5,
       unsigned VAR_6,
       void **VAR_7)
{
 int VAR_8 = 0, VAR_9;
 struct page *VAR_10;

 VAR_10 = FUNC_11(VAR_4, 0, VAR_6);
 if (!VAR_10)
  return -VAR_1;

 FUNC_5(&FUNC_0(VAR_5)->xattr_sem);
 if (!FUNC_8(VAR_5)) {
  FUNC_6(VAR_5, VAR_2);
  goto out;
 }

 VAR_9 = FUNC_7(VAR_5);

 if (!FUNC_1(VAR_10)) {
  VAR_8 = FUNC_9(VAR_5, VAR_10);
  if (VAR_8 < 0)
   goto out;
 }

 VAR_8 = FUNC_4(VAR_10, 0, VAR_9,
      VAR_3);
 if (VAR_8) {
  FUNC_14(&FUNC_0(VAR_5)->xattr_sem);
  FUNC_13(VAR_10);
  FUNC_12(VAR_10);
  FUNC_10(VAR_5);
  return VAR_8;
 }

 FUNC_2(VAR_10);
 FUNC_3(VAR_10);
 FUNC_6(VAR_5, VAR_2);
 *VAR_7 = (void *)VAR_0;

out:
 FUNC_14(&FUNC_0(VAR_5)->xattr_sem);
 if (VAR_10) {
  FUNC_13(VAR_10);
  FUNC_12(VAR_10);
 }
 return VAR_8;
}
