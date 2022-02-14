
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_com_tx_meta {int dummy; } ;
struct ena_com_tx_ctx {int ena_meta; int meta_valid; } ;
struct ena_com_io_sq {int cached_tx_meta; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static inline bool FUNC_1(struct ena_com_io_sq *VAR_0,
          struct ena_com_tx_ctx *VAR_1)
{
 if (!VAR_1->meta_valid)
  return 0;

 return !!FUNC_0(&VAR_0->cached_tx_meta,
   &VAR_1->ena_meta,
   sizeof(struct ena_com_tx_meta));
}
