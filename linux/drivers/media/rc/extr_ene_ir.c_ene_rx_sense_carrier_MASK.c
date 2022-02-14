
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ir_raw_event {int carrier_report; int carrier; int duty_cycle; } ;
struct ene_device {int rdev; scalar_t__ carrier_detect_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct ene_device*,int ) ;
 int FUNC_2 (int ,struct ir_raw_event*) ;

__attribute__((used)) static void FUNC_3(struct ene_device *VAR_3)
{
 int VAR_4, VAR_5;
 int VAR_6 = FUNC_1(VAR_3, VAR_1);
 int VAR_7 = FUNC_1(VAR_3, VAR_0);

 if (!(VAR_6 & VAR_2))
  return;

 VAR_6 &= ~VAR_2;

 if (!VAR_6)
  return;

 FUNC_0("RX: hardware carrier period = %02x", VAR_6);
 FUNC_0("RX: hardware carrier pulse period = %02x", VAR_7);

 VAR_4 = 2000000 / VAR_6;
 VAR_5 = (VAR_7 * 100) / VAR_6;
 FUNC_0("RX: sensed carrier = %d Hz, duty cycle %d%%",
      VAR_4, VAR_5);
 if (VAR_3->carrier_detect_enabled) {
  struct ir_raw_event VAR_8 = {
   .carrier_report = 1,
   .carrier = VAR_4,
   .duty_cycle = VAR_5
  };
  FUNC_2(VAR_3->rdev, &VAR_8);
 }
}
