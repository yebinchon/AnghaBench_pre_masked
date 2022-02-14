
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* process ) (struct fm10k_hw*,struct fm10k_mbx_info*) ;} ;
struct fm10k_mbx_info {int timeout; scalar_t__ state; int mbmem_reg; int tx; TYPE_1__ ops; int mbx_reg; } ;
struct fm10k_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fm10k_mbx_info*) ;
 int FUNC_2 (struct fm10k_hw*,int ,int) ;
 int FUNC_3 (struct fm10k_hw*,struct fm10k_mbx_info*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct fm10k_hw *VAR_6,
     struct fm10k_mbx_info *VAR_7)
{
 int VAR_8 = VAR_7->timeout ? VAR_0 : 0;


 VAR_7->state = VAR_5;


 FUNC_2(VAR_6, VAR_7->mbx_reg, VAR_3 |
       VAR_1);
 do {
  FUNC_4(VAR_2);
  VAR_7->ops.process(VAR_6, VAR_7);
  VAR_8 -= VAR_2;
 } while ((VAR_8 > 0) && (VAR_7->state != VAR_4));




 FUNC_1(VAR_7);
 FUNC_0(&VAR_7->tx);

 FUNC_2(VAR_6, VAR_7->mbmem_reg, 0);
}
