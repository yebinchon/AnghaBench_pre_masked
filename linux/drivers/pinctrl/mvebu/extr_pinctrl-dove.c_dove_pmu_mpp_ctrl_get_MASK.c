
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_mpp_ctrl_data {scalar_t__ base; } ;


 unsigned long FUNC_0 (unsigned int) ;
 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct mvebu_mpp_ctrl_data*,unsigned int,unsigned long*) ;
 scalar_t__ VAR_6 ;
 unsigned long FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mvebu_mpp_ctrl_data *VAR_7,
     unsigned VAR_8, unsigned long *VAR_9)
{
 unsigned VAR_10 = (VAR_8 / VAR_1) * VAR_2;
 unsigned VAR_11 = (VAR_8 % VAR_1) * VAR_2;
 unsigned long VAR_12 = FUNC_2(VAR_7->base + VAR_4);
 unsigned long VAR_13;

 if ((VAR_12 & FUNC_0(VAR_8)) == 0)
  return FUNC_1(VAR_7, VAR_8, VAR_9);

 VAR_13 = FUNC_2(VAR_6 + VAR_5 + VAR_10);
 *VAR_9 = (VAR_13 >> VAR_11) & VAR_3;
 *VAR_9 |= VAR_0;

 return 0;
}
