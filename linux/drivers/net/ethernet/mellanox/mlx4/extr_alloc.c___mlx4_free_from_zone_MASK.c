
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx4_zone_entry {int use_rr; scalar_t__ offset; int bitmap; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct mlx4_zone_entry *VAR_0, u32 VAR_1,
      u32 VAR_2)
{
 FUNC_0(VAR_0->bitmap, VAR_1 - VAR_0->offset, VAR_2, VAR_0->use_rr);
}
