
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct iscsi_param {char* name; char* value; } ;
struct iscsi_conn {int param_list; TYPE_1__* conn_ops; } ;
typedef int buf ;
struct TYPE_2__ {unsigned long long MaxRecvDataSegmentLength; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 scalar_t__ FUNC_0 (struct iscsi_param*) ;
 scalar_t__ FUNC_1 (struct iscsi_param*) ;
 scalar_t__ FUNC_2 (struct iscsi_param*) ;
 scalar_t__ FUNC_3 (struct iscsi_param*) ;
 scalar_t__ FUNC_4 (struct iscsi_param*) ;
 scalar_t__ FUNC_5 (struct iscsi_param*) ;
 scalar_t__ FUNC_6 (struct iscsi_param*) ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int FUNC_7 (struct iscsi_param*) ;
 char* VAR_10 ;
 char* FUNC_8 (struct iscsi_param*,char*) ;
 struct iscsi_param* FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (struct iscsi_param*,char*) ;
 int FUNC_11 (char*,int ,unsigned long long*) ;
 int FUNC_12 (char*,int ,int) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*,char*,...) ;
 scalar_t__ FUNC_15 (char*,char**,int ) ;
 int FUNC_16 (char*,char*,scalar_t__) ;
 int FUNC_17 (char*,char*) ;

__attribute__((used)) static int FUNC_18(struct iscsi_param *VAR_11, char *VAR_12,
    struct iscsi_conn *VAR_13)
{
 u8 VAR_14 = 0, VAR_15 = 0;
 char *VAR_16 = ((void*)0);

 if (FUNC_1(VAR_11)) {
  FUNC_14("Received key \"%s\" twice, protocol error.\n",
    VAR_11->name);
  return -1;
 }

 if (FUNC_2(VAR_11))
  return 0;

 if (FUNC_3(VAR_11)) {
  if (!FUNC_17(VAR_12, VAR_10))
   VAR_15 = 1;
  if (!FUNC_17(VAR_11->value, VAR_10))
   VAR_14 = 1;
  if (VAR_14 && VAR_15)
   do {} while (0);
  else {
   if (FUNC_10(VAR_11, VAR_9) < 0)
    return -1;
   if (!VAR_15)
    FUNC_7(VAR_11);
  }
 } else if (FUNC_4(VAR_11)) {
  if (!FUNC_17(VAR_12, VAR_10))
   VAR_15 = 1;
  if (!FUNC_17(VAR_11->value, VAR_10))
   VAR_14 = 1;
  if (VAR_14 || VAR_15) {
   if (FUNC_10(VAR_11, VAR_10) < 0)
    return -1;
   if (VAR_15)
    FUNC_7(VAR_11);
  }
 } else if (FUNC_5(VAR_11)) {
  char *VAR_17, VAR_18[11];
  u32 VAR_19 = FUNC_15(VAR_11->value, &VAR_17, 0);
  u32 VAR_20 = FUNC_15(VAR_12, &VAR_17, 0);

  FUNC_12(VAR_18, 0, sizeof(VAR_18));

  if (!FUNC_17(VAR_11->name, VAR_5) ||
      !FUNC_17(VAR_11->name, VAR_4) ||
      !FUNC_17(VAR_11->name, VAR_3) ||
      !FUNC_17(VAR_11->name, VAR_6) ||
      !FUNC_17(VAR_11->name, VAR_0) ||
      !FUNC_17(VAR_11->name, VAR_2)) {
   if (VAR_20 > VAR_19) {
    FUNC_16(VAR_18, "%u", VAR_19);
    if (FUNC_10(VAR_11,
      &VAR_18[0]) < 0)
     return -1;
   } else {
    if (FUNC_10(VAR_11, VAR_12) < 0)
     return -1;
   }
  } else if (!FUNC_17(VAR_11->name, VAR_1)) {
   if (VAR_19 > VAR_20) {
    FUNC_16(VAR_18, "%u", VAR_19);
    if (FUNC_10(VAR_11,
      &VAR_18[0]) < 0)
     return -1;
   } else {
    if (FUNC_10(VAR_11, VAR_12) < 0)
     return -1;
   }
  } else {
   if (FUNC_10(VAR_11, VAR_12) < 0)
    return -1;
  }

  if (!FUNC_17(VAR_11->name, VAR_7)) {
   struct iscsi_param *VAR_21;
   unsigned long long VAR_22;
   int VAR_23;

   VAR_23 = FUNC_11(VAR_11->value, 0, &VAR_22);
   if (VAR_23 < 0)
    return -1;

   VAR_13->conn_ops->MaxRecvDataSegmentLength = VAR_22;
   FUNC_13("Saving op->MaxRecvDataSegmentLength from"
    " original initiator received value: %u\n",
    VAR_13->conn_ops->MaxRecvDataSegmentLength);

   VAR_21 = FUNC_9(
      VAR_8,
      VAR_13->param_list);
   if (!VAR_21)
    return -1;

   VAR_23 = FUNC_10(VAR_11,
      VAR_21->value);
   if (VAR_23 < 0)
    return -1;

   FUNC_13("Updated %s to target MXDSL value: %s\n",
     VAR_11->name, VAR_11->value);
  }
 } else if (FUNC_6(VAR_11)) {
  VAR_16 = FUNC_8(
     VAR_11, VAR_12);
  if (!VAR_16) {
   FUNC_14("Proposer's value list \"%s\" contains"
    " no valid values from Acceptor's value list"
    " \"%s\".\n", VAR_12, VAR_11->value);
   return -1;
  }
  if (FUNC_10(VAR_11, VAR_16) < 0)
   return -1;
 } else if (FUNC_0(VAR_11)) {
  if (FUNC_10(VAR_11, VAR_12) < 0)
   return -1;
  FUNC_7(VAR_11);
 }

 return 0;
}
