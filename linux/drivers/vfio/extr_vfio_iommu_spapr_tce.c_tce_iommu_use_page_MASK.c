
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,int,int ,struct page**) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_4, unsigned long *VAR_5)
{
 struct page *VAR_6 = ((void*)0);
 enum dma_data_direction VAR_7 = FUNC_2(VAR_4);

 if (FUNC_1(VAR_4 & VAR_3, 1,
   VAR_7 != VAR_0 ? VAR_2 : 0,
   &VAR_6) != 1)
  return -VAR_1;

 *VAR_5 = FUNC_0((unsigned long) FUNC_3(VAR_6));

 return 0;
}
