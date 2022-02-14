
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef void* u32 ;
typedef scalar_t__ u16 ;
struct TYPE_26__ {int cache_feat; int raw_feat; int cmd_len; scalar_t__ status; scalar_t__ cmd_cnt; scalar_t__ cmd_offs_dpmem; int scratch_phys; TYPE_10__* pccb; } ;
typedef TYPE_9__ gdth_ha_str ;
struct TYPE_23__ {int * data; } ;
struct TYPE_24__ {TYPE_6__ su; } ;
struct TYPE_22__ {scalar_t__ lun; scalar_t__ target; scalar_t__ bus; void* direction; } ;
struct TYPE_21__ {scalar_t__ lun; scalar_t__ target; scalar_t__ bus; void* direction; } ;
struct TYPE_20__ {void* BlockNo; scalar_t__ DeviceNo; } ;
struct TYPE_19__ {int BlockNo; scalar_t__ DeviceNo; } ;
struct TYPE_18__ {int p_param; scalar_t__ param_size; void* channel; void* subfunc; } ;
struct TYPE_25__ {TYPE_7__ screen; TYPE_5__ raw; TYPE_4__ raw64; TYPE_3__ cache; TYPE_2__ cache64; TYPE_1__ ioctl; } ;
struct TYPE_17__ {TYPE_8__ u; int BoardNode; scalar_t__ OpCode; int RequestBuffer; scalar_t__ Service; } ;
typedef TYPE_10__ gdth_cmd_str ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_9__*) ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (TYPE_9__*,int,int ) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(gdth_ha_str *VAR_12, u8 VAR_13, u16 VAR_14,
                                            u32 VAR_15, u64 VAR_16, u64 VAR_17)
{
    register gdth_cmd_str *VAR_18;
    int VAR_19,VAR_20;

    FUNC_1(("gdth_internal_cmd() service %d opcode %d\n",VAR_13,VAR_14));

    VAR_18 = VAR_12->pccb;
    FUNC_8((char*)VAR_18,0,sizeof(gdth_cmd_str));


    for (VAR_19 = VAR_4;;) {
        VAR_18->Service = VAR_13;
        VAR_18->RequestBuffer = VAR_6;
        if (!(VAR_20=FUNC_4(VAR_12))) {
            FUNC_0(("GDT: No free command index found\n"));
            return 0;
        }
        FUNC_6(VAR_12);
        VAR_18->OpCode = VAR_14;
        VAR_18->BoardNode = VAR_7;
        if (VAR_13 == VAR_0) {
            if (VAR_14 == VAR_2) {
                VAR_18->u.ioctl.subfunc = VAR_15;
                VAR_18->u.ioctl.channel = (u32)VAR_16;
                VAR_18->u.ioctl.param_size = (u16)VAR_17;
                VAR_18->u.ioctl.p_param = VAR_12->scratch_phys;
            } else {
                if (VAR_12->cache_feat & VAR_1) {
                    VAR_18->u.cache64.DeviceNo = (u16)VAR_15;
                    VAR_18->u.cache64.BlockNo = VAR_16;
                } else {
                    VAR_18->u.cache.DeviceNo = (u16)VAR_15;
                    VAR_18->u.cache.BlockNo = (u32)VAR_16;
                }
            }
        } else if (VAR_13 == VAR_9) {
            if (VAR_12->raw_feat & VAR_1) {
                VAR_18->u.raw64.direction = VAR_15;
                VAR_18->u.raw64.bus = (u8)VAR_16;
                VAR_18->u.raw64.target = (u8)VAR_17;
                VAR_18->u.raw64.lun = (u8)(VAR_17 >> 8);
            } else {
                VAR_18->u.raw.direction = VAR_15;
                VAR_18->u.raw.bus = (u8)VAR_16;
                VAR_18->u.raw.target = (u8)VAR_17;
                VAR_18->u.raw.lun = (u8)(VAR_17 >> 8);
            }
        } else if (VAR_13 == VAR_8) {
            if (VAR_14 == VAR_3) {
                *(u32 *)&VAR_18->u.screen.su.data[0] = VAR_15;
                *(u32 *)&VAR_18->u.screen.su.data[4] = (u32)VAR_16;
                *(u32 *)&VAR_18->u.screen.su.data[8] = (u32)VAR_17;
            }
        }
        VAR_12->cmd_len = sizeof(gdth_cmd_str);
        VAR_12->cmd_offs_dpmem = 0;
        VAR_12->cmd_cnt = 0;
        FUNC_2(VAR_12);
        FUNC_5(VAR_12);
        FUNC_3(20);
        if (!FUNC_7(VAR_12, VAR_20, VAR_5)) {
            FUNC_9("GDT: Initialization error (timeout service %d)\n",VAR_13);
            return 0;
        }
        if (VAR_12->status != VAR_10 || --VAR_19 == 0)
            break;
        FUNC_3(1);
    }

    return (VAR_12->status != VAR_11 ? 0:1);
}
