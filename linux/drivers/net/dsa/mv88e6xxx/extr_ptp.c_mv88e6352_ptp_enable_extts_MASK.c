
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int index; } ;
struct ptp_clock_request {TYPE_1__ extts; } ;
struct mv88e6xxx_chip {int tai_event_work; int ptp_clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int ,int) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int,int) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct mv88e6xxx_chip *VAR_7,
          struct ptp_clock_request *VAR_8, int VAR_9)
{
 int VAR_10 = (VAR_8->extts.flags & VAR_5);
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_12 = FUNC_5(VAR_7->ptp_clock, VAR_4, VAR_8->extts.index);

 if (VAR_12 < 0)
  return -VAR_0;

 FUNC_3(VAR_7);

 if (VAR_9) {
  VAR_11 = VAR_1;

  VAR_13 = FUNC_2(VAR_7, VAR_12, VAR_11, 1);
  if (VAR_13)
   goto out;

  FUNC_6(&VAR_7->tai_event_work,
          VAR_6);

  VAR_13 = FUNC_1(VAR_7, VAR_3, VAR_10);
 } else {
  VAR_11 = VAR_2;

  VAR_13 = FUNC_2(VAR_7, VAR_12, VAR_11, 1);

  FUNC_0(&VAR_7->tai_event_work);
 }

out:
 FUNC_4(VAR_7);

 return VAR_13;
}
