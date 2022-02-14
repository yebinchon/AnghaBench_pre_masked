
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtsx_pcr {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* clear_ocpstat ) (struct rtsx_pcr*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtsx_pcr*,int ,int,int) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 int FUNC_2 (int) ;

void FUNC_3(struct rtsx_pcr *VAR_3)
{
 if (VAR_3->ops->clear_ocpstat) {
  VAR_3->ops->clear_ocpstat(VAR_3);
 } else {
  u8 VAR_4 = VAR_1 | VAR_2;
  u8 VAR_5 = VAR_1 | VAR_2;

  FUNC_0(VAR_3, VAR_0, VAR_4, VAR_5);
  FUNC_2(100);
  FUNC_0(VAR_3, VAR_0, VAR_4, 0);
 }
}
