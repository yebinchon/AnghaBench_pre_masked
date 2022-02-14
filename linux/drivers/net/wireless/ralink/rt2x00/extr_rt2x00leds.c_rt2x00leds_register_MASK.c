
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int (* blink_set ) (TYPE_3__*,unsigned long*,unsigned long*) ;} ;
struct TYPE_8__ {int flags; TYPE_3__ led_dev; } ;
struct rt2x00_dev {TYPE_4__ led_radio; TYPE_4__ led_qual; TYPE_2__* ops; TYPE_4__ led_assoc; TYPE_1__* hw; } ;
typedef int name ;
struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {int wiphy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt2x00_dev*,TYPE_4__*,char*) ;
 int FUNC_1 (struct rt2x00_dev*) ;
 int FUNC_2 (char*,int,char*,char*,char const*) ;
 int FUNC_3 (TYPE_3__*,unsigned long*,unsigned long*) ;
 char* FUNC_4 (int ) ;

void FUNC_5(struct rt2x00_dev *VAR_1)
{
 char VAR_2[36];
 int VAR_3;
 unsigned long VAR_4;
 unsigned long VAR_5;
 const char *VAR_6 = FUNC_4(VAR_1->hw->wiphy);

 if (VAR_1->led_radio.flags & VAR_0) {
  FUNC_2(VAR_2, sizeof(VAR_2), "%s-%s::radio",
    VAR_1->ops->name, VAR_6);

  VAR_3 = FUNC_0(VAR_1,
       &VAR_1->led_radio,
       VAR_2);
  if (VAR_3)
   goto exit_fail;
 }

 if (VAR_1->led_assoc.flags & VAR_0) {
  FUNC_2(VAR_2, sizeof(VAR_2), "%s-%s::assoc",
    VAR_1->ops->name, VAR_6);

  VAR_3 = FUNC_0(VAR_1,
       &VAR_1->led_assoc,
       VAR_2);
  if (VAR_3)
   goto exit_fail;
 }

 if (VAR_1->led_qual.flags & VAR_0) {
  FUNC_2(VAR_2, sizeof(VAR_2), "%s-%s::quality",
    VAR_1->ops->name, VAR_6);

  VAR_3 = FUNC_0(VAR_1,
       &VAR_1->led_qual,
       VAR_2);
  if (VAR_3)
   goto exit_fail;
 }






 if (VAR_1->led_radio.led_dev.blink_set) {
  VAR_4 = 70;
  VAR_5 = 30;
  VAR_1->led_radio.led_dev.blink_set(
      &VAR_1->led_radio.led_dev, &VAR_4, &VAR_5);
 }

 return;

exit_fail:
 FUNC_1(VAR_1);
}
