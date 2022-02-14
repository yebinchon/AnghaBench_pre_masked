
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef size_t u8 ;
typedef int u64 ;
struct scsi_cmnd {int* cmnd; int result; scalar_t__* sense_buffer; TYPE_1__* device; } ;
struct gdth_cmndinfo {int wait_for_completion; } ;
struct TYPE_18__ {int errorcode; int segno; int add_length; int info; int key; } ;
typedef TYPE_5__ gdth_sense_data ;
struct TYPE_19__ {int last_block_no; void* block_length; } ;
typedef TYPE_6__ gdth_rdcap_data ;
struct TYPE_20__ {void* block_length; int last_block_no; } ;
typedef TYPE_7__ gdth_rdcap16_data ;
struct TYPE_16__ {int* block_length; } ;
struct TYPE_15__ {int data_length; int dev_par; int bd_length; } ;
struct TYPE_21__ {TYPE_3__ bd; TYPE_2__ hd; } ;
typedef TYPE_8__ gdth_modep_data ;
struct TYPE_22__ {int modif_rmb; int version; int resp_aenc; int add_length; int revision; int product; int vendor; int type_qual; } ;
typedef TYPE_9__ gdth_inq_data ;
struct TYPE_13__ {char* oem_name; int cache_feat; TYPE_4__* hdr; } ;
typedef TYPE_10__ gdth_ha_str ;
struct TYPE_17__ {int devtype; int cluster_type; int size; } ;
struct TYPE_14__ {size_t id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int VAR_8 ;

 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 struct gdth_cmndinfo* FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (TYPE_10__*,struct scsi_cmnd*,char*,int) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int ,int,char*,size_t) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int FUNC_9(gdth_ha_str *VAR_9, struct scsi_cmnd *VAR_10)
{
    u8 VAR_11;
    gdth_inq_data VAR_12;
    gdth_rdcap_data VAR_13;
    gdth_sense_data VAR_14;
    gdth_modep_data VAR_15;
    struct gdth_cmndinfo *VAR_16 = FUNC_4(VAR_10);

    VAR_11 = VAR_10->device->id;
    FUNC_0(("gdth_internal_cache_cmd() cmd 0x%x hdrive %d\n",
           VAR_10->cmnd[0],VAR_11));

    VAR_10->result = VAR_2 << 16;
    VAR_10->sense_buffer[0] = 0;

    switch (VAR_10->cmnd[0]) {
      case 129:
      case 128:
      case 130:
        FUNC_1(("Test/Verify/Start hdrive %d\n",VAR_11));
        break;

      case 135:
        FUNC_1(("Inquiry hdrive %d devtype %d\n",
                VAR_11,VAR_9->hdr[VAR_11].devtype));
        VAR_12.type_qual = (VAR_9->hdr[VAR_11].devtype&4) ? VAR_8:VAR_7;


        VAR_12.modif_rmb = 0x00;
        if ((VAR_9->hdr[VAR_11].devtype & 1) ||
            (VAR_9->hdr[VAR_11].cluster_type & VAR_0))
            VAR_12.modif_rmb = 0x80;
        VAR_12.version = 2;
        VAR_12.resp_aenc = 2;
        VAR_12.add_length= 32;
        FUNC_8(VAR_12.vendor,VAR_9->oem_name);
        FUNC_7(VAR_12.product, sizeof(VAR_12.product), "Host Drive  #%02d",VAR_11);
        FUNC_8(VAR_12.revision,"   ");
        FUNC_5(VAR_9, VAR_10, (char*)&VAR_12, sizeof(gdth_inq_data));
        break;

      case 132:
        FUNC_1(("Request sense hdrive %d\n",VAR_11));
        VAR_14.errorcode = 0x70;
        VAR_14.segno = 0x00;
        VAR_14.key = VAR_4;
        VAR_14.info = 0;
        VAR_14.add_length= 0;
        FUNC_5(VAR_9, VAR_10, (char*)&VAR_14, sizeof(gdth_sense_data));
        break;

      case 134:
        FUNC_1(("Mode sense hdrive %d\n",VAR_11));
        FUNC_6((char*)&VAR_15,0,sizeof(gdth_modep_data));
        VAR_15.hd.data_length = sizeof(gdth_modep_data);
        VAR_15.hd.dev_par = (VAR_9->hdr[VAR_11].devtype&2) ? 0x80:0;
        VAR_15.hd.bd_length = sizeof(VAR_15.bd);
        VAR_15.bd.block_length[0] = (VAR_6 & 0x00ff0000) >> 16;
        VAR_15.bd.block_length[1] = (VAR_6 & 0x0000ff00) >> 8;
        VAR_15.bd.block_length[2] = (VAR_6 & 0x000000ff);
        FUNC_5(VAR_9, VAR_10, (char*)&VAR_15, sizeof(gdth_modep_data));
        break;

      case 133:
        FUNC_1(("Read capacity hdrive %d\n",VAR_11));
        if (VAR_9->hdr[VAR_11].size > (u64)0xffffffff)
            VAR_13.last_block_no = 0xffffffff;
        else
            VAR_13.last_block_no = FUNC_2(VAR_9->hdr[VAR_11].size-1);
        VAR_13.block_length = FUNC_2(VAR_6);
        FUNC_5(VAR_9, VAR_10, (char*)&VAR_13, sizeof(gdth_rdcap_data));
        break;

      case 131:
        if ((VAR_10->cmnd[1] & 0x1f) == VAR_5 &&
            (VAR_9->cache_feat & VAR_3)) {
            gdth_rdcap16_data VAR_17;

            FUNC_1(("Read capacity (16) hdrive %d\n",VAR_11));
            VAR_17 = FUNC_3(VAR_9->hdr[VAR_11].size-1);
            VAR_17 = FUNC_2(VAR_6);
            FUNC_5(VAR_9, VAR_10, (char*)&VAR_17,
                                                 sizeof(gdth_rdcap16_data));
        } else {
            VAR_10->result = VAR_1 << 16;
        }
        break;

      default:
        FUNC_1(("Internal cache cmd 0x%x unknown\n",VAR_10->cmnd[0]));
        break;
    }

    if (!VAR_16->wait_for_completion)
        VAR_16->wait_for_completion++;
    else
        return 1;

    return 0;
}
