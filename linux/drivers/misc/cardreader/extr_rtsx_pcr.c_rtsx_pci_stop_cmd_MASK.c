
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtsx_pcr {TYPE_1__* ops; } ;
struct TYPE_2__ {void (* stop_cmd ) (struct rtsx_pcr*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtsx_pcr*,int ,int,int) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int ) ;
 void FUNC_2 (struct rtsx_pcr*) ;

void FUNC_3(struct rtsx_pcr *VAR_6)
{
 if (VAR_6->ops->stop_cmd)
  return VAR_6->ops->stop_cmd(VAR_6);

 FUNC_1(VAR_6, VAR_2, VAR_4);
 FUNC_1(VAR_6, VAR_3, VAR_5);

 FUNC_0(VAR_6, VAR_0, 0x80, 0x80);
 FUNC_0(VAR_6, VAR_1, 0x80, 0x80);
}
