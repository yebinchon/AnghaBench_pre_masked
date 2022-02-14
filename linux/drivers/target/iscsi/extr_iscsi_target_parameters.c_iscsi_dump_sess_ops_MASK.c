
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_sess_ops {char* InitiatorName; char* InitiatorAlias; char* TargetName; char* TargetAlias; char* TargetPortalGroupTag; char* MaxConnections; char* MaxBurstLength; char* FirstBurstLength; char* DefaultTime2Wait; char* DefaultTime2Retain; char* MaxOutstandingR2T; char* ErrorRecoveryLevel; scalar_t__ SessionType; scalar_t__ DataSequenceInOrder; scalar_t__ DataPDUInOrder; scalar_t__ ImmediateData; scalar_t__ InitialR2T; } ;


 int FUNC_0 (char*,char*) ;

void FUNC_1(struct iscsi_sess_ops *VAR_0)
{
 FUNC_0("InitiatorName: %s\n", VAR_0->InitiatorName);
 FUNC_0("InitiatorAlias: %s\n", VAR_0->InitiatorAlias);
 FUNC_0("TargetName: %s\n", VAR_0->TargetName);
 FUNC_0("TargetAlias: %s\n", VAR_0->TargetAlias);
 FUNC_0("TargetPortalGroupTag: %hu\n",
   VAR_0->TargetPortalGroupTag);
 FUNC_0("MaxConnections: %hu\n", VAR_0->MaxConnections);
 FUNC_0("InitialR2T: %s\n",
   (VAR_0->InitialR2T) ? "Yes" : "No");
 FUNC_0("ImmediateData: %s\n", (VAR_0->ImmediateData) ?
   "Yes" : "No");
 FUNC_0("MaxBurstLength: %u\n", VAR_0->MaxBurstLength);
 FUNC_0("FirstBurstLength: %u\n", VAR_0->FirstBurstLength);
 FUNC_0("DefaultTime2Wait: %hu\n", VAR_0->DefaultTime2Wait);
 FUNC_0("DefaultTime2Retain: %hu\n",
   VAR_0->DefaultTime2Retain);
 FUNC_0("MaxOutstandingR2T: %hu\n",
   VAR_0->MaxOutstandingR2T);
 FUNC_0("DataPDUInOrder: %s\n",
   (VAR_0->DataPDUInOrder) ? "Yes" : "No");
 FUNC_0("DataSequenceInOrder: %s\n",
   (VAR_0->DataSequenceInOrder) ? "Yes" : "No");
 FUNC_0("ErrorRecoveryLevel: %hu\n",
   VAR_0->ErrorRecoveryLevel);
 FUNC_0("SessionType: %s\n", (VAR_0->SessionType) ?
   "Discovery" : "Normal");
}
