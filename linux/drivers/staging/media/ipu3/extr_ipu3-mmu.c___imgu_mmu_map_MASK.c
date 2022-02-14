
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct imgu_mmu {size_t dummy_page_pteval; int lock; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,size_t*,size_t*) ;
 size_t* FUNC_2 (struct imgu_mmu*,size_t) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct imgu_mmu *VAR_3, unsigned long VAR_4,
     phys_addr_t VAR_5)
{
 u32 VAR_6, VAR_7;
 unsigned long VAR_8;
 u32 *VAR_9;

 if (!VAR_3)
  return -VAR_1;

 FUNC_1(VAR_4, &VAR_6, &VAR_7);

 VAR_9 = FUNC_2(VAR_3, VAR_6);
 if (!VAR_9)
  return -VAR_2;

 FUNC_3(&VAR_3->lock, VAR_8);

 if (VAR_9[VAR_7] != VAR_3->dummy_page_pteval) {
  FUNC_4(&VAR_3->lock, VAR_8);
  return -VAR_0;
 }

 VAR_9[VAR_7] = FUNC_0(VAR_5);

 FUNC_4(&VAR_3->lock, VAR_8);

 return 0;
}
