
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int work; } ;
struct mt7601u_dev {int prev_pwr_diff; TYPE_2__ freq_cal; int cal_work; TYPE_1__* ee; void** rf_pa_mode; } ;
struct TYPE_3__ {int rf_freq_off; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct mt7601u_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct mt7601u_dev*,int ,int,int ) ;
 void* FUNC_4 (struct mt7601u_dev*,int ) ;
 int FUNC_5 (struct mt7601u_dev*,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_6(struct mt7601u_dev *VAR_7)
{
 int VAR_8;

 VAR_7->rf_pa_mode[0] = FUNC_4(VAR_7, VAR_0);
 VAR_7->rf_pa_mode[1] = FUNC_4(VAR_7, VAR_1);

 VAR_8 = FUNC_3(VAR_7, 0, 12, VAR_7->ee->rf_freq_off);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_5(VAR_7, 0, VAR_4,
          FUNC_0(VAR_4));
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_5(VAR_7, 0, VAR_5,
          FUNC_0(VAR_5));
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_5(VAR_7, 0, VAR_6, FUNC_0(VAR_6));
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_7->prev_pwr_diff = 100;

 FUNC_1(&VAR_7->cal_work, VAR_2);
 FUNC_1(&VAR_7->freq_cal.work, VAR_3);

 return 0;
}
