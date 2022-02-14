
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bio* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static inline struct bio *FUNC_3(struct f2fs_sb_info *VAR_4,
      int VAR_5, bool VAR_6)
{
 struct bio *VAR_7;

 if (VAR_6) {

  VAR_7 = FUNC_0(VAR_2, VAR_5);
  if (!VAR_7)
   VAR_7 = FUNC_0(VAR_2 | VAR_3, VAR_5);
  return VAR_7;
 }
 if (FUNC_2(VAR_4, VAR_0)) {
  FUNC_1(VAR_0);
  return ((void*)0);
 }

 return FUNC_0(VAR_1, VAR_5);
}
