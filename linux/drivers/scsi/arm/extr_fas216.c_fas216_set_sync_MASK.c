
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int* cfg; } ;
struct TYPE_8__ {TYPE_1__* device; TYPE_2__ scsi; } ;
struct TYPE_6__ {unsigned int sof; unsigned int stp; int period; } ;
typedef TYPE_3__ FAS216_Info ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(FAS216_Info *VAR_4, int VAR_5)
{
 unsigned int VAR_6;

 FUNC_0(VAR_4, VAR_2, VAR_4->device[VAR_5].sof);
 FUNC_0(VAR_4, VAR_3, VAR_4->device[VAR_5].stp);

 VAR_6 = VAR_4->scsi.cfg[2];
 if (VAR_4->device[VAR_5].period >= (200 / 4))
  VAR_6 = VAR_6 & ~VAR_0;

 FUNC_0(VAR_4, VAR_1, VAR_6);
}
