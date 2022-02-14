
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifs_tcon {int dummy; } ;
struct cifs_fid {int netfid; } ;
struct cifsInodeInfo {int dummy; } ;
struct TYPE_2__ {int tgid; } ;


 int FUNC_0 (int ,struct cifs_tcon*,int ,int ,int ,int ,int ,int ,int ,int,int) ;
 scalar_t__ FUNC_1 (struct cifsInodeInfo*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int
FUNC_2(struct cifs_tcon *VAR_2, struct cifs_fid *VAR_3,
       struct cifsInodeInfo *VAR_4)
{
 return FUNC_0(0, VAR_2, VAR_3->netfid, VAR_1->tgid, 0, 0, 0, 0,
      VAR_0, 0,
      FUNC_1(VAR_4) ? 1 : 0);
}
