
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct dw_pcie {int dev; scalar_t__ dbi_base; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write_dbi ) (struct dw_pcie*,scalar_t__,scalar_t__,size_t,scalar_t__) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,size_t,scalar_t__) ;
 int FUNC_2 (struct dw_pcie*,scalar_t__,scalar_t__,size_t,scalar_t__) ;

void FUNC_3(struct dw_pcie *VAR_0, u32 VAR_1, size_t VAR_2, u32 VAR_3)
{
 int VAR_4;

 if (VAR_0->ops->write_dbi) {
  VAR_0->ops->write_dbi(VAR_0, VAR_0->dbi_base, VAR_1, VAR_2, VAR_3);
  return;
 }

 VAR_4 = FUNC_1(VAR_0->dbi_base + VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  FUNC_0(VAR_0->dev, "Write DBI address failed\n");
}
