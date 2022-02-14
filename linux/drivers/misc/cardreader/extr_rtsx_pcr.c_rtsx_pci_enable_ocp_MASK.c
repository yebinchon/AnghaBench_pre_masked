
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtsx_pcr {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* enable_ocp ) (struct rtsx_pcr*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtsx_pcr*,int ,int,int) ;
 int FUNC_1 (struct rtsx_pcr*) ;

void FUNC_2(struct rtsx_pcr *VAR_5)
{
 u8 VAR_6 = VAR_4 | VAR_3;

 if (VAR_5->ops->enable_ocp) {
  VAR_5->ops->enable_ocp(VAR_5);
 } else {
  FUNC_0(VAR_5, VAR_0, VAR_1, 0);
  FUNC_0(VAR_5, VAR_2, 0xFF, VAR_6);
 }

}
