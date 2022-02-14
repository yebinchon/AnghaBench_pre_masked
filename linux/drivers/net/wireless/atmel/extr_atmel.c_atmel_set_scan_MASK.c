
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int dummy; } ;
struct atmel_private {scalar_t__ station_state; scalar_t__ site_survey_state; int irqlock; scalar_t__ fast_scan; int management_timer; scalar_t__ last_survey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct atmel_private*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_6 ;
 struct atmel_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_7,
     struct iw_request_info *VAR_8,
     struct iw_point *VAR_9,
     char *VAR_10)
{
 struct atmel_private *VAR_11 = FUNC_2(VAR_7);
 unsigned long VAR_12;
 if (VAR_11->station_state == VAR_5)
  return -VAR_0;


 if (FUNC_5(VAR_6, VAR_11->last_survey + 20 * VAR_2))
  VAR_11->site_survey_state = VAR_3;
 VAR_11->last_survey = VAR_6;


 if (VAR_11->site_survey_state == VAR_4)
  return -VAR_1;

 FUNC_1(&VAR_11->management_timer);
 FUNC_3(&VAR_11->irqlock, VAR_12);

 VAR_11->site_survey_state = VAR_4;
 VAR_11->fast_scan = 0;
 FUNC_0(VAR_11, 0);
 FUNC_4(&VAR_11->irqlock, VAR_12);

 return 0;
}
