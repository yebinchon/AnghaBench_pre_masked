
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_mpp_ctrl_data {scalar_t__ base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

int FUNC_2(struct mvebu_mpp_ctrl_data *VAR_3,
        unsigned int VAR_4, unsigned long VAR_5)
{
 unsigned VAR_6 = (VAR_4 / VAR_0) * VAR_1;
 unsigned VAR_7 = (VAR_4 % VAR_0) * VAR_1;
 unsigned long VAR_8;

 VAR_8 = FUNC_0(VAR_3->base + VAR_6) & ~(VAR_2 << VAR_7);
 FUNC_1(VAR_8 | (VAR_5 << VAR_7), VAR_3->base + VAR_6);

 return 0;
}
