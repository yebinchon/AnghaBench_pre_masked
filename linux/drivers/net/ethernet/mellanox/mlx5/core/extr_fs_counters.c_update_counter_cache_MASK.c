
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct mlx5_fc_cache {scalar_t__ packets; int lastuse; scalar_t__ bytes; } ;


 void* FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (int ,void*,int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(int VAR_6, u32 *VAR_7,
     struct mlx5_fc_cache *VAR_8)
{
 void *VAR_9 = FUNC_0(VAR_4, VAR_7,
        VAR_0[VAR_6]);
 u64 VAR_10 = FUNC_1(VAR_5, VAR_9, VAR_10);
 u64 VAR_11 = FUNC_1(VAR_5, VAR_9, VAR_2);

 if (VAR_8->packets == VAR_10)
  return;

 VAR_8->packets = VAR_10;
 VAR_8->bytes = VAR_11;
 VAR_8->lastuse = VAR_1;
}
