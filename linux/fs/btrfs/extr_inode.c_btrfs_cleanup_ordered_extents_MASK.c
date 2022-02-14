
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct page {int dummy; } ;
struct inode {int i_mapping; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 void FUNC_1 (struct inode*,int,int,int) ;
 struct page* FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

__attribute__((used)) static inline void FUNC_5(struct inode *VAR_2,
       struct page *VAR_3,
       u64 VAR_4, u64 VAR_5)
{
 unsigned long VAR_6 = VAR_4 >> VAR_0;
 unsigned long VAR_7 = (VAR_4 + VAR_5 - 1) >> VAR_0;
 u64 VAR_8 = FUNC_3(VAR_3);
 u64 VAR_9 = VAR_8 + VAR_1 - 1;

 struct page *VAR_10;

 while (VAR_6 <= VAR_7) {
  VAR_10 = FUNC_2(VAR_2->i_mapping, VAR_6);
  VAR_6++;
  if (!VAR_10)
   continue;
  FUNC_0(VAR_10);
  FUNC_4(VAR_10);
 }






 if (VAR_8 >= VAR_4 && VAR_9 <= (VAR_4 + VAR_5 - 1)) {
  VAR_4 += VAR_1;
  VAR_5 -= VAR_1;
 }

 return FUNC_1(VAR_2, VAR_4, VAR_5, 0);
}
