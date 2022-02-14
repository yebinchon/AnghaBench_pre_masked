
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
typedef void* u16 ;
struct brcms_c_info {void* tx_duty_cycle_cck; void* tx_duty_cycle_ofdm; TYPE_2__* hw; TYPE_1__* pub; } ;
struct TYPE_4__ {int d11core; } ;
struct TYPE_3__ {int unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,void*) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_2(struct brcms_c_info *VAR_3, int VAR_4, bool VAR_5,
     bool VAR_6)
{
 int VAR_7 = 0;
 uint VAR_8 =
     VAR_5 ? VAR_2 :
     VAR_1;
 if (VAR_4 > 100 || VAR_4 < 0) {
  FUNC_1(VAR_3->hw->d11core,
     "wl%d:  duty cycle value off limit\n",
     VAR_3->pub->unit);
  return -VAR_0;
 }
 if (VAR_4)
  VAR_7 = (100 - VAR_4) * 16 / VAR_4;

 if (VAR_6)
  FUNC_0(VAR_3->hw, VAR_8, (u16) VAR_7);

 if (VAR_5)
  VAR_3->tx_duty_cycle_ofdm = (u16) VAR_4;
 else
  VAR_3->tx_duty_cycle_cck = (u16) VAR_4;

 return 0;
}
