
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mlx5_fc_cache {scalar_t__ packets; scalar_t__ bytes; scalar_t__ lastuse; } ;
struct mlx5_fc {scalar_t__ lastpackets; scalar_t__ lastbytes; struct mlx5_fc_cache cache; } ;



void FUNC_0(struct mlx5_fc *VAR_0,
     u64 *VAR_1, u64 *VAR_2, u64 *VAR_3)
{
 struct mlx5_fc_cache VAR_4;

 VAR_4 = VAR_0->cache;

 *VAR_1 = VAR_4.bytes - VAR_0->lastbytes;
 *VAR_2 = VAR_4.packets - VAR_0->lastpackets;
 *VAR_3 = VAR_4.lastuse;

 VAR_0->lastbytes = VAR_4.bytes;
 VAR_0->lastpackets = VAR_4.packets;
}
