
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef void* u32 ;
struct mlx4_mr {int mtt; int key; int enabled; void* access; void* pd; void* size; void* iova; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct mlx4_dev*,int,int,int *) ;

__attribute__((used)) static int FUNC_2(struct mlx4_dev *VAR_1, u32 VAR_2, u32 VAR_3,
      u64 VAR_4, u64 VAR_5, u32 VAR_6, int VAR_7,
      int VAR_8, struct mlx4_mr *VAR_9)
{
 VAR_9->iova = VAR_4;
 VAR_9->size = VAR_5;
 VAR_9->pd = VAR_3;
 VAR_9->access = VAR_6;
 VAR_9->enabled = VAR_0;
 VAR_9->key = FUNC_0(VAR_2);

 return FUNC_1(VAR_1, VAR_7, VAR_8, &VAR_9->mtt);
}
