
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_read_rsp {unsigned int DataOffset; } ;



__attribute__((used)) static unsigned int
FUNC_0(char *VAR_0)
{
 struct smb2_read_rsp *VAR_1 = (struct smb2_read_rsp *)VAR_0;

 return VAR_1->DataOffset;
}
