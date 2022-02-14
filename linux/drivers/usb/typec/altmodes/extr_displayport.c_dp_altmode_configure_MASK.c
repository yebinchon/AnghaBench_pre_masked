
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_6__ {int status; int conf; } ;
struct dp_altmode {TYPE_3__ data; TYPE_2__* port; TYPE_1__* alt; } ;
struct TYPE_5__ {int vdo; } ;
struct TYPE_4__ {int vdo; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct dp_altmode *VAR_7, u8 VAR_8)
{
 u32 VAR_9 = VAR_0;
 u8 VAR_10 = 0;

 switch (VAR_8) {
 case 129:
  return 0;
 case 130:
  VAR_9 |= VAR_1;
  VAR_10 = FUNC_1(VAR_7->alt->vdo) &
        FUNC_0(VAR_7->port->vdo);
  break;
 case 128:
 case 131:
  VAR_9 |= VAR_2;
  VAR_10 = FUNC_0(VAR_7->alt->vdo) &
        FUNC_1(VAR_7->port->vdo);
  break;
 default:
  break;
 }


 if (!FUNC_2(VAR_7->data.conf)) {

  if (VAR_7->data.status & VAR_5 &&
      VAR_10 & VAR_4)
   VAR_10 &= VAR_4;
  else if (VAR_10 & VAR_3)
   VAR_10 &= VAR_3;

  if (!VAR_10)
   return -VAR_6;

  VAR_9 |= FUNC_3(VAR_10);
 }

 VAR_7->data.conf = VAR_9;

 return 0;
}
