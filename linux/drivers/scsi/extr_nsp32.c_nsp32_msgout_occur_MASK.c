
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
typedef int nsp32_sgtable ;
struct TYPE_10__ {int msgout_len; int * msgoutbuf; TYPE_3__* cur_lunt; } ;
typedef TYPE_4__ nsp32_hw_data ;
struct TYPE_9__ {int sglun_paddr; int cur_entry; } ;
struct TYPE_8__ {TYPE_1__* host; } ;
struct TYPE_7__ {unsigned int io_port; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (unsigned int,int ,int ) ;
 int FUNC_6 (unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_7(struct scsi_cmnd *VAR_11)
{
 nsp32_hw_data *VAR_12 = (nsp32_hw_data *)VAR_11->device->host->hostdata;
 unsigned int VAR_13 = VAR_11->device->host->io_port;

 long VAR_14;
 int VAR_15;

 FUNC_1(VAR_8,
    "enter: msgout_len: 0x%x", VAR_12->msgout_len);





 if (VAR_12->msgout_len == 0) {
  FUNC_0(VAR_11);
 }






  VAR_14 = VAR_12->cur_lunt->sglun_paddr +
     (VAR_12->cur_lunt->cur_entry * sizeof(nsp32_sgtable));




 for (VAR_15 = 0; VAR_15 < VAR_12->msgout_len; VAR_15++) {
  FUNC_1(VAR_8,
     "%d : 0x%x", VAR_15, VAR_12->msgoutbuf[VAR_15]);




  FUNC_3(VAR_12, VAR_0);

  if (VAR_15 == (VAR_12->msgout_len - 1)) {







   FUNC_6(VAR_13, VAR_6,
      (VAR_5 |
       VAR_2 |
       VAR_1 |
       VAR_3 |
       VAR_4 ));
  }




  FUNC_5(VAR_13, VAR_10, VAR_12->msgoutbuf[VAR_15]);
  FUNC_4(VAR_12, VAR_7);

  FUNC_1(VAR_8, "bus: 0x%x\n",
     FUNC_2(VAR_13, VAR_9));
 };

 VAR_12->msgout_len = 0;

 FUNC_1(VAR_8, "exit");
}
