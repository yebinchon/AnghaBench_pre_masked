
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int DataCount; int DataOffset; int TotalDataCount; } ;
struct TYPE_3__ {int Protocol; } ;
struct smb_t2_rsp {TYPE_2__ t2_rsp; TYPE_1__ hdr; } ;
struct smb_hdr {int smb_buf_length; } ;
typedef unsigned int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (struct smb_hdr*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,unsigned int) ;
 int FUNC_6 (unsigned int,struct smb_hdr*) ;
 int FUNC_7 (unsigned int,int *) ;

__attribute__((used)) static int
FUNC_8(char *VAR_6, struct smb_hdr *VAR_7)
{
 struct smb_t2_rsp *VAR_8 = (struct smb_t2_rsp *)VAR_6;
 struct smb_t2_rsp *VAR_9 = (struct smb_t2_rsp *)VAR_7;
 char *VAR_10;
 char *VAR_11;
 int VAR_12;
 unsigned int VAR_13, VAR_14;
 __u16 VAR_15, VAR_16, VAR_17;

 VAR_16 = FUNC_4(&VAR_8->t2_rsp.TotalDataCount);
 VAR_15 = FUNC_4(&VAR_9->t2_rsp.TotalDataCount);

 if (VAR_15 != VAR_16)
  FUNC_1(VAR_3, "total data count of primary and secondary t2 differ source=%hu target=%hu\n",
    VAR_16, VAR_15);

 VAR_14 = FUNC_4(&VAR_9->t2_rsp.DataCount);

 VAR_12 = VAR_15 - VAR_14;

 if (VAR_12 < 0) {
  FUNC_1(VAR_3, "Server sent too much data. tgt_total_cnt=%hu total_in_tgt=%u\n",
    VAR_15, VAR_14);
  return -VAR_2;
 }

 if (VAR_12 == 0) {

  FUNC_1(VAR_3, "no more data remains\n");
  return 0;
 }

 VAR_17 = FUNC_4(&VAR_8->t2_rsp.DataCount);
 if (VAR_12 < VAR_17)
  FUNC_1(VAR_3, "transact2 2nd response contains too much data\n");


 VAR_10 = (char *)&VAR_9->hdr.Protocol +
    FUNC_4(&VAR_9->t2_rsp.DataOffset);


 VAR_11 = (char *)&VAR_8->hdr.Protocol +
    FUNC_4(&VAR_8->t2_rsp.DataOffset);

 VAR_10 += VAR_14;

 VAR_14 += VAR_17;

 if (VAR_14 > VAR_5) {
  FUNC_1(VAR_3, "coalesced DataCount too large (%u)\n",
    VAR_14);
  return -VAR_2;
 }
 FUNC_7(VAR_14, &VAR_9->t2_rsp.DataCount);


 VAR_13 = FUNC_3(VAR_7);
 VAR_13 += VAR_17;

 if (VAR_13 > VAR_5) {
  FUNC_1(VAR_3, "coalesced BCC too large (%u)\n", VAR_13);
  return -VAR_2;
 }
 FUNC_6(VAR_13, VAR_7);

 VAR_13 = FUNC_0(VAR_7->smb_buf_length);
 VAR_13 += VAR_17;

 if (VAR_13 > VAR_0 + VAR_4 - 4) {
  FUNC_1(VAR_3, "coalesced BCC exceeds buffer size (%u)\n",
    VAR_13);
  return -VAR_1;
 }
 VAR_7->smb_buf_length = FUNC_2(VAR_13);


 FUNC_5(VAR_10, VAR_11, VAR_17);

 if (VAR_12 != VAR_17) {

  FUNC_1(VAR_3, "waiting for more secondary responses\n");
  return 1;
 }


 FUNC_1(VAR_3, "found the last secondary response\n");
 return 0;
}
