
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct fsverity_hash_alg {int tfm; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct ahash_request* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct ahash_request*,int,int ,int *) ;
 int FUNC_4 (struct ahash_request*,struct scatterlist*,int *,size_t) ;
 int FUNC_5 (struct ahash_request*) ;
 int VAR_4 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct scatterlist*,void const*,size_t) ;
 int VAR_5 ;

int FUNC_8(const struct fsverity_hash_alg *VAR_6,
    const void *VAR_7, size_t VAR_8, u8 *VAR_9)
{
 struct ahash_request *VAR_10;
 struct scatterlist VAR_11;
 FUNC_0(VAR_5);
 int VAR_12;

 VAR_10 = FUNC_1(VAR_6->tfm, VAR_3);
 if (!VAR_10)
  return -VAR_2;

 FUNC_7(&VAR_11, VAR_7, VAR_8);
 FUNC_3(VAR_10, VAR_1 |
     VAR_0,
       VAR_4, &VAR_5);
 FUNC_4(VAR_10, &VAR_11, VAR_9, VAR_8);

 VAR_12 = FUNC_6(FUNC_5(VAR_10), &VAR_5);

 FUNC_2(VAR_10);
 return VAR_12;
}
