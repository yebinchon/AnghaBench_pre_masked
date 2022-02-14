
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int DataCount; int TotalDataCount; } ;
struct smb_t2_rsp {TYPE_1__ t2_rsp; } ;
struct smb_hdr {scalar_t__ Command; int WordCount; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(char *VAR_5)
{
 struct smb_hdr *VAR_6 = (struct smb_hdr *)VAR_5;
 struct smb_t2_rsp *VAR_7;
 int VAR_8;
 __u16 VAR_9, VAR_10;

 if (VAR_6->Command != VAR_3)
  return 0;



 if (VAR_6->WordCount != 10) {
  FUNC_0(VAR_2, "invalid transact2 word count\n");
  return -VAR_1;
 }

 VAR_7 = (struct smb_t2_rsp *)VAR_6;

 VAR_9 = FUNC_1(&VAR_7->t2_rsp.TotalDataCount);
 VAR_10 = FUNC_1(&VAR_7->t2_rsp.DataCount);

 if (VAR_9 == VAR_10)
  return 0;
 else if (VAR_9 < VAR_10) {
  FUNC_0(VAR_2, "total data %d smaller than data in frame %d\n",
    VAR_9, VAR_10);
  return -VAR_1;
 }

 VAR_8 = VAR_9 - VAR_10;

 FUNC_0(VAR_2, "missing %d bytes from transact2, check next response\n",
   VAR_8);
 if (VAR_9 > VAR_0) {
  FUNC_0(VAR_4, "TotalDataSize %d is over maximum buffer %d\n",
    VAR_9, VAR_0);
  return -VAR_1;
 }
 return VAR_8;
}
