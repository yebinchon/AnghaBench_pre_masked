
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct scatterlist* FUNC_0 (int,int,int ) ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (struct scatterlist*,int) ;
 int FUNC_3 (struct scatterlist*,struct page*,int,int ) ;

__attribute__((used)) static struct scatterlist *
FUNC_4(phys_addr_t VAR_2, int VAR_3, int VAR_4)
{
 struct scatterlist *VAR_5;
 struct page *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_4, sizeof(struct scatterlist), VAR_0);
 if (!VAR_5)
  return ((void*)0);
 FUNC_2(VAR_5, VAR_4);
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6 = FUNC_1(VAR_2 >> VAR_1);
  FUNC_3(&VAR_5[VAR_7], VAR_6, VAR_3, 0);
  VAR_2 += VAR_3;
 }
 return VAR_5;
}
