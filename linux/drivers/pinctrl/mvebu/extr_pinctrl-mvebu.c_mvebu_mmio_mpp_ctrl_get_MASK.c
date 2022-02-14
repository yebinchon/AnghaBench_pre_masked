
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_mpp_ctrl_data {scalar_t__ base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;

int FUNC_1(struct mvebu_mpp_ctrl_data *VAR_3,
        unsigned int VAR_4, unsigned long *VAR_5)
{
 unsigned VAR_6 = (VAR_4 / VAR_0) * VAR_1;
 unsigned VAR_7 = (VAR_4 % VAR_0) * VAR_1;

 *VAR_5 = (FUNC_0(VAR_3->base + VAR_6) >> VAR_7) & VAR_2;

 return 0;
}
