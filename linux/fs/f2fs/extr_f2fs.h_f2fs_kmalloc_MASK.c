
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (size_t,int ) ;
 void* FUNC_2 (size_t,int ) ;
 scalar_t__ FUNC_3 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static inline void *FUNC_4(struct f2fs_sb_info *VAR_1,
     size_t VAR_2, gfp_t VAR_3)
{
 void *VAR_4;

 if (FUNC_3(VAR_1, VAR_0)) {
  FUNC_0(VAR_0);
  return ((void*)0);
 }

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 return FUNC_2(VAR_2, VAR_3);
}
