
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_mpp_ctrl_data {scalar_t__ base; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mvebu_mpp_ctrl_data *VAR_2, unsigned VAR_3,
    unsigned long VAR_4)
{
 unsigned long VAR_5 = FUNC_0(VAR_2->base + VAR_1);

 VAR_5 &= ~VAR_0;
 if (VAR_4)
  VAR_5 |= VAR_0;
 FUNC_1(VAR_5, VAR_2->base + VAR_1);

 return 0;
}
