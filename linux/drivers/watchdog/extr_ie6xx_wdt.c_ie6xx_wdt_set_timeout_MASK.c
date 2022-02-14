
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u64 ;
typedef int u32 ;
struct watchdog_device {unsigned int timeout; } ;
struct TYPE_2__ {int unlock_sequence; scalar_t__ sch_wdtba; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct watchdog_device *VAR_8, unsigned int VAR_9)
{
 u32 VAR_10;
 u64 VAR_11;
 u8 VAR_12;


 VAR_11 = 33000000;

 VAR_10 = (VAR_9 * VAR_11) >> 15;




 VAR_10 -= 1;

 FUNC_3(&VAR_6.unlock_sequence);


 VAR_12 = VAR_7 & 0x38;
 FUNC_1(VAR_12, VAR_6.sch_wdtba + VAR_3);

 FUNC_0();
 FUNC_2(0, VAR_6.sch_wdtba + VAR_0);

 FUNC_0();
 FUNC_2(VAR_10, VAR_6.sch_wdtba + VAR_1);

 FUNC_0();
 FUNC_1(VAR_4 | VAR_5, VAR_6.sch_wdtba + VAR_2);

 FUNC_4(&VAR_6.unlock_sequence);

 VAR_8->timeout = VAR_9;
 return 0;
}
