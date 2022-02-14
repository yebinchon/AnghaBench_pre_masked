
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wbcir_data {int carrier_report_enabled; int spinlock; scalar_t__ sbase; TYPE_1__* dev; scalar_t__ ebase; scalar_t__ pulse_duration; } ;
struct rc_dev {struct wbcir_data* priv; } ;
struct TYPE_2__ {int rx_resolution; scalar_t__ idle; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct wbcir_data*,int ) ;
 int FUNC_5 (scalar_t__,int,int) ;

__attribute__((used)) static int
FUNC_6(struct rc_dev *VAR_9, int VAR_10)
{
 struct wbcir_data *VAR_11 = VAR_9->priv;
 unsigned long VAR_12;

 FUNC_2(&VAR_11->spinlock, VAR_12);

 if (VAR_11->carrier_report_enabled == VAR_10) {
  FUNC_3(&VAR_11->spinlock, VAR_12);
  return 0;
 }

 VAR_11->pulse_duration = 0;
 FUNC_5(VAR_11->ebase + VAR_4, VAR_3,
      VAR_2 | VAR_3);

 if (VAR_10 && VAR_11->dev->idle)
  FUNC_5(VAR_11->ebase + VAR_4,
    VAR_2, VAR_2 | VAR_3);


 FUNC_4(VAR_11, VAR_0);
 VAR_11->dev->rx_resolution = FUNC_0(VAR_10 ? 2 : 10);
 FUNC_1(VAR_10 ? 0x03 : 0x0f, VAR_11->sbase + VAR_6);
 FUNC_1(0x00, VAR_11->sbase + VAR_5);


 FUNC_4(VAR_11, VAR_1);
 FUNC_5(VAR_11->sbase + VAR_7,
    VAR_10 ? VAR_8 : 0, VAR_8);

 VAR_11->carrier_report_enabled = VAR_10;
 FUNC_3(&VAR_11->spinlock, VAR_12);

 return 0;
}
