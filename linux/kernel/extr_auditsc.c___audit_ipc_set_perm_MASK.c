
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
typedef int uid_t ;
struct TYPE_2__ {unsigned long qbytes; int has_perm; int perm_mode; int perm_gid; int perm_uid; } ;
struct audit_context {TYPE_1__ ipc; } ;
typedef int gid_t ;


 struct audit_context* FUNC_0 () ;

void FUNC_1(unsigned long VAR_0, uid_t VAR_1, gid_t VAR_2, umode_t VAR_3)
{
 struct audit_context *VAR_4 = FUNC_0();

 VAR_4->ipc.qbytes = VAR_0;
 VAR_4->ipc.perm_uid = VAR_1;
 VAR_4->ipc.perm_gid = VAR_2;
 VAR_4->ipc.perm_mode = VAR_3;
 VAR_4->ipc.has_perm = 1;
}
