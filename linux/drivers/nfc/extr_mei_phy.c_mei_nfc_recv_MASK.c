
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nfc_mei_phy {int send_wq; int recv_req_id; int cldev; } ;
struct mei_nfc_hdr {scalar_t__ cmd; int req_id; } ;


 int FUNC_0 (char*,struct mei_nfc_hdr*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int *,size_t) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct nfc_mei_phy *VAR_1, u8 *VAR_2, size_t VAR_3)
{
 struct mei_nfc_hdr *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1->cldev, VAR_2, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = (struct mei_nfc_hdr *) VAR_2;

 FUNC_0("receive", VAR_4);
 if (VAR_4->cmd == VAR_0) {
  VAR_1->recv_req_id = VAR_4->req_id;
  FUNC_2(&VAR_1->send_wq);

  return 0;
 }

 return VAR_5;
}
