
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mlx5_mpfs {scalar_t__ size; int bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mlx5_mpfs *VAR_1, u32 *VAR_2)
{
 int VAR_3 = 0;

 *VAR_2 = FUNC_1(VAR_1->bitmap, VAR_1->size);
 if (*VAR_2 >= VAR_1->size)
  VAR_3 = -VAR_0;
 else
  FUNC_0(*VAR_2, VAR_1->bitmap);

 return VAR_3;
}
