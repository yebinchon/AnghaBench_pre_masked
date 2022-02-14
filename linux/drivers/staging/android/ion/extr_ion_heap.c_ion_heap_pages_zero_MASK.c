
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
typedef int pgprot_t ;


 int FUNC_0 (struct scatterlist*,int,int ) ;
 int FUNC_1 (struct scatterlist*,int) ;
 int FUNC_2 (struct scatterlist*,struct page*,size_t,int ) ;

int FUNC_3(struct page *VAR_0, size_t VAR_1, pgprot_t VAR_2)
{
 struct scatterlist VAR_3;

 FUNC_1(&VAR_3, 1);
 FUNC_2(&VAR_3, VAR_0, VAR_1, 0);
 return FUNC_0(&VAR_3, 1, VAR_2);
}
