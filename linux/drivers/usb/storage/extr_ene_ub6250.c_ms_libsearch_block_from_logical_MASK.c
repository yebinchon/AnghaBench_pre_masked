
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct us_data {scalar_t__ extra; } ;
struct TYPE_2__ {scalar_t__ NumberOfLogBlock; } ;
struct ene_ub6250_info {TYPE_1__ MS_Lib; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct ene_ub6250_info*,scalar_t__) ;
 int FUNC_1 (struct us_data*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct us_data *VAR_4, u16 VAR_5)
{
 u16 VAR_6;
 struct ene_ub6250_info *VAR_7 = (struct ene_ub6250_info *) VAR_4->extra;

 VAR_6 = FUNC_0(VAR_7, VAR_5);
 if (VAR_6 >= VAR_0) {
  if (VAR_5 >= VAR_7->MS_Lib.NumberOfLogBlock)
   return VAR_0;

  VAR_6 = (VAR_5 + VAR_2) / VAR_1;
  VAR_6 *= VAR_3;
  VAR_6 += VAR_3 - 1;
 }

 return FUNC_1(VAR_4, VAR_6);
}
