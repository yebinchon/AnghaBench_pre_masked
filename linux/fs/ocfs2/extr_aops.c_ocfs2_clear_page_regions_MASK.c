
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct page {int dummy; } ;
struct ocfs2_super {int dummy; } ;


 void* FUNC_0 (struct page*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,int ,unsigned int) ;
 int FUNC_3 (struct ocfs2_super*,int ,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_4(struct page *VAR_0,
         struct ocfs2_super *VAR_1, u32 VAR_2,
         unsigned VAR_3, unsigned VAR_4)
{
 void *VAR_5;
 unsigned int VAR_6, VAR_7;

 FUNC_3(VAR_1, VAR_2, &VAR_6, &VAR_7);

 VAR_5 = FUNC_0(VAR_0);

 if (VAR_3 || VAR_4) {
  if (VAR_3 > VAR_6)
   FUNC_2(VAR_5 + VAR_6, 0, VAR_3 - VAR_6);
  if (VAR_4 < VAR_7)
   FUNC_2(VAR_5 + VAR_4, 0, VAR_7 - VAR_4);
 } else {
  FUNC_2(VAR_5 + VAR_6, 0, VAR_7 - VAR_6);
 }

 FUNC_1(VAR_5);
}
