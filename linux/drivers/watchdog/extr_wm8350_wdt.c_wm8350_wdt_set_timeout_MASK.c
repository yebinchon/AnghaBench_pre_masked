
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct wm8350 {int dummy; } ;
struct watchdog_device {unsigned int timeout; } ;
struct TYPE_3__ {unsigned int time; int val; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct wm8350* FUNC_3 (struct watchdog_device*) ;
 int VAR_3 ;
 int FUNC_4 (struct wm8350*) ;
 int FUNC_5 (struct wm8350*,int ) ;
 int FUNC_6 (struct wm8350*) ;
 int FUNC_7 (struct wm8350*,int ,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_8(struct watchdog_device *VAR_5,
      unsigned int VAR_6)
{
 struct wm8350 *VAR_7 = FUNC_3(VAR_5);
 int VAR_8, VAR_9;
 u16 VAR_10;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++)
  if (VAR_4[VAR_9].time == VAR_6)
   break;
 if (VAR_9 == FUNC_0(VAR_4))
  return -VAR_0;

 FUNC_1(&VAR_3);
 FUNC_6(VAR_7);

 VAR_10 = FUNC_5(VAR_7, VAR_1);
 VAR_10 &= ~VAR_2;
 VAR_10 |= VAR_4[VAR_9].val;
 VAR_8 = FUNC_7(VAR_7, VAR_1, VAR_10);

 FUNC_4(VAR_7);
 FUNC_2(&VAR_3);

 VAR_5->timeout = VAR_6;
 return VAR_8;
}
