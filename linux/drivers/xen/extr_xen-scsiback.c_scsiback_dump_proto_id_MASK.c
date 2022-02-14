
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsiback_tport {int tport_proto_id; } ;






__attribute__((used)) static char *FUNC_0(struct scsiback_tport *VAR_0)
{
 switch (VAR_0->tport_proto_id) {
 case 128:
  return "SAS";
 case 130:
  return "FCP";
 case 129:
  return "iSCSI";
 default:
  break;
 }

 return "Unknown";
}
