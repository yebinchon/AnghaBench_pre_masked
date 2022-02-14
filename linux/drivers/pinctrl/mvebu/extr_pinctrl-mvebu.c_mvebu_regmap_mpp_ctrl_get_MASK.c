
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
 int FUNC_0 (int ,scalar_t__,unsigned int*) ;

int FUNC_1(struct mvebu_mpp_ctrl_data *VAR_3,
         unsigned int VAR_4, unsigned long *VAR_5)
{
 unsigned VAR_6 = (VAR_4 / VAR_0) * VAR_1;
 unsigned VAR_7 = (VAR_4 % VAR_0) * VAR_1;
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_3->regmap.map, VAR_3->regmap.offset + VAR_6, &VAR_8);
 if (VAR_9)
  return VAR_9;

 *VAR_5 = (VAR_8 >> VAR_7) & VAR_2;

 return 0;
}
