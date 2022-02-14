
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int volatile_fid; int persistent_fid; } ;
struct cifsFileInfo {TYPE_1__ fid; int tlink; } ;
typedef int __u64 ;
typedef int __u32 ;
struct TYPE_4__ {int tgid; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int const,int ,int ,int ,int ,int ,int ,int ,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(const unsigned int VAR_2, struct cifsFileInfo *VAR_3, __u64 VAR_4,
        __u64 VAR_5, __u32 VAR_6, int VAR_7, int VAR_8, bool VAR_9)
{
 if (VAR_8 && !VAR_7)
  VAR_6 = VAR_0;
 return FUNC_0(VAR_2, FUNC_1(VAR_3->tlink),
    VAR_3->fid.persistent_fid, VAR_3->fid.volatile_fid,
    VAR_1->tgid, VAR_5, VAR_4, VAR_6, VAR_9);
}
