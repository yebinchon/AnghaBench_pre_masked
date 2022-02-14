
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct basic_ring {scalar_t__ lastWrite; scalar_t__ ringBase; } ;
struct typhoon {int command_lock; scalar_t__ ioaddr; struct basic_ring cmdRing; } ;
struct cmd_desc {int dummy; } ;


 int FUNC_0 (struct cmd_desc*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*,int) ;
 int FUNC_5 () ;

__attribute__((used)) static inline void
FUNC_6(struct typhoon *VAR_2)
{
 struct basic_ring *VAR_3 = &VAR_2->cmdRing;
 struct cmd_desc *VAR_4;





 if(FUNC_2(&VAR_2->command_lock)) {
  VAR_4 = (struct cmd_desc *)(VAR_3->ringBase + VAR_3->lastWrite);
  FUNC_4(&VAR_3->lastWrite, 1);

  FUNC_0(VAR_4, VAR_0);
  FUNC_5();
  FUNC_1(VAR_3->lastWrite, VAR_2->ioaddr + VAR_1);
  FUNC_3(&VAR_2->command_lock);
 }
}
