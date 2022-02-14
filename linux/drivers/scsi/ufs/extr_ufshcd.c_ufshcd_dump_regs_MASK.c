
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufs_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t,int ) ;
 int FUNC_2 (char const*,int *,size_t) ;
 int FUNC_3 (struct ufs_hba*,size_t) ;

int FUNC_4(struct ufs_hba *VAR_3, size_t VAR_4, size_t VAR_5,
       const char *VAR_6)
{
 u32 *VAR_7;
 size_t VAR_8;

 if (VAR_4 % 4 != 0 || VAR_5 % 4 != 0)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_5, VAR_2);
 if (!VAR_7)
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8 += 4)
  VAR_7[VAR_8 / 4] = FUNC_3(VAR_3, VAR_4 + VAR_8);

 FUNC_2(VAR_6, VAR_7, VAR_5);
 FUNC_0(VAR_7);

 return 0;
}
