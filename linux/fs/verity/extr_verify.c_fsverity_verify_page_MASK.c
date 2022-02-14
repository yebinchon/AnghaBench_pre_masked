
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {struct fsverity_info* i_verity_info; } ;
struct TYPE_6__ {TYPE_2__* hash_alg; } ;
struct fsverity_info {TYPE_3__ tree_params; } ;
struct ahash_request {int dummy; } ;
struct TYPE_5__ {int tfm; } ;
struct TYPE_4__ {struct inode* host; } ;


 int VAR_0 ;
 struct ahash_request* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ahash_request*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct inode*,struct fsverity_info const*,struct ahash_request*,struct page*) ;

bool FUNC_4(struct page *VAR_1)
{
 struct inode *VAR_2 = VAR_1->mapping->host;
 const struct fsverity_info *VAR_3 = VAR_2->i_verity_info;
 struct ahash_request *VAR_4;
 bool VAR_5;

 VAR_4 = FUNC_0(VAR_3->tree_params.hash_alg->tfm, VAR_0);
 if (FUNC_2(!VAR_4))
  return 0;

 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_1);

 FUNC_1(VAR_4);

 return VAR_5;
}
