
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct treepath {int dummy; } ;
struct item_head {int dummy; } ;
struct inode {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,struct item_head*) ;
 int FUNC_1 (int ,struct item_head*,int ) ;
 int FUNC_2 (struct treepath*) ;
 int FUNC_3 (struct item_head*) ;
 int FUNC_4 (struct item_head*) ;
 scalar_t__ FUNC_5 (struct item_head*) ;
 scalar_t__ FUNC_6 (struct inode*) ;
 int FUNC_7 (struct treepath*) ;

__attribute__((used)) static inline int FUNC_8(struct treepath *VAR_5,
         struct item_head *VAR_6,
         struct inode *VAR_7,
         loff_t VAR_8,
         int *VAR_9)
{
 if (FUNC_5(VAR_6) == VAR_1 &&
     VAR_8 == FUNC_6(VAR_7)) {
  FUNC_0(FUNC_3(VAR_6) != 2,
         "PAP-5220: incorrect empty directory item (%h)", VAR_6);
  *VAR_9 = -(VAR_2 + FUNC_4(VAR_6));

  return VAR_4;
 }

 if (FUNC_3(VAR_6) == 1) {




  *VAR_9 = -(VAR_2 + FUNC_4(VAR_6));
  return VAR_4;
 }


 *VAR_9 =
     -(VAR_0 +
       FUNC_1(FUNC_2(VAR_5), VAR_6, FUNC_7(VAR_5)));
 return VAR_3;
}
