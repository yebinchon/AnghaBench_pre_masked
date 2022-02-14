
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef int pgoff_t ;
typedef int block_t ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct inode*,struct inode*,int*,int*,int,int,int,int) ;
 int FUNC_3 (struct inode*,int*,int*,int,int) ;
 int FUNC_4 (struct inode*,int*,int*,int,int) ;
 int FUNC_5 (int,int) ;
 int* FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_2,
   struct inode *VAR_3, pgoff_t VAR_4, pgoff_t VAR_5,
   pgoff_t VAR_6, bool VAR_7)
{
 block_t *VAR_8;
 int *VAR_9;
 pgoff_t VAR_10;
 int VAR_11;

 while (VAR_6) {
  VAR_10 = FUNC_8((pgoff_t)4 * FUNC_0(VAR_2), VAR_6);

  VAR_8 = FUNC_6(FUNC_1(VAR_2),
     FUNC_5(VAR_10, sizeof(block_t)),
     VAR_1);
  if (!VAR_8)
   return -VAR_0;

  VAR_9 = FUNC_6(FUNC_1(VAR_2),
     FUNC_5(VAR_10, sizeof(int)),
     VAR_1);
  if (!VAR_9) {
   FUNC_7(VAR_8);
   return -VAR_0;
  }

  VAR_11 = FUNC_3(VAR_2, VAR_8,
     VAR_9, VAR_4, VAR_10);
  if (VAR_11)
   goto roll_back;

  VAR_11 = FUNC_2(VAR_2, VAR_3, VAR_8,
     VAR_9, VAR_4, VAR_5, VAR_10, VAR_7);
  if (VAR_11)
   goto roll_back;

  VAR_4 += VAR_10;
  VAR_5 += VAR_10;
  VAR_6 -= VAR_10;

  FUNC_7(VAR_8);
  FUNC_7(VAR_9);
 }
 return 0;

roll_back:
 FUNC_4(VAR_2, VAR_8, VAR_9, VAR_4, VAR_10);
 FUNC_7(VAR_8);
 FUNC_7(VAR_9);
 return VAR_11;
}
