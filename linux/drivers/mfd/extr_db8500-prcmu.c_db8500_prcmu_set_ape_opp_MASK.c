
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ header; scalar_t__ ape_opp; } ;
struct TYPE_4__ {scalar_t__ ape_opp; int lock; TYPE_1__ ack; int work; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 () ;
 TYPE_2__ VAR_11 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (int,int ) ;

int FUNC_9(u8 VAR_13)
{
 int VAR_14 = 0;

 if (VAR_13 == VAR_11.ape_opp)
  return 0;

 FUNC_2(&VAR_11.lock);

 if (VAR_11.ape_opp == VAR_2)
  FUNC_5(0);

 if ((VAR_13 != VAR_0) && (VAR_11.ape_opp != VAR_0))
  goto skip_message;

 while (FUNC_4(VAR_7) & FUNC_0(1))
  FUNC_1();

 FUNC_7(VAR_5, (VAR_12 + VAR_8));
 FUNC_7(VAR_3, (VAR_12 + VAR_10));
 FUNC_7(((VAR_13 == VAR_2) ? VAR_1 : VAR_13),
  (VAR_12 + VAR_9));

 FUNC_8(FUNC_0(1), VAR_6);
 FUNC_6(&VAR_11.work);

 if ((VAR_11.ack.header != VAR_5) ||
  (VAR_11.ack.ape_opp != VAR_13))
  VAR_14 = -VAR_4;

skip_message:
 if ((!VAR_14 && (VAR_13 == VAR_2)) ||
  (VAR_14 && (VAR_11.ape_opp == VAR_2)))
  FUNC_5(1);
 if (!VAR_14)
  VAR_11.ape_opp = VAR_13;

 FUNC_3(&VAR_11.lock);

 return VAR_14;
}
