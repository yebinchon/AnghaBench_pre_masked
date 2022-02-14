
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ccb {int dummy; } ;
struct aha1542_hostdata {scalar_t__ mb_handle; TYPE_1__* mb; scalar_t__ ccb_handle; } ;
struct Scsi_Host {int io_port; } ;
struct TYPE_2__ {int* ccbptr; scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int*,scalar_t__) ;
 int FUNC_3 (int ,struct Scsi_Host*,char*) ;
 struct aha1542_hostdata* FUNC_4 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_5(struct Scsi_Host *VAR_3)
{
 struct aha1542_hostdata *VAR_4 = FUNC_4(VAR_3);
 u8 VAR_5[5] = { VAR_1, VAR_0, 0, 0, 0};
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_4->mb[VAR_6].status = 0;
  FUNC_2(VAR_4->mb[VAR_6].ccbptr,
    VAR_4->ccb_handle + VAR_6 * sizeof(struct ccb));
  VAR_4->mb[VAR_0 + VAR_6].status = 0;
 };
 FUNC_0(VAR_3->io_port);
 FUNC_2(VAR_5 + 2, VAR_4->mb_handle);
 if (FUNC_1(VAR_3->io_port, VAR_5, 5))
  FUNC_3(VAR_2, VAR_3, "failed setting up mailboxes\n");
 FUNC_0(VAR_3->io_port);
}
