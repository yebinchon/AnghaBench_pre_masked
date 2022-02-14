
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef scalar_t__ ext2_fsblk_t ;


 int FUNC_0 (struct inode*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct inode*,scalar_t__,unsigned long*,int*) ;
 int FUNC_2 (struct inode*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0,
   ext2_fsblk_t VAR_1, int VAR_2, int VAR_3,
   ext2_fsblk_t VAR_4[4], int *VAR_5)
{
 int VAR_6, VAR_7;
 unsigned long VAR_8 = 0;
 int VAR_9 = 0;
 ext2_fsblk_t VAR_10 = 0;
 int VAR_11 = 0;
 VAR_6 = VAR_3 + VAR_2;

 while (1) {
  VAR_8 = VAR_6;

  VAR_10 = FUNC_1(VAR_0,VAR_1,&VAR_8,VAR_5);
  if (*VAR_5)
   goto failed_out;

  VAR_6 -= VAR_8;

  while (VAR_9 < VAR_2 && VAR_8) {
   VAR_4[VAR_9++] = VAR_10++;
   VAR_8--;
  }

  if (VAR_8 > 0)
   break;
 }


 VAR_4[VAR_9] = VAR_10;


 VAR_11 = VAR_8;
 *VAR_5 = 0;
 return VAR_11;
failed_out:
 for (VAR_7 = 0; VAR_7 <VAR_9; VAR_7++)
  FUNC_0(VAR_0, VAR_4[VAR_7], 1);
 if (VAR_9)
  FUNC_2(VAR_0);
 return VAR_11;
}
