
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
struct ahash_request {int dummy; } ;
typedef int off_t ;


 int FUNC_0 (struct ahash_request*,struct scatterlist*,int *,size_t) ;
 int FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct scatterlist*,int) ;
 int FUNC_3 (struct scatterlist*,struct page*,size_t,int ) ;

__attribute__((used)) static inline void FUNC_4(struct ahash_request *VAR_0,
  struct page *VAR_1, off_t VAR_2, size_t VAR_3)
{
 struct scatterlist VAR_4;

 FUNC_2(&VAR_4, 1);
 FUNC_3(&VAR_4, VAR_1, VAR_3, VAR_2);
 FUNC_0(VAR_0, &VAR_4, ((void*)0), VAR_3);
 FUNC_1(VAR_0);
}
