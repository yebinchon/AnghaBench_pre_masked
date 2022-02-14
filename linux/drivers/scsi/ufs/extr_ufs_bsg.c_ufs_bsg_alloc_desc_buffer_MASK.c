
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u8 ;
struct utp_upiu_query {int dummy; } ;
struct ufs_hba {int dev; } ;
struct TYPE_3__ {struct utp_upiu_query qr; } ;
struct ufs_bsg_request {TYPE_1__ upiu_req; } ;
struct TYPE_4__ {int payload_len; int sg_cnt; int sg_list; } ;
struct bsg_job {TYPE_2__ request_payload; struct ufs_bsg_request* request; } ;
typedef enum query_opcode { ____Placeholder_query_opcode } query_opcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int *,int) ;
 scalar_t__ FUNC_3 (struct ufs_hba*,int*,struct utp_upiu_query*) ;

__attribute__((used)) static int FUNC_4(struct ufs_hba *VAR_5, struct bsg_job *VAR_6,
         uint8_t **VAR_7, int *VAR_8,
         enum query_opcode VAR_9)
{
 struct ufs_bsg_request *VAR_10 = VAR_6->request;
 struct utp_upiu_query *VAR_11;
 u8 *VAR_12;

 if (VAR_9 != VAR_4 &&
     VAR_9 != VAR_3)
  goto out;

 VAR_11 = &VAR_10->upiu_req.qr;
 if (FUNC_3(VAR_5, VAR_8, VAR_11)) {
  FUNC_0(VAR_5->dev, "Illegal desc size\n");
  return -VAR_0;
 }

 if (*VAR_8 > VAR_6->request_payload.payload_len) {
  FUNC_0(VAR_5->dev, "Illegal desc size\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_1(*VAR_8, VAR_2);
 if (!VAR_12)
  return -VAR_1;

 if (VAR_9 == VAR_4)
  FUNC_2(VAR_6->request_payload.sg_list,
      VAR_6->request_payload.sg_cnt, VAR_12,
      *VAR_8);

 *VAR_7 = VAR_12;

out:
 return 0;
}
