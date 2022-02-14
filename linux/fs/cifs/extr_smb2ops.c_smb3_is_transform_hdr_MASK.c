
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_transform_hdr {scalar_t__ ProtocolId; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(void *VAR_1)
{
 struct smb2_transform_hdr *VAR_2 = VAR_1;

 return VAR_2->ProtocolId == VAR_0;
}
