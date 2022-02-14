
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct us_data {scalar_t__ extra; } ;
struct TYPE_2__ {scalar_t__ NumberOfPhyBlock; } ;
struct ene_ub6250_info {TYPE_1__ MS_Lib; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ene_ub6250_info*) ;
 int FUNC_1 (struct us_data*,scalar_t__,int ,int ) ;
 int FUNC_2 (struct us_data*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct us_data *VAR_4, u16 VAR_5)
{
 struct ene_ub6250_info *VAR_6 = (struct ene_ub6250_info *) VAR_4->extra;

 if (VAR_5 >= VAR_6->MS_Lib.NumberOfPhyBlock)
  return VAR_2;

 FUNC_2(VAR_4, VAR_5);

 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_4, VAR_5, 0, (u8)(~VAR_1 & VAR_0));

 return VAR_3;
}
