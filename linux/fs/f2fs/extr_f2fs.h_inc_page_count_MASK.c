
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int * nr_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct f2fs_sb_info *VAR_6, int VAR_7)
{
 FUNC_0(&VAR_6->nr_pages[VAR_7]);

 if (VAR_7 == VAR_0 ||
   VAR_7 == VAR_3 ||
   VAR_7 == VAR_2 ||
   VAR_7 == VAR_4 ||
   VAR_7 == VAR_1)
  FUNC_1(VAR_6, VAR_5);
}
