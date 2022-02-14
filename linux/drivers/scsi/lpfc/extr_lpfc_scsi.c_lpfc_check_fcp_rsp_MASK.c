
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_io_buf {struct fcp_rsp* fcp_rsp; } ;
struct fcp_rsp {int rspStatus2; int rspInfo3; int rspRspLen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ,char*,...) ;

__attribute__((used)) static int
FUNC_2(struct lpfc_vport *VAR_5, struct lpfc_io_buf *VAR_6)
{
 struct fcp_rsp *VAR_7 = VAR_6->fcp_rsp;
 uint32_t VAR_8;
 uint32_t VAR_9;
 uint8_t VAR_10;
 int VAR_11 = VAR_0;


 if (VAR_7 == ((void*)0))
  FUNC_1(VAR_5, VAR_1, VAR_2,
     "0703 fcp_rsp is missing\n");
 else {
  VAR_8 = VAR_7->rspStatus2;
  VAR_9 = FUNC_0(VAR_7->rspRspLen);
  VAR_10 = VAR_7->rspInfo3;


  FUNC_1(VAR_5, VAR_1,
     VAR_2,
     "0706 fcp_rsp valid 0x%x,"
     " rsp len=%d code 0x%x\n",
     VAR_8,
     VAR_9, VAR_10);





  if ((VAR_7->rspStatus2 & VAR_3) &&
      ((VAR_9 == 8) || (VAR_9 == 4))) {
   switch (VAR_10) {
   case 131:
    FUNC_1(VAR_5, VAR_1, VAR_2,
       "0715 Task Mgmt No Failure\n");
    VAR_11 = VAR_4;
    break;
   case 128:
    FUNC_1(VAR_5, VAR_1, VAR_2,
       "0716 Task Mgmt Target "
      "reject\n");
    break;
   case 129:
    FUNC_1(VAR_5, VAR_1, VAR_2,
       "0717 Task Mgmt Target "
      "failed TM\n");
    break;
   case 130:
    FUNC_1(VAR_5, VAR_1, VAR_2,
       "0718 Task Mgmt to invalid "
      "LUN\n");
    break;
   }
  }
 }
 return VAR_11;
}
