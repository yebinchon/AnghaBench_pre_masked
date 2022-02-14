
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct page {scalar_t__ index; } ;
typedef unsigned int const s64 ;


 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (struct page*) ;

__attribute__((used)) static void FUNC_4(struct page *VAR_3,
  const s64 VAR_4)
{
 u8 *VAR_5 = FUNC_3(VAR_3);
 unsigned int VAR_6;

 FUNC_2("Zeroing page region outside initialized size.");
 if (((s64)VAR_3->index << VAR_1) >= VAR_4) {
  FUNC_0(VAR_5);
  return;
 }
 VAR_6 = VAR_4 & ~VAR_0;
 FUNC_1(VAR_5 + VAR_6, 0, VAR_2 - VAR_6);
 return;
}
