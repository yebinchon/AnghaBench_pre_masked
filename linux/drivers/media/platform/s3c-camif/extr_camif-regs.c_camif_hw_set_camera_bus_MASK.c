
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {unsigned int flags; } ;
struct TYPE_6__ {TYPE_2__ sensor; } ;
struct camif_dev {TYPE_1__* variant; TYPE_3__ pdata; } ;
struct TYPE_4__ {scalar_t__ ip_revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (struct camif_dev*,int ) ;
 int FUNC_1 (struct camif_dev*,int ,int) ;
 int FUNC_2 (char*,int) ;

void FUNC_3(struct camif_dev *VAR_11)
{
 unsigned int VAR_12 = VAR_11->pdata.sensor.flags;

 u32 VAR_13 = FUNC_0(VAR_11, VAR_6);

 VAR_13 &= ~(VAR_3 | VAR_4 |
   VAR_2 | VAR_1);

 if (VAR_12 & VAR_9)
  VAR_13 |= VAR_3;

 if (VAR_12 & VAR_10)
  VAR_13 |= VAR_4;





 if (VAR_12 & VAR_8)
  VAR_13 |= VAR_2;

 if (VAR_11->variant->ip_revision == VAR_5) {
  if (VAR_12 & VAR_7)
   VAR_13 |= VAR_1;
  VAR_13 |= VAR_0;
 }

 FUNC_2("Setting CIGCTRL to: %#x\n", VAR_13);

 FUNC_1(VAR_11, VAR_6, VAR_13);
}
