
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_da_args {int flags; int valuelen; int op_flags; int value; scalar_t__ rmtblkno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (struct xfs_da_args*) ;

__attribute__((used)) static int
FUNC_3(
 struct xfs_da_args *VAR_5,
 unsigned char *VAR_6,
 int VAR_7)
{



 if (VAR_5->flags & VAR_0) {
  VAR_5->valuelen = VAR_7;
  return 0;
 }




 if (VAR_5->valuelen < VAR_7) {
  VAR_5->valuelen = VAR_7;
  return -VAR_3;
 }

 if (VAR_5->op_flags & VAR_4) {
  VAR_5->value = FUNC_0(VAR_7, 0);
  if (!VAR_5->value)
   return -VAR_2;
 }
 VAR_5->valuelen = VAR_7;


 if (VAR_5->rmtblkno)
  return FUNC_2(VAR_5);







 if (!VAR_6)
  return -VAR_1;
 FUNC_1(VAR_5->value, VAR_6, VAR_7);
 return 0;
}
