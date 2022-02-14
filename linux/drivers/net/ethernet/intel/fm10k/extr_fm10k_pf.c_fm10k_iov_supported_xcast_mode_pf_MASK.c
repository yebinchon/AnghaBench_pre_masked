
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fm10k_vf_info {int vf_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;




__attribute__((used)) static u8 FUNC_0(struct fm10k_vf_info *VAR_5,
         u8 VAR_6)
{
 u8 VAR_7 = VAR_5->vf_flags;


 switch (VAR_6) {
 case 128:
  if (VAR_7 & VAR_3)
   return 128;

 case 131:
  if (VAR_7 & VAR_0)
   return 131;

 case 130:
  if (VAR_7 & VAR_1)
   return 130;

 case 129:
  if (VAR_7 & VAR_2)
   return 129;

 default:
  break;
 }


 return VAR_4;
}
