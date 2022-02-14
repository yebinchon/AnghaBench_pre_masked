
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
struct merkle_tree_params {scalar_t__ block_size; scalar_t__ hashstate; } ;
struct inode {int dummy; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ahash_request*,int,int ,int *) ;
 int FUNC_3 (struct ahash_request*,struct scatterlist*,int *,scalar_t__) ;
 int FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (struct ahash_request*) ;
 int FUNC_6 (struct ahash_request*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_7 (int,int *) ;
 int FUNC_8 (struct inode const*,char*,int) ;
 int FUNC_9 (struct scatterlist*,int) ;
 int FUNC_10 (struct scatterlist*,struct page*,scalar_t__,int ) ;
 int VAR_5 ;

int FUNC_11(const struct merkle_tree_params *VAR_6,
         const struct inode *VAR_7,
         struct ahash_request *VAR_8, struct page *VAR_9, u8 *VAR_10)
{
 struct scatterlist VAR_11;
 FUNC_0(VAR_5);
 int VAR_12;

 if (FUNC_1(VAR_6->block_size != VAR_3))
  return -VAR_2;

 FUNC_9(&VAR_11, 1);
 FUNC_10(&VAR_11, VAR_9, VAR_3, 0);
 FUNC_2(VAR_8, VAR_1 |
     VAR_0,
       VAR_4, &VAR_5);
 FUNC_3(VAR_8, &VAR_11, VAR_10, VAR_3);

 if (VAR_6->hashstate) {
  VAR_12 = FUNC_6(VAR_8, VAR_6->hashstate);
  if (VAR_12) {
   FUNC_8(VAR_7,
         "Error %d importing hash state", VAR_12);
   return VAR_12;
  }
  VAR_12 = FUNC_5(VAR_8);
 } else {
  VAR_12 = FUNC_4(VAR_8);
 }

 VAR_12 = FUNC_7(VAR_12, &VAR_5);
 if (VAR_12)
  FUNC_8(VAR_7, "Error %d computing page hash", VAR_12);
 return VAR_12;
}
