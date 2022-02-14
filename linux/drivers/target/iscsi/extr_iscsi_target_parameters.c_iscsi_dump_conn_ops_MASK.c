
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_conn_ops {char* MaxRecvDataSegmentLength; scalar_t__ DataDigest; scalar_t__ HeaderDigest; } ;


 int FUNC_0 (char*,char*) ;

void FUNC_1(struct iscsi_conn_ops *VAR_0)
{
 FUNC_0("HeaderDigest: %s\n", (VAR_0->HeaderDigest) ?
    "CRC32C" : "None");
 FUNC_0("DataDigest: %s\n", (VAR_0->DataDigest) ?
    "CRC32C" : "None");
 FUNC_0("MaxRecvDataSegmentLength: %u\n",
    VAR_0->MaxRecvDataSegmentLength);
}
