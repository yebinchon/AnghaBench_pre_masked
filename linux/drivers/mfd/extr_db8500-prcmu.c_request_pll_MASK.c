
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ header; } ;
struct TYPE_4__ {int lock; TYPE_1__ ack; int work; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 () ;
 TYPE_2__ VAR_13 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(u8 VAR_15, bool VAR_16)
{
 int VAR_17 = 0;

 if (VAR_15 == VAR_7)
  VAR_15 = (VAR_16 ? VAR_4 : VAR_3);
 else if (VAR_15 == VAR_8)
  VAR_15 = (VAR_16 ? VAR_6 : VAR_5);
 else
  return -VAR_0;

 FUNC_2(&VAR_13.lock);

 while (FUNC_4(VAR_10) & FUNC_0(1))
  FUNC_1();

 FUNC_6(VAR_2, (VAR_14 + VAR_11));
 FUNC_6(VAR_15, (VAR_14 + VAR_12));

 FUNC_7(FUNC_0(1), VAR_9);
 FUNC_5(&VAR_13.work);

 if (VAR_13.ack.header != VAR_2)
  VAR_17 = -VAR_1;

 FUNC_3(&VAR_13.lock);

 return VAR_17;
}
