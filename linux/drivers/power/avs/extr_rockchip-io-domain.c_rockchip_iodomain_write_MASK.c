
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rockchip_iodomain_supply {int idx; struct rockchip_iodomain* iod; } ;
struct rockchip_iodomain {int dev; TYPE_1__* soc_data; int grf; } ;
struct TYPE_2__ {int grf_offset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct rockchip_iodomain_supply *VAR_1,
       int VAR_2)
{
 struct rockchip_iodomain *VAR_3 = VAR_1->iod;
 u32 VAR_4;
 int VAR_5;


 VAR_4 = (VAR_2 > VAR_0) ? 0 : 1;
 VAR_4 <<= VAR_1->idx;


 VAR_4 |= (FUNC_0(VAR_1->idx) << 16);

 VAR_5 = FUNC_2(VAR_3->grf, VAR_3->soc_data->grf_offset, VAR_4);
 if (VAR_5)
  FUNC_1(VAR_3->dev, "Couldn't write to GRF\n");

 return VAR_5;
}
