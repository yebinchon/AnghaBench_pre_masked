
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct scatterlist {int dummy; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 (struct scatterlist*) ;
 int FUNC_1 (struct ahash_request*,struct scatterlist*,void*,scalar_t__) ;
 int FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct scatterlist*,int ) ;
 int FUNC_4 (struct scatterlist*,void const*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ahash_request *VAR_0,
 const void *VAR_1, u32 VAR_2, u32 VAR_3,
 const void *VAR_4, void *VAR_5)
{
 struct scatterlist VAR_6[2];

 FUNC_3(VAR_6, FUNC_0(VAR_6));
 FUNC_4(VAR_6, VAR_1, VAR_2);
 if (VAR_3)
  FUNC_4(VAR_6 + 1, VAR_4, VAR_3);

 FUNC_1(VAR_0, VAR_6, VAR_5, VAR_2 + VAR_3);

 FUNC_2(VAR_0);
}
