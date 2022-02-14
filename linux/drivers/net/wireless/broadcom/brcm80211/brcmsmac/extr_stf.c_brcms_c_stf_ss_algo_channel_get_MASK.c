
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct tx_power {scalar_t__* target; } ;
struct brcms_c_info {TYPE_2__* band; TYPE_1__* pub; } ;
struct TYPE_4__ {int pi; } ;
struct TYPE_3__ {int up; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (int ,struct tx_power*,int ) ;

void
FUNC_4(struct brcms_c_info *VAR_9, u16 *VAR_10,
       u16 VAR_11)
{
 struct tx_power VAR_12 = { };
 u8 VAR_13, VAR_14, VAR_15;


 *VAR_10 = 0;

 if (!VAR_9->pub->up) {
  *VAR_10 = (u16) -1;
  return;
 }

 FUNC_3(VAR_9->band->pi, &VAR_12,
        FUNC_0(VAR_11));

 VAR_13 = (FUNC_1(VAR_11)) ?
     VAR_7 : VAR_4;
 VAR_14 = (FUNC_1(VAR_11)) ?
     VAR_6 : VAR_3;
 VAR_15 = (FUNC_1(VAR_11)) ?
     VAR_8 : VAR_5;







 if (VAR_12.target[VAR_13] > (VAR_12.target[VAR_14] + 12))
  FUNC_2(VAR_10, VAR_1);
 else
  FUNC_2(VAR_10, VAR_0);






 if (VAR_12.target[VAR_13] <= (VAR_12.target[VAR_15] + 12))
  FUNC_2(VAR_10, VAR_2);
}
