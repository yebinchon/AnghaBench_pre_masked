
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct nfp_shared_buf_pool_info_get {int size; int threshold_type; int pool_type; } ;
struct nfp_shared_buf_pool_id {int pool; int shared_buf; } ;
struct nfp_pf {int dummy; } ;
struct devlink_sb_pool_info {unsigned int pool_type; unsigned int threshold_type; unsigned int size; unsigned int cell_size; } ;
typedef int id ;
typedef int get_data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct nfp_pf*,int ,struct nfp_shared_buf_pool_id*,int,struct nfp_shared_buf_pool_info_get*,int) ;
 unsigned int FUNC_3 (struct nfp_pf*,unsigned int) ;

int FUNC_4(struct nfp_pf *VAR_3, unsigned int VAR_4, u16 VAR_5,
       struct devlink_sb_pool_info *VAR_6)
{
 struct nfp_shared_buf_pool_info_get VAR_7;
 struct nfp_shared_buf_pool_id VAR_8 = {
  .shared_buf = FUNC_0(VAR_4),
  .pool = FUNC_0(VAR_5),
 };
 unsigned int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_3, VAR_4);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_3, VAR_2, &VAR_8, sizeof(VAR_8),
    &VAR_7, sizeof(VAR_7));
 if (VAR_10 < 0)
  return VAR_10;
 if (VAR_10 < sizeof(VAR_7))
  return -VAR_1;

 VAR_6->pool_type = FUNC_1(VAR_7.pool_type);
 VAR_6->threshold_type = FUNC_1(VAR_7.threshold_type);
 VAR_6->size = FUNC_1(VAR_7.size) * VAR_9;
 VAR_6->cell_size = VAR_9;

 return 0;
}
