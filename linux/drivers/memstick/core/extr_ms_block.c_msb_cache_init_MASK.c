
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msb_data {scalar_t__ cache; int block_size; int cache_flush_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct msb_data*) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct msb_data *VAR_3)
{
 FUNC_2(&VAR_3->cache_flush_timer, VAR_2, 0);

 if (!VAR_3->cache)
  VAR_3->cache = FUNC_0(VAR_3->block_size, VAR_1);
 if (!VAR_3->cache)
  return -VAR_0;

 FUNC_1(VAR_3);
 return 0;
}
