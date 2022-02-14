
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mlx5_cmd {scalar_t__ token; int token_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u8 FUNC_2(struct mlx5_cmd *VAR_0)
{
 u8 VAR_1;

 FUNC_0(&VAR_0->token_lock);
 VAR_0->token++;
 if (VAR_0->token == 0)
  VAR_0->token++;
 VAR_1 = VAR_0->token;
 FUNC_1(&VAR_0->token_lock);

 return VAR_1;
}
