
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct scatterlist {int dummy; } ;
struct fsverity_hash_alg {int block_size; int tfm; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int const* FUNC_1 (int) ;
 int VAR_3 ;
 struct ahash_request* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (struct ahash_request*,int,int ,int *) ;
 int FUNC_5 (struct ahash_request*,struct scatterlist*,int *,size_t) ;
 int FUNC_6 (struct ahash_request*,int const*) ;
 int FUNC_7 (struct ahash_request*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ahash_request*) ;
 int VAR_4 ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int const*) ;
 int const* FUNC_12 (int ,int ) ;
 int const* FUNC_13 (size_t,int ) ;
 int FUNC_14 (int const*,int const*,size_t) ;
 size_t FUNC_15 (size_t,int ) ;
 int FUNC_16 (struct scatterlist*,int const*,size_t) ;
 int VAR_5 ;

const u8 *FUNC_17(const struct fsverity_hash_alg *VAR_6,
          const u8 *VAR_7, size_t VAR_8)
{
 u8 *VAR_9 = ((void*)0);
 struct ahash_request *VAR_10 = ((void*)0);
 u8 *VAR_11 = ((void*)0);
 size_t VAR_12;
 struct scatterlist VAR_13;
 FUNC_0(VAR_5);
 int VAR_14;

 if (VAR_8 == 0)
  return ((void*)0);

 VAR_9 = FUNC_12(FUNC_8(VAR_6->tfm), VAR_3);
 if (!VAR_9)
  return FUNC_1(-VAR_2);

 VAR_10 = FUNC_2(VAR_6->tfm, VAR_3);
 if (!VAR_10) {
  VAR_14 = -VAR_2;
  goto err_free;
 }
 VAR_12 = FUNC_15(VAR_8, VAR_6->block_size);
 VAR_11 = FUNC_13(VAR_12, VAR_3);
 if (!VAR_11) {
  VAR_14 = -VAR_2;
  goto err_free;
 }
 FUNC_14(VAR_11, VAR_7, VAR_8);

 FUNC_16(&VAR_13, VAR_11, VAR_12);
 FUNC_4(VAR_10, VAR_1 |
     VAR_0,
       VAR_4, &VAR_5);
 FUNC_5(VAR_10, &VAR_13, ((void*)0), VAR_12);

 VAR_14 = FUNC_10(FUNC_7(VAR_10), &VAR_5);
 if (VAR_14)
  goto err_free;

 VAR_14 = FUNC_10(FUNC_9(VAR_10), &VAR_5);
 if (VAR_14)
  goto err_free;

 VAR_14 = FUNC_6(VAR_10, VAR_9);
 if (VAR_14)
  goto err_free;
out:
 FUNC_3(VAR_10);
 FUNC_11(VAR_11);
 return VAR_9;

err_free:
 FUNC_11(VAR_9);
 VAR_9 = FUNC_1(VAR_14);
 goto out;
}
