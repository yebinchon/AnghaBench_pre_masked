
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {void* vindpm; void* vovp; void* iilimit; void* iterm; void* vbat; void* ichg; } ;
struct bq24257_device {int iilimit_autoset_enable; TYPE_1__ init_data; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* FUNC_0 (int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,char*,int *) ;

__attribute__((used)) static int FUNC_2(struct bq24257_device *VAR_15)
{
 int VAR_16;
 u32 VAR_17;


 VAR_16 = FUNC_1(VAR_15->dev, "ti,charge-current", &VAR_17);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_15->init_data.ichg = FUNC_0(VAR_17, VAR_9,
           VAR_0);

 VAR_16 = FUNC_1(VAR_15->dev, "ti,battery-regulation-voltage",
           &VAR_17);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_15->init_data.vbat = FUNC_0(VAR_17, VAR_12,
           VAR_3);

 VAR_16 = FUNC_1(VAR_15->dev, "ti,termination-current",
           &VAR_17);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_15->init_data.iterm = FUNC_0(VAR_17, VAR_11,
            VAR_2);


 VAR_16 = FUNC_1(VAR_15->dev, "ti,current-limit",
           &VAR_17);
 if (VAR_16 < 0) {
  VAR_15->iilimit_autoset_enable = 1;






  VAR_15->init_data.iilimit = VAR_6;
 } else
  VAR_15->init_data.iilimit =
    FUNC_0(VAR_17,
       VAR_10,
       VAR_1);

 VAR_16 = FUNC_1(VAR_15->dev, "ti,ovp-voltage",
           &VAR_17);
 if (VAR_16 < 0)
  VAR_15->init_data.vovp = VAR_8;
 else
  VAR_15->init_data.vovp = FUNC_0(VAR_17,
            VAR_14,
            VAR_5);

 VAR_16 = FUNC_1(VAR_15->dev, "ti,in-dpm-voltage",
           &VAR_17);
 if (VAR_16 < 0)
  VAR_15->init_data.vindpm = VAR_7;
 else
  VAR_15->init_data.vindpm =
    FUNC_0(VAR_17,
       VAR_13,
       VAR_4);

 return 0;
}
