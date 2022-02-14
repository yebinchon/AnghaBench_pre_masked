
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_18__ {scalar_t__ ptr; } ;
struct scsi_cmnd {int* cmnd; int* sense_buffer; int result; TYPE_4__ SCp; TYPE_1__* device; } ;
struct gdth_cmndinfo {scalar_t__ priority; int phase; int OpCode; int wait_for_completion; scalar_t__ internal_command; } ;
struct TYPE_19__ {scalar_t__ cmd_cnt; scalar_t__ cmd_offs_dpmem; scalar_t__ virt_bus; int scan_mode; scalar_t__ bus_cnt; int tid_cnt; int hanum; int smp_lock; struct scsi_cmnd* req_first; TYPE_3__* hdr; TYPE_2__* raw; } ;
typedef TYPE_5__ gdth_ha_str ;
struct TYPE_17__ {int cluster_type; int devtype; scalar_t__ media_changed; int present; scalar_t__ lock; } ;
struct TYPE_16__ {scalar_t__* io_cnt; scalar_t__ lock; } ;
struct TYPE_15__ {scalar_t__ channel; scalar_t__ id; scalar_t__ lun; } ;



 size_t FUNC_0 (TYPE_5__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

 scalar_t__ VAR_12 ;

 int VAR_13 ;
 int VAR_14 ;







 int VAR_15 ;



 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_16 ;
 void* VAR_17 ;




 struct gdth_cmndinfo* FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_5__*,struct scsi_cmnd*,scalar_t__) ;
 int FUNC_6 (TYPE_5__*,struct scsi_cmnd*,size_t) ;
 int FUNC_7 (TYPE_5__*,struct scsi_cmnd*) ;
 scalar_t__ VAR_18 ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (struct scsi_cmnd*) ;
 int FUNC_10 (TYPE_5__*,struct scsi_cmnd*) ;
 scalar_t__ FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*,int,int ) ;
 int FUNC_13 (char*,int ,int) ;
 int FUNC_14 (char*,int ,int) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_17(gdth_ha_str *VAR_19)
{
    register struct scsi_cmnd *VAR_20;
    register struct scsi_cmnd *VAR_21;
    u8 VAR_22, VAR_23, VAR_24, VAR_25;
    u8 VAR_26, VAR_27;
    unsigned long VAR_28 = 0;
    int VAR_29;

    FUNC_1(("gdth_next() hanum %d\n", VAR_19->hanum));
    if (!VAR_18)
        FUNC_15(&VAR_19->smp_lock, VAR_28);

    VAR_19->cmd_cnt = VAR_19->cmd_offs_dpmem = 0;
    VAR_26 = VAR_25 = VAR_16;
    VAR_27 = VAR_18 ? VAR_7:VAR_16;
    VAR_29 = 0;

    for (VAR_21 = VAR_20 = VAR_19->req_first; VAR_21; VAR_21 = (struct scsi_cmnd *)VAR_21->SCp.ptr) {
        struct gdth_cmndinfo *VAR_30 = FUNC_3(VAR_21);
        if (VAR_21 != VAR_20 && VAR_21 != (struct scsi_cmnd *)VAR_20->SCp.ptr)
            VAR_20 = (struct scsi_cmnd *)VAR_20->SCp.ptr;
        if (!VAR_30->internal_command) {
            VAR_22 = VAR_21->device->channel;
            VAR_23 = VAR_21->device->id;
            VAR_24 = VAR_21->device->lun;
            if (VAR_30->priority >= VAR_3) {
                if ((VAR_22 != VAR_19->virt_bus && VAR_19->raw[FUNC_0(VAR_19,VAR_22)].lock) ||
                    (VAR_22 == VAR_19->virt_bus && VAR_23 < VAR_12 && VAR_19->hdr[VAR_23].lock))
                    continue;
            }
        } else
            VAR_22 = VAR_23 = VAR_24 = 0;

        if (VAR_25) {
            if (FUNC_11(VAR_19)) {
                FUNC_1(("gdth_next() controller %d busy !\n", VAR_19->hanum));
                if (!VAR_18) {
                    FUNC_16(&VAR_19->smp_lock, VAR_28);
                    return;
                }
                while (FUNC_11(VAR_19))
                    FUNC_4(1);
            }
            VAR_25 = VAR_7;
        }

        if (!VAR_30->internal_command) {
        if (VAR_30->phase == -1) {
            VAR_30->phase = VAR_0;
            if (VAR_21->cmnd[0] == 132) {
                FUNC_2(("TEST_UNIT_READY Bus %d Id %d LUN %d\n",
                        VAR_22, VAR_23, VAR_24));

                if ((VAR_19->scan_mode & 0x0f) == 0) {
                    if (VAR_22 == 0 && VAR_23 == 0 && VAR_24 == 0) {
                        VAR_19->scan_mode |= 1;
                        FUNC_2(("Scan mode: 0x%x\n", VAR_19->scan_mode));
                    }
                } else if ((VAR_19->scan_mode & 0x0f) == 1) {
                    if (VAR_22 == 0 && ((VAR_23 == 0 && VAR_24 == 1) ||
                         (VAR_23 == 1 && VAR_24 == 0))) {
                        VAR_30->OpCode = VAR_11;
                        VAR_30->phase = ((VAR_19->scan_mode & 0x10 ? 1:0) << 8)
                            | VAR_15;
                        VAR_19->scan_mode = 0x12;
                        FUNC_2(("Scan mode: 0x%x (SCAN_START)\n",
                                VAR_19->scan_mode));
                    } else {
                        VAR_19->scan_mode &= 0x10;
                        FUNC_2(("Scan mode: 0x%x\n", VAR_19->scan_mode));
                    }
                } else if (VAR_19->scan_mode == 0x12) {
                    if (VAR_22 == VAR_19->bus_cnt && VAR_23 == VAR_19->tid_cnt-1) {
                        VAR_30->phase = VAR_15;
                        VAR_30->OpCode = VAR_10;
                        VAR_19->scan_mode &= 0x10;
                        FUNC_2(("Scan mode: 0x%x (SCAN_END)\n",
                                VAR_19->scan_mode));
                    }
                }
            }
            if (VAR_22 == VAR_19->virt_bus && VAR_21->cmnd[0] != 143 &&
                VAR_21->cmnd[0] != 138 && VAR_21->cmnd[0] != 142 &&
                (VAR_19->hdr[VAR_23].cluster_type & VAR_2)) {

                VAR_30->OpCode = VAR_9;
            }
        }
        }

        if (VAR_30->OpCode != -1) {
            if ((VAR_30->phase & 0xff) == VAR_0) {
                if (!(VAR_29=FUNC_5(VAR_19, VAR_21, VAR_23)))
                    VAR_26 = VAR_7;
                VAR_27 = VAR_7;
            } else if ((VAR_30->phase & 0xff) == VAR_15) {
                if (!(VAR_29=FUNC_6(VAR_19, VAR_21, FUNC_0(VAR_19, VAR_22))))
                    VAR_26 = VAR_7;
                VAR_27 = VAR_7;
            } else {
                FUNC_13((char*)VAR_21->sense_buffer,0,16);
                VAR_21->sense_buffer[0] = 0x70;
                VAR_21->sense_buffer[2] = VAR_13;
                VAR_21->result = (VAR_6 << 16) | (VAR_1 << 1);
                if (!VAR_30->wait_for_completion)
                    VAR_30->wait_for_completion++;
                else
                    FUNC_9(VAR_21);
            }
        } else if (FUNC_3(VAR_21)->internal_command) {
            if (!(VAR_29=FUNC_10(VAR_19, VAR_21)))
                VAR_26 = VAR_7;
            VAR_27 = VAR_7;
        } else if (VAR_22 != VAR_19->virt_bus) {
            if (VAR_19->raw[FUNC_0(VAR_19,VAR_22)].io_cnt[VAR_23] >= VAR_8 ||
                !(VAR_29=FUNC_6(VAR_19, VAR_21, FUNC_0(VAR_19, VAR_22))))
                VAR_26 = VAR_7;
            else
                VAR_19->raw[FUNC_0(VAR_19,VAR_22)].io_cnt[VAR_23]++;
        } else if (VAR_23 >= VAR_12 || !VAR_19->hdr[VAR_23].present || VAR_24 != 0) {
            FUNC_2(("Command 0x%x to bus %d id %d lun %d -> IGNORE\n",
                    VAR_21->cmnd[0], VAR_22, VAR_23, VAR_24));
            VAR_21->result = VAR_5 << 16;
            if (!VAR_30->wait_for_completion)
                VAR_30->wait_for_completion++;
            else
                FUNC_9(VAR_21);
        } else {
            switch (VAR_21->cmnd[0]) {
              case 132:
              case 143:
              case 136:
              case 138:
              case 131:
              case 133:
              case 142:
              case 134:
                FUNC_1(("cache cmd %x/%x/%x/%x/%x/%x\n",VAR_21->cmnd[0],
                       VAR_21->cmnd[1],VAR_21->cmnd[2],VAR_21->cmnd[3],
                       VAR_21->cmnd[4],VAR_21->cmnd[5]));
                if (VAR_19->hdr[VAR_23].media_changed && VAR_21->cmnd[0] != 143) {

                    FUNC_2(("cmd 0x%x target %d: UNIT_ATTENTION\n",
                             VAR_21->cmnd[0], VAR_23));
                    VAR_19->hdr[VAR_23].media_changed = VAR_7;
                    FUNC_13((char*)VAR_21->sense_buffer,0,16);
                    VAR_21->sense_buffer[0] = 0x70;
                    VAR_21->sense_buffer[2] = VAR_17;
                    VAR_21->result = (VAR_6 << 16) | (VAR_1 << 1);
                    if (!VAR_30->wait_for_completion)
                        VAR_30->wait_for_completion++;
                    else
                        FUNC_9(VAR_21);
                } else if (FUNC_7(VAR_19, VAR_21))
                    FUNC_9(VAR_21);
                break;

              case 144:
                FUNC_1(("cache cmd %x/%x/%x/%x/%x/%x\n",VAR_21->cmnd[0],
                       VAR_21->cmnd[1],VAR_21->cmnd[2],VAR_21->cmnd[3],
                       VAR_21->cmnd[4],VAR_21->cmnd[5]));
                if ( (VAR_21->cmnd[4]&1) && !(VAR_19->hdr[VAR_23].devtype&1) ) {
                    FUNC_1(("Prevent r. nonremov. drive->do nothing\n"));
                    VAR_21->result = VAR_6 << 16;
                    VAR_21->sense_buffer[0] = 0;
                    if (!VAR_30->wait_for_completion)
                        VAR_30->wait_for_completion++;
                    else
                        FUNC_9(VAR_21);
                } else {
                    VAR_21->cmnd[3] = (VAR_19->hdr[VAR_23].devtype&1) ? 1:0;
                    FUNC_1(("Prevent/allow r. %d rem. drive %d\n",
                           VAR_21->cmnd[4],VAR_21->cmnd[3]));
                    if (!(VAR_29=FUNC_5(VAR_19, VAR_21, VAR_23)))
                        VAR_26 = VAR_7;
                }
                break;

              case 135:
              case 137:
                FUNC_2(("cache cmd %s\n",VAR_21->cmnd[0] == 135 ?
                        "RESERVE" : "RELEASE"));
                if (!(VAR_29=FUNC_5(VAR_19, VAR_21, VAR_23)))
                    VAR_26 = VAR_7;
                break;

              case 139:
              case 128:
              case 141:
              case 130:
              case 140:
              case 129:
                if (VAR_19->hdr[VAR_23].media_changed) {

                    FUNC_2(("cmd 0x%x target %d: UNIT_ATTENTION\n",
                             VAR_21->cmnd[0], VAR_23));
                    VAR_19->hdr[VAR_23].media_changed = VAR_7;
                    FUNC_13((char*)VAR_21->sense_buffer,0,16);
                    VAR_21->sense_buffer[0] = 0x70;
                    VAR_21->sense_buffer[2] = VAR_17;
                    VAR_21->result = (VAR_6 << 16) | (VAR_1 << 1);
                    if (!VAR_30->wait_for_completion)
                        VAR_30->wait_for_completion++;
                    else
                        FUNC_9(VAR_21);
                } else if (!(VAR_29=FUNC_5(VAR_19, VAR_21, VAR_23)))
                    VAR_26 = VAR_7;
                break;

              default:
                FUNC_2(("cache cmd %x/%x/%x/%x/%x/%x unknown\n",VAR_21->cmnd[0],
                        VAR_21->cmnd[1],VAR_21->cmnd[2],VAR_21->cmnd[3],
                        VAR_21->cmnd[4],VAR_21->cmnd[5]));
                FUNC_14("GDT-HA %d: Unknown SCSI command 0x%x to cache service !\n",
                       VAR_19->hanum, VAR_21->cmnd[0]);
                VAR_21->result = VAR_4 << 16;
                if (!VAR_30->wait_for_completion)
                    VAR_30->wait_for_completion++;
                else
                    FUNC_9(VAR_21);
                break;
            }
        }

        if (!VAR_26)
            break;
        if (VAR_21 == VAR_19->req_first)
            VAR_19->req_first = VAR_20 = (struct scsi_cmnd *)VAR_21->SCp.ptr;
        else
            VAR_20->SCp.ptr = VAR_21->SCp.ptr;
        if (!VAR_27)
            break;
    }

    if (VAR_19->cmd_cnt > 0) {
        FUNC_8(VAR_19);
    }

    if (!VAR_18)
        FUNC_16(&VAR_19->smp_lock, VAR_28);

    if (VAR_18 && VAR_19->cmd_cnt > 0) {
        if (!FUNC_12(VAR_19, VAR_29, VAR_14))
            FUNC_14("GDT-HA %d: Command %d timed out !\n",
                   VAR_19->hanum, VAR_29);
    }
}
