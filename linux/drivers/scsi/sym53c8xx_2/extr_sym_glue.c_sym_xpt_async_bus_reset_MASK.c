
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int settle_time_valid; scalar_t__ settle_time; } ;
struct sym_hcb {TYPE_1__ s; } ;
struct TYPE_4__ {int settle_delay; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (struct sym_hcb*) ;
 int VAR_3 ;

void FUNC_3(struct sym_hcb *VAR_4)
{
 FUNC_1("%s: SCSI BUS has been reset.\n", FUNC_2(VAR_4));
 VAR_4->s.settle_time = VAR_1 + VAR_2.settle_delay * VAR_0;
 VAR_4->s.settle_time_valid = 1;
 if (VAR_3 >= 2)
  FUNC_0("%s: command processing suspended for %d seconds\n",
       FUNC_2(VAR_4), VAR_2.settle_delay);
}
