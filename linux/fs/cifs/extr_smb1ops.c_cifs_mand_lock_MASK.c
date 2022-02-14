
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int netfid; } ;
struct cifsFileInfo {TYPE_1__ fid; int tlink; } ;
typedef int __u8 ;
typedef int __u64 ;
typedef scalar_t__ __u32 ;
struct TYPE_4__ {int tgid; } ;


 int FUNC_0 (unsigned int const,int ,int ,int ,int ,int ,int,int,int ,int,int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(const unsigned int VAR_1, struct cifsFileInfo *VAR_2, __u64 VAR_3,
        __u64 VAR_4, __u32 VAR_5, int VAR_6, int VAR_7, bool VAR_8)
{
 return FUNC_0(VAR_1, FUNC_1(VAR_2->tlink), VAR_2->fid.netfid,
      VAR_0->tgid, VAR_4, VAR_3, VAR_7, VAR_6,
      (__u8)VAR_5, VAR_8, 0);
}
