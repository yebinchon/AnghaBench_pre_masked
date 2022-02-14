
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ fw_rssi; } ;
struct _adapter {TYPE_1__ recvpriv; int mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct _adapter*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct _adapter*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct _adapter *VAR_3)
{
 u32 VAR_4 = 0;
 int VAR_5 = 50;

 if (FUNC_0(&VAR_3->mlmepriv, VAR_2)) {
  FUNC_4(VAR_3, VAR_0, 0xf4000001);
  FUNC_1(100);

  while ((FUNC_2(VAR_3, VAR_0)) &&
         (VAR_5 > 0)) {
   VAR_5--;
   FUNC_1(20);
  }
  if (VAR_5 != 0)
   VAR_4 = FUNC_2(VAR_3, VAR_1);
  else
   VAR_4 = 0;
  VAR_4 >>= 4;
  VAR_3->recvpriv.fw_rssi =
    (u8)FUNC_3(VAR_4);
 }
}
