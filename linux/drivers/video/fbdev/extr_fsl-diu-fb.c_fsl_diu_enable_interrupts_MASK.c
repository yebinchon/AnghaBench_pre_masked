
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fsl_diu_data {TYPE_1__* diu_reg; } ;
struct TYPE_2__ {int int_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline void FUNC_2(struct fsl_diu_data *VAR_3)
{
 u32 VAR_4 = VAR_1;

 if (FUNC_0(VAR_0))
  VAR_4 |= VAR_2;

 FUNC_1(&VAR_3->diu_reg->int_mask, VAR_4);
}
