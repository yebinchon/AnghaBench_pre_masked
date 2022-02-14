
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp8788_buck {int lp; } ;
typedef enum lp8788_dvs_mode { ____Placeholder_lp8788_dvs_mode } lp8788_dvs_mode ;
typedef enum lp8788_buck_id { ____Placeholder_lp8788_buck_id } lp8788_buck_id ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static enum lp8788_dvs_mode
FUNC_1(struct lp8788_buck *VAR_5, enum lp8788_buck_id VAR_6)
{
 u8 VAR_7, VAR_8;

 switch (VAR_6) {
 case 129:
  VAR_8 = VAR_1;
  break;
 case 128:
  VAR_8 = VAR_2;
  break;
 default:
  return VAR_4;
 }

 FUNC_0(VAR_5->lp, VAR_3, &VAR_7);

 return VAR_7 & VAR_8 ? VAR_4 : VAR_0;
}
