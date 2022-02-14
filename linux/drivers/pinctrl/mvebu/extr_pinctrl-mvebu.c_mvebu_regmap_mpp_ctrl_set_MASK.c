
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offset; int map; } ;
struct mvebu_mpp_ctrl_data {TYPE_1__ regmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,unsigned int,unsigned long) ;

int FUNC_1(struct mvebu_mpp_ctrl_data *VAR_3,
         unsigned int VAR_4, unsigned long VAR_5)
{
 unsigned VAR_6 = (VAR_4 / VAR_0) * VAR_1;
 unsigned VAR_7 = (VAR_4 % VAR_0) * VAR_1;

 return FUNC_0(VAR_3->regmap.map, VAR_3->regmap.offset + VAR_6,
      VAR_2 << VAR_7, VAR_5 << VAR_7);
}
