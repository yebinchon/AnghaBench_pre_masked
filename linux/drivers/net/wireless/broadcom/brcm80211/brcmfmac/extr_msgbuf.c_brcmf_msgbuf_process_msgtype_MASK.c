
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msgbuf_common_hdr {int msgtype; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_msgbuf {struct brcmf_pub* drvr; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct brcmf_msgbuf*,void*) ;
 int FUNC_3 (struct brcmf_msgbuf*,void*) ;
 int FUNC_4 (struct brcmf_msgbuf*,void*) ;
 int FUNC_5 (struct brcmf_msgbuf*,void*) ;
 int FUNC_6 (struct brcmf_msgbuf*,void*) ;
 int FUNC_7 (struct brcmf_msgbuf*,void*) ;
 int FUNC_8 (struct brcmf_msgbuf*,void*) ;
 int FUNC_9 (struct brcmf_msgbuf*,void*) ;

__attribute__((used)) static void FUNC_10(struct brcmf_msgbuf *VAR_1, void *VAR_2)
{
 struct brcmf_pub *VAR_3 = VAR_1->drvr;
 struct msgbuf_common_hdr *VAR_4;

 VAR_4 = (struct msgbuf_common_hdr *)VAR_2;
 switch (VAR_4->msgtype) {
 case 134:
  FUNC_1(VAR_0, "MSGBUF_TYPE_GEN_STATUS\n");
  FUNC_5(VAR_1, VAR_2);
  break;
 case 131:
  FUNC_1(VAR_0, "MSGBUF_TYPE_RING_STATUS\n");
  FUNC_7(VAR_1, VAR_2);
  break;
 case 136:
  FUNC_1(VAR_0, "MSGBUF_TYPE_FLOW_RING_CREATE_CMPLT\n");
  FUNC_3(VAR_1, VAR_2);
  break;
 case 135:
  FUNC_1(VAR_0, "MSGBUF_TYPE_FLOW_RING_DELETE_CMPLT\n");
  FUNC_4(VAR_1, VAR_2);
  break;
 case 133:
  FUNC_1(VAR_0, "MSGBUF_TYPE_IOCTLPTR_REQ_ACK\n");
  break;
 case 132:
  FUNC_1(VAR_0, "MSGBUF_TYPE_IOCTL_CMPLT\n");
  FUNC_6(VAR_1, VAR_2);
  break;
 case 128:
  FUNC_1(VAR_0, "MSGBUF_TYPE_WL_EVENT\n");
  FUNC_2(VAR_1, VAR_2);
  break;
 case 129:
  FUNC_1(VAR_0, "MSGBUF_TYPE_TX_STATUS\n");
  FUNC_9(VAR_1, VAR_2);
  break;
 case 130:
  FUNC_1(VAR_0, "MSGBUF_TYPE_RX_CMPLT\n");
  FUNC_8(VAR_1, VAR_2);
  break;
 default:
  FUNC_0(VAR_3, "Unsupported msgtype %d\n", VAR_4->msgtype);
  break;
 }
}
