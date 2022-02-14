
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifs_tcon {int dummy; } ;
struct TYPE_2__ {int volatile_fid; int persistent_fid; } ;
struct cifsFileInfo {TYPE_1__ fid; } ;


 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(const unsigned int VAR_0, struct cifs_tcon *VAR_1,
     struct cifsFileInfo *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2->fid.persistent_fid,
       VAR_2->fid.volatile_fid);
}
