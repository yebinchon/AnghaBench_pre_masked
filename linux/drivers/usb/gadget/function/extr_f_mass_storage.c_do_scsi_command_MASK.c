
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fsg_common {int* cmnd; int data_size_from_cmnd; int cmnd_size; scalar_t__ data_dir; int residue; int filesem; TYPE_1__* curlun; scalar_t__ short_packet_received; scalar_t__ phase_error; struct fsg_buffhd* next_buffhd_to_drain; struct fsg_buffhd* next_buffhd_to_fill; } ;
struct fsg_buffhd {int state; TYPE_2__* inreq; } ;
struct TYPE_4__ {int length; } ;
struct TYPE_3__ {int sense_data; int cdrom; } ;



 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;







 int FUNC_0 (struct fsg_common*,int,scalar_t__,int,int,char*) ;
 int FUNC_1 (struct fsg_common*,int,scalar_t__,int,int,char*) ;
 int VAR_8 ;
 int FUNC_2 (struct fsg_common*,struct fsg_buffhd*) ;
 int FUNC_3 (struct fsg_common*,struct fsg_buffhd*) ;
 int FUNC_4 (struct fsg_common*,struct fsg_buffhd*) ;
 int FUNC_5 (struct fsg_common*) ;
 int FUNC_6 (struct fsg_common*) ;
 int FUNC_7 (struct fsg_common*,struct fsg_buffhd*) ;
 int FUNC_8 (struct fsg_common*,struct fsg_buffhd*) ;
 int FUNC_9 (struct fsg_common*,struct fsg_buffhd*) ;
 int FUNC_10 (struct fsg_common*,struct fsg_buffhd*) ;
 int FUNC_11 (struct fsg_common*,struct fsg_buffhd*) ;
 int FUNC_12 (struct fsg_common*) ;
 int FUNC_13 (struct fsg_common*) ;
 int FUNC_14 (struct fsg_common*) ;
 int FUNC_15 (struct fsg_common*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct fsg_common*) ;
 void* FUNC_18 (int*) ;
 void* FUNC_19 (int*) ;
 int FUNC_20 (int ,int) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (struct fsg_common*,int,struct fsg_buffhd*) ;
 int FUNC_23 (char*,char*,int) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static int FUNC_25(struct fsg_common *VAR_9)
{
 struct fsg_buffhd *VAR_10;
 int VAR_11;
 int VAR_12 = -VAR_6;
 int VAR_13;
 static char VAR_14[16];

 FUNC_17(VAR_9);


 VAR_10 = VAR_9->next_buffhd_to_fill;
 VAR_9->next_buffhd_to_drain = VAR_10;
 VAR_11 = FUNC_22(VAR_9, 0, VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_9->phase_error = 0;
 VAR_9->short_packet_received = 0;

 FUNC_16(&VAR_9->filesem);
 switch (VAR_9->cmnd[0]) {

 case 150:
  VAR_9->data_size_from_cmnd = VAR_9->cmnd[4];
  VAR_12 = FUNC_0(VAR_9, 6, VAR_3,
          (1<<4), 0,
          "INQUIRY");
  if (VAR_12 == 0)
   VAR_12 = FUNC_2(VAR_9, VAR_10);
  break;

 case 149:
  VAR_9->data_size_from_cmnd = VAR_9->cmnd[4];
  VAR_12 = FUNC_0(VAR_9, 6, VAR_1,
          (1<<1) | (1<<4), 0,
          "MODE SELECT(6)");
  if (VAR_12 == 0)
   VAR_12 = FUNC_3(VAR_9, VAR_10);
  break;

 case 148:
  VAR_9->data_size_from_cmnd =
   FUNC_18(&VAR_9->cmnd[7]);
  VAR_12 = FUNC_0(VAR_9, 10, VAR_1,
          (1<<1) | (3<<7), 0,
          "MODE SELECT(10)");
  if (VAR_12 == 0)
   VAR_12 = FUNC_3(VAR_9, VAR_10);
  break;

 case 147:
  VAR_9->data_size_from_cmnd = VAR_9->cmnd[4];
  VAR_12 = FUNC_0(VAR_9, 6, VAR_3,
          (1<<1) | (1<<2) | (1<<4), 0,
          "MODE SENSE(6)");
  if (VAR_12 == 0)
   VAR_12 = FUNC_4(VAR_9, VAR_10);
  break;

 case 146:
  VAR_9->data_size_from_cmnd =
   FUNC_18(&VAR_9->cmnd[7]);
  VAR_12 = FUNC_0(VAR_9, 10, VAR_3,
          (1<<1) | (1<<2) | (3<<7), 0,
          "MODE SENSE(10)");
  if (VAR_12 == 0)
   VAR_12 = FUNC_4(VAR_9, VAR_10);
  break;

 case 152:
  VAR_9->data_size_from_cmnd = 0;
  VAR_12 = FUNC_0(VAR_9, 6, VAR_2,
          (1<<4), 0,
          "PREVENT-ALLOW MEDIUM REMOVAL");
  if (VAR_12 == 0)
   VAR_12 = FUNC_5(VAR_9);
  break;

 case 143:
  VAR_13 = VAR_9->cmnd[4];
  VAR_9->data_size_from_cmnd = (VAR_13 == 0) ? 256 : VAR_13;
  VAR_12 = FUNC_1(VAR_9, 6,
          VAR_3,
          (7<<1) | (1<<4), 1,
          "READ(6)");
  if (VAR_12 == 0)
   VAR_12 = FUNC_6(VAR_9);
  break;

 case 145:
  VAR_9->data_size_from_cmnd =
    FUNC_18(&VAR_9->cmnd[7]);
  VAR_12 = FUNC_1(VAR_9, 10,
          VAR_3,
          (1<<1) | (0xf<<2) | (3<<7), 1,
          "READ(10)");
  if (VAR_12 == 0)
   VAR_12 = FUNC_6(VAR_9);
  break;

 case 144:
  VAR_9->data_size_from_cmnd =
    FUNC_19(&VAR_9->cmnd[6]);
  VAR_12 = FUNC_1(VAR_9, 12,
          VAR_3,
          (1<<1) | (0xf<<2) | (0xf<<6), 1,
          "READ(12)");
  if (VAR_12 == 0)
   VAR_12 = FUNC_6(VAR_9);
  break;

 case 142:
  VAR_9->data_size_from_cmnd = 8;
  VAR_12 = FUNC_0(VAR_9, 10, VAR_3,
          (0xf<<2) | (1<<8), 1,
          "READ CAPACITY");
  if (VAR_12 == 0)
   VAR_12 = FUNC_7(VAR_9, VAR_10);
  break;

 case 140:
  if (!VAR_9->curlun || !VAR_9->curlun->cdrom)
   goto unknown_cmnd;
  VAR_9->data_size_from_cmnd =
   FUNC_18(&VAR_9->cmnd[7]);
  VAR_12 = FUNC_0(VAR_9, 10, VAR_3,
          (3<<7) | (0x1f<<1), 1,
          "READ HEADER");
  if (VAR_12 == 0)
   VAR_12 = FUNC_9(VAR_9, VAR_10);
  break;

 case 139:
  if (!VAR_9->curlun || !VAR_9->curlun->cdrom)
   goto unknown_cmnd;
  VAR_9->data_size_from_cmnd =
   FUNC_18(&VAR_9->cmnd[7]);
  VAR_12 = FUNC_0(VAR_9, 10, VAR_3,
          (7<<6) | (1<<1), 1,
          "READ TOC");
  if (VAR_12 == 0)
   VAR_12 = FUNC_10(VAR_9, VAR_10);
  break;

 case 141:
  VAR_9->data_size_from_cmnd =
   FUNC_18(&VAR_9->cmnd[7]);
  VAR_12 = FUNC_0(VAR_9, 10, VAR_3,
          (3<<7), 1,
          "READ FORMAT CAPACITIES");
  if (VAR_12 == 0)
   VAR_12 = FUNC_8(VAR_9, VAR_10);
  break;

 case 137:
  VAR_9->data_size_from_cmnd = VAR_9->cmnd[4];
  VAR_12 = FUNC_0(VAR_9, 6, VAR_3,
          (1<<4), 0,
          "REQUEST SENSE");
  if (VAR_12 == 0)
   VAR_12 = FUNC_11(VAR_9, VAR_10);
  break;

 case 134:
  VAR_9->data_size_from_cmnd = 0;
  VAR_12 = FUNC_0(VAR_9, 6, VAR_2,
          (1<<1) | (1<<4), 0,
          "START-STOP UNIT");
  if (VAR_12 == 0)
   VAR_12 = FUNC_12(VAR_9);
  break;

 case 133:
  VAR_9->data_size_from_cmnd = 0;
  VAR_12 = FUNC_0(VAR_9, 10, VAR_2,
          (0xf<<2) | (3<<7), 1,
          "SYNCHRONIZE CACHE");
  if (VAR_12 == 0)
   VAR_12 = FUNC_13(VAR_9);
  break;

 case 132:
  VAR_9->data_size_from_cmnd = 0;
  VAR_12 = FUNC_0(VAR_9, 6, VAR_2,
    0, 1,
    "TEST UNIT READY");
  break;





 case 131:
  VAR_9->data_size_from_cmnd = 0;
  VAR_12 = FUNC_0(VAR_9, 10, VAR_2,
          (1<<1) | (0xf<<2) | (3<<7), 1,
          "VERIFY");
  if (VAR_12 == 0)
   VAR_12 = FUNC_14(VAR_9);
  break;

 case 128:
  VAR_13 = VAR_9->cmnd[4];
  VAR_9->data_size_from_cmnd = (VAR_13 == 0) ? 256 : VAR_13;
  VAR_12 = FUNC_1(VAR_9, 6,
          VAR_1,
          (7<<1) | (1<<4), 1,
          "WRITE(6)");
  if (VAR_12 == 0)
   VAR_12 = FUNC_15(VAR_9);
  break;

 case 130:
  VAR_9->data_size_from_cmnd =
    FUNC_18(&VAR_9->cmnd[7]);
  VAR_12 = FUNC_1(VAR_9, 10,
          VAR_1,
          (1<<1) | (0xf<<2) | (3<<7), 1,
          "WRITE(10)");
  if (VAR_12 == 0)
   VAR_12 = FUNC_15(VAR_9);
  break;

 case 129:
  VAR_9->data_size_from_cmnd =
    FUNC_19(&VAR_9->cmnd[6]);
  VAR_12 = FUNC_1(VAR_9, 12,
          VAR_1,
          (1<<1) | (0xf<<2) | (0xf<<6), 1,
          "WRITE(12)");
  if (VAR_12 == 0)
   VAR_12 = FUNC_15(VAR_9);
  break;







 case 151:
 case 138:
 case 136:
 case 135:


 default:
unknown_cmnd:
  VAR_9->data_size_from_cmnd = 0;
  FUNC_23(VAR_14, "Unknown x%02x", VAR_9->cmnd[0]);
  VAR_12 = FUNC_0(VAR_9, VAR_9->cmnd_size,
          VAR_4, ~0, 0, VAR_14);
  if (VAR_12 == 0) {
   VAR_9->curlun->sense_data = VAR_7;
   VAR_12 = -VAR_6;
  }
  break;
 }
 FUNC_24(&VAR_9->filesem);

 if (VAR_12 == -VAR_5 || FUNC_21(VAR_8))
  return -VAR_5;


 if (VAR_12 == -VAR_6)
  VAR_12 = 0;
 if (VAR_12 >= 0 && VAR_9->data_dir == VAR_3) {
  VAR_12 = FUNC_20((u32)VAR_12, VAR_9->data_size_from_cmnd);
  VAR_10->inreq->length = VAR_12;
  VAR_10->state = VAR_0;
  VAR_9->residue -= VAR_12;
 }

 return 0;
}
