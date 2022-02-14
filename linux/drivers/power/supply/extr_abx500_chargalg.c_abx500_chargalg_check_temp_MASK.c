
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ temp; } ;
struct TYPE_4__ {int btemp_underover; int btemp_lowhigh; } ;
struct abx500_chargalg {scalar_t__ t_hyst_norm; scalar_t__ t_hyst_lowhigh; TYPE_3__ batt_data; int dev; TYPE_2__* bm; TYPE_1__ events; } ;
struct TYPE_5__ {scalar_t__ temp_low; scalar_t__ temp_high; scalar_t__ temp_over; scalar_t__ temp_under; scalar_t__ temp_hysteresis; } ;


 int FUNC_0 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct abx500_chargalg *VAR_0)
{
 if (VAR_0->batt_data.temp > (VAR_0->bm->temp_low + VAR_0->t_hyst_norm) &&
  VAR_0->batt_data.temp < (VAR_0->bm->temp_high - VAR_0->t_hyst_norm)) {

  VAR_0->events.btemp_underover = 0;
  VAR_0->events.btemp_lowhigh = 0;
  VAR_0->t_hyst_norm = 0;
  VAR_0->t_hyst_lowhigh = 0;
 } else {
  if (((VAR_0->batt_data.temp >= VAR_0->bm->temp_high) &&
   (VAR_0->batt_data.temp <
    (VAR_0->bm->temp_over - VAR_0->t_hyst_lowhigh))) ||
   ((VAR_0->batt_data.temp >
    (VAR_0->bm->temp_under + VAR_0->t_hyst_lowhigh)) &&
   (VAR_0->batt_data.temp <= VAR_0->bm->temp_low))) {

   VAR_0->events.btemp_underover = 0;
   VAR_0->events.btemp_lowhigh = 1;
   VAR_0->t_hyst_norm = VAR_0->bm->temp_hysteresis;
   VAR_0->t_hyst_lowhigh = 0;
  } else if (VAR_0->batt_data.temp <= VAR_0->bm->temp_under ||
   VAR_0->batt_data.temp >= VAR_0->bm->temp_over) {

   VAR_0->events.btemp_underover = 1;
   VAR_0->events.btemp_lowhigh = 0;
   VAR_0->t_hyst_norm = 0;
   VAR_0->t_hyst_lowhigh = VAR_0->bm->temp_hysteresis;
  } else {

  FUNC_0(VAR_0->dev, "Within hysteresis limit temp: %d "
    "hyst_lowhigh %d, hyst normal %d\n",
    VAR_0->batt_data.temp, VAR_0->t_hyst_lowhigh,
    VAR_0->t_hyst_norm);
  }
 }
}
