
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct MPT3SAS_ADAPTER {int dummy; } ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,int,char*) ;

__attribute__((used)) static void
FUNC_1(struct MPT3SAS_ADAPTER *VAR_0, u8 VAR_1)
{
 char *VAR_2;

 switch (VAR_1) {
 case 132:
  VAR_2 = "task management request completed";
  break;
 case 134:
  VAR_2 = "invalid frame";
  break;
 case 129:
  VAR_2 = "task management request not supported";
  break;
 case 131:
  VAR_2 = "task management request failed";
  break;
 case 128:
  VAR_2 = "task management request succeeded";
  break;
 case 130:
  VAR_2 = "invalid lun";
  break;
 case 0xA:
  VAR_2 = "overlapped tag attempted";
  break;
 case 133:
  VAR_2 = "task queued, however not sent to target";
  break;
 default:
  VAR_2 = "unknown";
  break;
 }
 FUNC_0(VAR_0, "response_code(0x%01x): %s\n", VAR_1, VAR_2);
}
