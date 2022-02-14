
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nfcsim {int send_work; int mode; int rf_tech; int link_out; scalar_t__ dropframe; int recv_work; void* arg; int cb; int recv_timeout; int up; } ;
struct nfc_digital_dev {int dummy; } ;
typedef int nfc_digital_cmd_complete_t ;


 int VAR_0 ;
 int FUNC_0 (struct nfcsim*,char*,scalar_t__) ;
 int FUNC_1 (struct nfcsim*,char*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int) ;
 struct nfcsim* FUNC_5 (struct nfc_digital_dev*) ;
 int FUNC_6 (int ,struct sk_buff*,int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct nfc_digital_dev *VAR_1, struct sk_buff *VAR_2,
         u16 VAR_3, nfc_digital_cmd_complete_t VAR_4, void *VAR_5)
{
 struct nfcsim *VAR_6 = FUNC_5(VAR_1);
 u8 VAR_7;

 if (!VAR_6->up) {
  FUNC_1(VAR_6, "Device is down\n");
  return -VAR_0;
 }

 VAR_6->recv_timeout = VAR_3;
 VAR_6->cb = VAR_4;
 VAR_6->arg = VAR_5;

 FUNC_8(&VAR_6->recv_work);

 if (VAR_6->dropframe) {
  FUNC_0(VAR_6, "dropping frame (out of %d)\n", VAR_6->dropframe);
  FUNC_2(VAR_2);
  VAR_6->dropframe--;

  return 0;
 }

 if (VAR_2) {
  FUNC_6(VAR_6->link_out, VAR_2, VAR_6->rf_tech,
        VAR_6->mode);


  FUNC_3(&VAR_7, 1);
  VAR_7 = 3 + (VAR_7 & 0x07);

  FUNC_7(&VAR_6->send_work, FUNC_4(VAR_7));
 }

 return 0;
}
