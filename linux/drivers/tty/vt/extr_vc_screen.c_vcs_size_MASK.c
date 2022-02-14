
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_rows; int vc_cols; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct vc_data* FUNC_3 (struct inode*,int *) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_3)
{
 int VAR_4;
 struct vc_data *VAR_5;

 FUNC_0();

 VAR_5 = FUNC_3(VAR_3, ((void*)0));
 if (!VAR_5)
  return -VAR_0;

 VAR_4 = VAR_5->vc_rows * VAR_5->vc_cols;

 if (FUNC_1(VAR_3)) {
  if (FUNC_2(VAR_3))
   return -VAR_1;
  VAR_4 = 2*VAR_4 + VAR_2;
 } else if (FUNC_2(VAR_3))
  VAR_4 *= 4;
 return VAR_4;
}
