
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct cx231xx* priv; } ;
struct cx231xx_dvb {TYPE_2__ adapter; } ;
struct TYPE_3__ {int max_pkt_size; } ;
struct cx231xx {int mode_tv; TYPE_1__ ts1_mode; int dev; scalar_t__ USE_ISO; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx231xx*,int ,int ,int ,int ) ;
 int FUNC_1 (struct cx231xx*,int ,int ,int ,int ) ;
 int FUNC_2 (struct cx231xx*,int ,int) ;
 int FUNC_3 (struct cx231xx*,int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct cx231xx_dvb *VAR_6)
{
 int VAR_7;
 struct cx231xx *VAR_8 = VAR_6->adapter.priv;

 if (VAR_8->USE_ISO) {
  FUNC_4(VAR_8->dev, "DVB transfer mode is ISO.\n");
  FUNC_2(VAR_8, VAR_3, 5);
  VAR_7 = FUNC_3(VAR_8, VAR_0);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_8->mode_tv = 1;
  return FUNC_1(VAR_8, VAR_1,
     VAR_2,
     VAR_8->ts1_mode.max_pkt_size,
     VAR_5);
 } else {
  FUNC_4(VAR_8->dev, "DVB transfer mode is BULK.\n");
  FUNC_2(VAR_8, VAR_3, 0);
  VAR_7 = FUNC_3(VAR_8, VAR_0);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_8->mode_tv = 1;
  return FUNC_0(VAR_8, VAR_1,
     VAR_2,
     VAR_8->ts1_mode.max_pkt_size,
     VAR_4);
 }

}
