
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cifs_tcon {TYPE_2__* ses; } ;
struct cifs_fid {int volatile_fid; int persistent_fid; } ;
struct cifsInodeInfo {int lease_key; } ;
struct TYPE_4__ {TYPE_1__* server; } ;
struct TYPE_3__ {int capabilities; } ;


 scalar_t__ FUNC_0 (struct cifsInodeInfo*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct cifs_tcon*,int ,int ) ;
 int FUNC_2 (int ,struct cifs_tcon*,int ,int ,int) ;
 int FUNC_3 (struct cifsInodeInfo*) ;

__attribute__((used)) static int
FUNC_4(struct cifs_tcon *VAR_1, struct cifs_fid *VAR_2,
       struct cifsInodeInfo *VAR_3)
{
 if (VAR_1->ses->server->capabilities & VAR_0)
  return FUNC_1(0, VAR_1, VAR_3->lease_key,
     FUNC_3(VAR_3));

 return FUNC_2(0, VAR_1, VAR_2->persistent_fid,
     VAR_2->volatile_fid,
     FUNC_0(VAR_3) ? 1 : 0);
}
