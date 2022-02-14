
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_report_error_header {int version; int action; int length; } ;
struct err_notify_sccb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




__attribute__((used)) static int FUNC_0(struct zpci_report_error_header *VAR_2)
{
 if (VAR_2->version != 1)
  return -VAR_0;

 switch (VAR_2->action) {
 case 128:
 case 129:
 case 130:
  break;
 default:
  return -VAR_0;
 }

 if (VAR_2->length > (VAR_1 - sizeof(struct err_notify_sccb)))
  return -VAR_0;

 return 0;
}
