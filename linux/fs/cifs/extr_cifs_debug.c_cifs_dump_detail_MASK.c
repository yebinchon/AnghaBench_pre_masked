
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CifsError; } ;
struct smb_hdr {int Pid; int Mid; int Flags2; int Flags; TYPE_1__ Status; int Command; } ;
struct TCP_Server_Info {TYPE_2__* ops; } ;
struct TYPE_4__ {int (* calc_smb_size ) (struct smb_hdr*,struct TCP_Server_Info*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct smb_hdr*,int ,...) ;
 int FUNC_1 (struct smb_hdr*,struct TCP_Server_Info*) ;

void FUNC_2(void *VAR_1, struct TCP_Server_Info *VAR_2)
{
}
