
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct irb {int scsw; } ;
struct dasd_device {int dummy; } ;
struct dasd_ccw_req {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dasd_device*,struct dasd_ccw_req*,struct irb*) ;
 int FUNC_1 (struct dasd_device*,struct dasd_ccw_req*,struct irb*) ;
 int* FUNC_2 (struct irb*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct dasd_device *VAR_7,
     struct dasd_ccw_req *VAR_8, struct irb *VAR_9)
{
 u8 *VAR_10 = FUNC_2(VAR_9);

 if (FUNC_4(&VAR_9->scsw)) {





  if (VAR_10 && (VAR_10[1] & VAR_5) &&
      FUNC_5(VAR_1, &VAR_8->flags))
   return;
  if (FUNC_3(&VAR_9->scsw) == 0x40 &&
      FUNC_5(VAR_2, &VAR_8->flags))
   return;

  FUNC_1(VAR_7, VAR_8, VAR_9);
 } else {





  if (VAR_10 && VAR_10[0] & VAR_4 &&
      FUNC_5(VAR_0, &VAR_8->flags))
   return;

  if (VAR_10 && VAR_10[1] & VAR_6 &&
      FUNC_5(VAR_3, &VAR_8->flags))
   return;

  FUNC_0(VAR_7, VAR_8, VAR_9);
 }
}
