
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct work_struct {int dummy; } ;
struct ptp_clock_event {int timestamp; scalar_t__ index; int type; } ;
struct mv88e6xxx_chip {int tai_event_work; int ptp_clock; int tstamp_tc; int dev; } ;
struct delayed_work {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 struct mv88e6xxx_chip* FUNC_3 (struct delayed_work*) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;
 int FUNC_5 (struct mv88e6xxx_chip*) ;
 int FUNC_6 (struct mv88e6xxx_chip*,int ,int*,int ) ;
 int FUNC_7 (struct mv88e6xxx_chip*,int ,int) ;
 int FUNC_8 (int ,struct ptp_clock_event*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int) ;
 struct delayed_work* FUNC_11 (struct work_struct*) ;

__attribute__((used)) static void FUNC_12(struct work_struct *VAR_5)
{
 struct delayed_work *VAR_6 = FUNC_11(VAR_5);
 struct mv88e6xxx_chip *VAR_7 = FUNC_3(VAR_6);
 struct ptp_clock_event VAR_8;
 u16 VAR_9[4];
 u32 VAR_10;
 int VAR_11;

 FUNC_4(VAR_7);
 VAR_11 = FUNC_6(VAR_7, VAR_0,
     VAR_9, FUNC_0(VAR_9));
 FUNC_5(VAR_7);

 if (VAR_11) {
  FUNC_1(VAR_7->dev, "failed to read TAI status register\n");
  return;
 }
 if (VAR_9[0] & VAR_1) {
  FUNC_2(VAR_7->dev, "missed event capture\n");
  return;
 }
 if (!(VAR_9[0] & VAR_2))
  goto out;

 VAR_10 = ((u32)VAR_9[2] << 16) | VAR_9[1];


 VAR_9[0] &= ~VAR_2;
 FUNC_4(VAR_7);
 VAR_11 = FUNC_7(VAR_7, VAR_0, VAR_9[0]);
 FUNC_5(VAR_7);


 VAR_8.type = VAR_3;


 VAR_8.index = 0;
 FUNC_4(VAR_7);
 VAR_8.timestamp = FUNC_10(&VAR_7->tstamp_tc, VAR_10);
 FUNC_5(VAR_7);

 FUNC_8(VAR_7->ptp_clock, &VAR_8);
out:
 FUNC_9(&VAR_7->tai_event_work, VAR_4);
}
