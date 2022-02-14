
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ transfer_type; int (* stop ) (int ,int *) ;} ;
struct TYPE_7__ {int SCp; } ;
struct TYPE_9__ {TYPE_2__ dma; TYPE_1__ scsi; int host; } ;
typedef TYPE_3__ FAS216_Info ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(FAS216_Info *VAR_4)
{
 FUNC_0(VAR_4);

 if (VAR_4->dma.transfer_type == VAR_2 ||
     VAR_4->dma.transfer_type == VAR_3)
  VAR_4->dma.stop(VAR_4->host, &VAR_4->scsi.SCp);

 VAR_4->dma.transfer_type = VAR_1;
 FUNC_1(VAR_4, VAR_0);
}
