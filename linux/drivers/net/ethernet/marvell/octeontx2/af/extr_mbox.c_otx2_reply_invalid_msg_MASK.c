
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u16 ;
struct otx2_mbox {int dummy; } ;
struct TYPE_2__ {void* pcifunc; int rc; int sig; void* id; } ;
struct msg_rsp {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct otx2_mbox*,int,int) ;

int
FUNC_1(struct otx2_mbox *VAR_3, int VAR_4, u16 VAR_5, u16 VAR_6)
{
 struct msg_rsp *VAR_7;

 VAR_7 = (struct msg_rsp *)
        FUNC_0(VAR_3, VAR_4, sizeof(*VAR_7));
 if (!VAR_7)
  return -VAR_0;
 VAR_7->hdr.id = VAR_6;
 VAR_7->hdr.sig = VAR_2;
 VAR_7->hdr.rc = VAR_1;
 VAR_7->hdr.pcifunc = VAR_5;
 return 0;
}
