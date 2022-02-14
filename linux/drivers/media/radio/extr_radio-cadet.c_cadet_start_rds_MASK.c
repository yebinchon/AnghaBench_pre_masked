
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct cadet {int rdsstat; TYPE_1__ readtimer; int io; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct cadet *VAR_2)
{
 VAR_2->rdsstat = 1;
 FUNC_2(0x80, VAR_2->io);
 FUNC_3(&VAR_2->readtimer, VAR_0, 0);
 VAR_2->readtimer.expires = VAR_1 + FUNC_1(50);
 FUNC_0(&VAR_2->readtimer);
}
