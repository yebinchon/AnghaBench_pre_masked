
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ fasdmatype_t ;
struct TYPE_10__ {unsigned long phase; unsigned long this_residual; } ;
struct TYPE_11__ {scalar_t__ phase; TYPE_1__ SCp; } ;
struct TYPE_12__ {scalar_t__ transfer_type; } ;
struct TYPE_13__ {TYPE_2__ scsi; TYPE_3__ dma; } ;
typedef TYPE_4__ FAS216_Info ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ,char*,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,unsigned long) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_4(FAS216_Info *VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10;
 fasdmatype_t VAR_11 = VAR_7->dma.transfer_type;

 VAR_7->dma.transfer_type = VAR_4;




 if (VAR_11 == VAR_5 || VAR_11 == VAR_4)
  return;

 if (VAR_11 == VAR_6)
  VAR_8 = VAR_7->scsi.SCp.phase;
 else
  VAR_8 = VAR_7->scsi.SCp.this_residual;

 VAR_9 = FUNC_0(VAR_7);

 VAR_10 = FUNC_2(VAR_7, VAR_3) & VAR_0;

 FUNC_1(VAR_7, VAR_1, "cleaning up from previous "
     "transfer: length 0x%06x, residual 0x%x, fifo %d",
     VAR_8, VAR_9, VAR_10);







 if (VAR_7->scsi.phase == VAR_2)
  VAR_9 += VAR_10;

 FUNC_3(VAR_7, VAR_8 - VAR_9);
}
