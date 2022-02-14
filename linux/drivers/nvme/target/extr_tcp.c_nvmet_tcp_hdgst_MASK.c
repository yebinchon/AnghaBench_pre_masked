
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 (struct ahash_request*,struct scatterlist*,void*,size_t) ;
 int FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct scatterlist*,void*,size_t) ;

__attribute__((used)) static inline void FUNC_3(struct ahash_request *VAR_0,
  void *VAR_1, size_t VAR_2)
{
 struct scatterlist VAR_3;

 FUNC_2(&VAR_3, VAR_1, VAR_2);
 FUNC_0(VAR_0, &VAR_3, VAR_1 + VAR_2, VAR_2);
 FUNC_1(VAR_0);
}
