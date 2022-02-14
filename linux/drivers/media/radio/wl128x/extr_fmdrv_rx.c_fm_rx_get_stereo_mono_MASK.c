
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fmdev {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fmdev*,int ,int ,int *,int,int *,int *) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct fmdev *VAR_3, u16 *VAR_4)
{
 __be16 VAR_5;
 u32 VAR_6;
 int VAR_7;

 if (VAR_4 == ((void*)0)) {
  FUNC_2("Invalid memory\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_3, VAR_1, VAR_2, ((void*)0), 2,
   &VAR_5, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 *VAR_4 = FUNC_0(VAR_5);

 return 0;
}
