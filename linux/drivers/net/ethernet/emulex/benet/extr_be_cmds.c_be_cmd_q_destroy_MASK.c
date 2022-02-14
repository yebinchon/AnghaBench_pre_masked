
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct be_queue_info {int created; int id; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_req_q_destroy {int id; int hdr; } ;
struct be_adapter {int mbox_lock; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (int *,int ,int ,int,struct be_mcc_wrb*,int *) ;
 int FUNC_3 (int ) ;
 struct be_cmd_req_q_destroy* FUNC_4 (struct be_mcc_wrb*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct be_mcc_wrb* FUNC_7 (struct be_adapter*) ;

int FUNC_8(struct be_adapter *VAR_7, struct be_queue_info *VAR_8,
       int VAR_9)
{
 struct be_mcc_wrb *VAR_10;
 struct be_cmd_req_q_destroy *VAR_11;
 u8 VAR_12 = 0, VAR_13 = 0;
 int VAR_14;

 if (FUNC_5(&VAR_7->mbox_lock))
  return -1;

 VAR_10 = FUNC_7(VAR_7);
 VAR_11 = FUNC_4(VAR_10);

 switch (VAR_9) {
 case 131:
  VAR_12 = VAR_0;
  VAR_13 = VAR_3;
  break;
 case 132:
  VAR_12 = VAR_0;
  VAR_13 = VAR_2;
  break;
 case 128:
  VAR_12 = VAR_1;
  VAR_13 = VAR_6;
  break;
 case 129:
  VAR_12 = VAR_1;
  VAR_13 = VAR_5;
  break;
 case 130:
  VAR_12 = VAR_0;
  VAR_13 = VAR_4;
  break;
 default:
  FUNC_0();
 }

 FUNC_2(&VAR_11->hdr, VAR_12, VAR_13, sizeof(*VAR_11), VAR_10,
          ((void*)0));
 VAR_11->id = FUNC_3(VAR_8->id);

 VAR_14 = FUNC_1(VAR_7);
 VAR_8->created = 0;

 FUNC_6(&VAR_7->mbox_lock);
 return VAR_14;
}
