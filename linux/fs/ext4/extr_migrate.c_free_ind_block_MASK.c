
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef int handle_t ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct inode*,int *,int ,int,int) ;
 int FUNC_1 (int *,struct inode*) ;
 int FUNC_2 (int *,struct inode*,scalar_t__) ;
 int FUNC_3 (int *,struct inode*,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(handle_t *VAR_2, struct inode *VAR_3, __le32 *VAR_4)
{
 int VAR_5;


 if (VAR_4[0]) {
  FUNC_1(VAR_2, VAR_3);
  FUNC_0(VAR_2, VAR_3, ((void*)0),
    FUNC_4(VAR_4[0]), 1,
     VAR_1 |
     VAR_0);
 }


 if (VAR_4[1]) {
  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4[1]);
  if (VAR_5)
   return VAR_5;
 }


 if (VAR_4[2]) {
  VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4[2]);
  if (VAR_5)
   return VAR_5;
 }
 return 0;
}
