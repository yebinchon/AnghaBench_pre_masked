
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {scalar_t__ mac_type; int tbi_compatibility_en; int device_id; void* media_type; } ;




 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;

 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct e1000_hw *VAR_6)
{
 u32 VAR_7;

 if (VAR_6->mac_type != VAR_2) {

  VAR_6->tbi_compatibility_en = 0;
 }

 switch (VAR_6->device_id) {
 case 132:
 case 131:
  VAR_6->media_type = VAR_5;
  break;
 default:
  switch (VAR_6->mac_type) {
  case 130:
  case 129:
   VAR_6->media_type = VAR_4;
   break;
  case 128:
   VAR_6->media_type = VAR_3;
   break;
  default:
   VAR_7 = FUNC_0(VAR_1);
   if (VAR_7 & VAR_0) {
    VAR_6->media_type = VAR_4;

    VAR_6->tbi_compatibility_en = 0;
   } else {
    VAR_6->media_type = VAR_3;
   }
   break;
  }
 }
}
