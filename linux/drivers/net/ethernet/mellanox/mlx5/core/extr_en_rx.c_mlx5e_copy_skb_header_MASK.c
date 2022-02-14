
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct mlx5e_dma_info {scalar_t__ addr; int page; } ;
struct device {int dummy; } ;


 unsigned int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,scalar_t__,unsigned int,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,void const*,unsigned int) ;

__attribute__((used)) static inline void
FUNC_4(struct device *VAR_1, struct sk_buff *VAR_2,
        struct mlx5e_dma_info *VAR_3,
        int VAR_4, u32 VAR_5)
{
 const void *VAR_6 = FUNC_2(VAR_3->page) + VAR_4;

 unsigned int VAR_7 = FUNC_0(VAR_5, sizeof(long));

 FUNC_1(VAR_1, VAR_3->addr + VAR_4, VAR_7,
    VAR_0);
 FUNC_3(VAR_2, VAR_6, VAR_7);
}
