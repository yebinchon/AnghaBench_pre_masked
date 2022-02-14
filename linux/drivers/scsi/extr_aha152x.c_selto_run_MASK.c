
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {int phase; } ;
struct TYPE_4__ {TYPE_1__ SCp; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_9 ;
 int FUNC_2 (struct Scsi_Host*,int) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_3(struct Scsi_Host *VAR_11)
{
 FUNC_0(VAR_5, 0);
 FUNC_0(VAR_8, VAR_0);

 if (!VAR_1)
  return;

 VAR_1->SCp.phase &= ~VAR_10;

 if (VAR_1->SCp.phase & VAR_9)
  FUNC_2(VAR_11, VAR_2 << 16);
 else if (FUNC_1(VAR_7, VAR_6))
  FUNC_2(VAR_11, VAR_3 << 16);
 else

  FUNC_2(VAR_11, VAR_4 << 16);
}
