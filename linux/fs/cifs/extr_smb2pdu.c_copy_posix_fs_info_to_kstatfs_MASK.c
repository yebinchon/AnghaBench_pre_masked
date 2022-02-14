
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kstatfs {void* f_ffree; void* f_files; void* f_bavail; void* f_bfree; void* f_blocks; int f_bsize; } ;
struct TYPE_3__ {scalar_t__ TotalBlocks; scalar_t__ BlocksAvail; scalar_t__ UserBlocksAvail; scalar_t__ TotalFileNodes; scalar_t__ FreeFileNodes; int BlockSize; } ;
typedef TYPE_1__ FILE_SYSTEM_POSIX_INFO ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(FILE_SYSTEM_POSIX_INFO *VAR_0,
   struct kstatfs *VAR_1)
{
 VAR_1->f_bsize = FUNC_1(VAR_0->BlockSize);
 VAR_1->f_blocks = FUNC_2(VAR_0->TotalBlocks);
 VAR_1->f_bfree = FUNC_2(VAR_0->BlocksAvail);
 if (VAR_0->UserBlocksAvail == FUNC_0(-1))
  VAR_1->f_bavail = VAR_1->f_bfree;
 else
  VAR_1->f_bavail = FUNC_2(VAR_0->UserBlocksAvail);
 if (VAR_0->TotalFileNodes != FUNC_0(-1))
  VAR_1->f_files = FUNC_2(VAR_0->TotalFileNodes);
 if (VAR_0->FreeFileNodes != FUNC_0(-1))
  VAR_1->f_ffree = FUNC_2(VAR_0->FreeFileNodes);

 return;
}
