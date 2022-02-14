
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,struct inode*) ;

__attribute__((used)) static int
FUNC_5(
 struct inode *VAR_2,
 struct inode *VAR_3)
{
 int VAR_4;

 if (VAR_2 > VAR_3)
  FUNC_4(VAR_2, VAR_3);

retry:

 VAR_4 = FUNC_0(VAR_2, 1);
 if (VAR_4)
  return VAR_4;
 if (VAR_2 != VAR_3) {
  VAR_4 = FUNC_0(VAR_3, 1);
  if (VAR_4)
   return VAR_4;
 }


 FUNC_1(VAR_2);
 VAR_4 = FUNC_0(VAR_2, 0);
 if (VAR_4) {
  FUNC_3(VAR_2);
  if (VAR_4 == -VAR_0)
   goto retry;
  return VAR_4;
 }

 if (VAR_2 == VAR_3)
  return 0;


 FUNC_2(VAR_3, VAR_1);
 VAR_4 = FUNC_0(VAR_3, 0);
 if (VAR_4) {
  FUNC_3(VAR_2);
  FUNC_3(VAR_3);
  if (VAR_4 == -VAR_0)
   goto retry;
  return VAR_4;
 }

 return 0;
}
