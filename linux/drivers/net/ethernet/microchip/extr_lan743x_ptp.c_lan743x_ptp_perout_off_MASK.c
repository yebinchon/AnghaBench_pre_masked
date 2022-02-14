
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan743x_ptp {int perout_gpio_bit; int perout_event_ch; } ;
struct lan743x_adapter {struct lan743x_ptp ptp; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct lan743x_adapter*,int ) ;
 int FUNC_4 (struct lan743x_adapter*,int ,int) ;
 int FUNC_5 (struct lan743x_adapter*,int) ;
 int FUNC_6 (struct lan743x_adapter*,int) ;

__attribute__((used)) static void FUNC_7(struct lan743x_adapter *VAR_1)
{
 struct lan743x_ptp *VAR_2 = &VAR_1->ptp;
 u32 VAR_3 = 0;

 if (VAR_2->perout_gpio_bit >= 0) {
  FUNC_5(VAR_1, VAR_2->perout_gpio_bit);
  VAR_2->perout_gpio_bit = -1;
 }

 if (VAR_2->perout_event_ch >= 0) {

  FUNC_4(VAR_1,
      FUNC_1(VAR_2->perout_event_ch),
      0xFFFF0000);
  FUNC_4(VAR_1,
      FUNC_0(VAR_2->perout_event_ch),
      0);

  VAR_3 = FUNC_3(VAR_1, VAR_0);
  VAR_3 |= FUNC_2
      (VAR_2->perout_event_ch);
  FUNC_4(VAR_1, VAR_0, VAR_3);
  FUNC_6(VAR_1, VAR_2->perout_event_ch);
  VAR_2->perout_event_ch = -1;
 }
}
