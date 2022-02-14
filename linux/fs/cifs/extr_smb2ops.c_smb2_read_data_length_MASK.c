
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_read_rsp {int DataLength; int DataRemaining; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static unsigned int
FUNC_1(char *VAR_0, bool VAR_1)
{
 struct smb2_read_rsp *VAR_2 = (struct smb2_read_rsp *)VAR_0;

 if (VAR_1)
  return FUNC_0(VAR_2->DataRemaining);

 return FUNC_0(VAR_2->DataLength);
}
