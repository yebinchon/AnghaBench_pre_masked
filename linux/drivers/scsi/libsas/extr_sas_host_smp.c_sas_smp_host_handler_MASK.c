
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sas_ha_struct {int num_phys; } ;
struct TYPE_6__ {int payload_len; int sg_cnt; int sg_list; } ;
struct TYPE_5__ {int payload_len; int sg_cnt; int sg_list; } ;
struct bsg_job {TYPE_3__ reply_payload; TYPE_2__ request_payload; } ;
struct Scsi_Host {TYPE_1__* hostt; } ;
struct TYPE_4__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

 int FUNC_1 (struct bsg_job*,int,unsigned int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int ) ;
 int FUNC_4 (int,unsigned int) ;
 int FUNC_5 (int*,char*,int ) ;
 int FUNC_6 (struct sas_ha_struct*,int*,int) ;
 int FUNC_7 (struct sas_ha_struct*,int*,int,int,int,int*) ;
 int FUNC_8 (struct sas_ha_struct*,int,int,int,int,int*) ;
 int FUNC_9 (struct sas_ha_struct*,int*,int) ;
 int FUNC_10 (int ,int ,int*,int) ;
 int FUNC_11 (int ,int ,int*,int) ;

void FUNC_12(struct bsg_job *VAR_10, struct Scsi_Host *VAR_11)
{
 struct sas_ha_struct *VAR_12 = FUNC_0(VAR_11);
 u8 *VAR_13, *VAR_14;
 unsigned int VAR_15 = 0;
 int VAR_16 = -VAR_0;


 if (VAR_10->request_payload.payload_len < 8 ||
     VAR_10->reply_payload.payload_len < 8)
  goto out;

 VAR_16 = -VAR_1;
 VAR_13 = FUNC_3(VAR_10->request_payload.payload_len, VAR_2);
 if (!VAR_13)
  goto out;
 FUNC_11(VAR_10->request_payload.sg_list,
     VAR_10->request_payload.sg_cnt, VAR_13,
     VAR_10->request_payload.payload_len);



 VAR_14 = FUNC_3(FUNC_4(VAR_10->reply_payload.payload_len, 128U),
   VAR_2);
 if (!VAR_14)
  goto out_free_req;

 VAR_16 = -VAR_0;
 if (VAR_13[0] != VAR_5)
  goto out_free_resp;


 VAR_14[0] = VAR_6;
 VAR_14[1] = VAR_13[1];
 VAR_14[2] = VAR_8;

 switch (VAR_13[1]) {
 case 133:
  VAR_14[2] = VAR_7;
  VAR_14[9] = VAR_12->num_phys;
  VAR_15 = 32;
  break;

 case 132:
  VAR_14[2] = VAR_7;
  FUNC_5(VAR_14 + 12, VAR_11->hostt->name,
         VAR_4);
  FUNC_5(VAR_14 + 20, "libsas virt phy",
         VAR_3);
  VAR_15 = 64;
  break;

 case 134:

  break;

 case 137:
  if (VAR_10->request_payload.payload_len < 16)
   goto out_free_resp;
  FUNC_6(VAR_12, VAR_14, VAR_13[9]);
  VAR_15 = 56;
  break;

 case 131:


  break;

 case 130:
  if (VAR_10->request_payload.payload_len < 16)
   goto out_free_resp;
  FUNC_9(VAR_12, VAR_14, VAR_13[9]);
  VAR_15 = 60;
  break;

 case 129:

  break;

 case 128: {

  const int VAR_17 = 11;
  int VAR_18 = VAR_13[4];

  if (VAR_10->request_payload.payload_len <
    VAR_17 + VAR_18 * 4) {
   VAR_14[2] = VAR_9;
   break;
  }

  VAR_18 = FUNC_7(VAR_12, VAR_14, VAR_13[2],
         VAR_13[3], VAR_18, &VAR_13[8]);
  VAR_15 = 8;
  break;
 }

 case 138:

  break;

 case 136:
  if (VAR_10->request_payload.payload_len < 44)
   goto out_free_resp;
  FUNC_8(VAR_12, VAR_13[9], VAR_13[10],
    VAR_13[32] >> 4, VAR_13[33] >> 4,
    VAR_14);
  VAR_15 = 8;
  break;

 case 135:

  break;

 default:

  break;
 }

 FUNC_10(VAR_10->reply_payload.sg_list,
       VAR_10->reply_payload.sg_cnt, VAR_14,
       VAR_10->reply_payload.payload_len);

 VAR_16 = 0;
out_free_resp:
 FUNC_2(VAR_14);
out_free_req:
 FUNC_2(VAR_13);
out:
 FUNC_1(VAR_10, VAR_16, VAR_15);
}
