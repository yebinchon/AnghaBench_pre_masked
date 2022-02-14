
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ persistent_fid; scalar_t__ volatile_fid; } ;
struct cifsFileInfo {TYPE_1__ fid; } ;



__attribute__((used)) static bool
FUNC_0(struct cifsFileInfo *VAR_0, struct cifsFileInfo *VAR_1)
{
 return VAR_0->fid.persistent_fid == VAR_1->fid.persistent_fid &&
        VAR_0->fid.volatile_fid == VAR_1->fid.volatile_fid;
}
