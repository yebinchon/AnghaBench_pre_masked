
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int shmem_base; } ;
struct bnx2x {TYPE_1__ common; int flags; } ;


 int FUNC_0 (char*) ;
 size_t FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct bnx2x*) ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_5(struct bnx2x *VAR_7)
{
 int VAR_8 = 0;
 u32 VAR_9 = 0;

 do {
  VAR_7->common.shmem_base = FUNC_2(VAR_7, VAR_3);




  if (VAR_7->common.shmem_base == 0xFFFFFFFF) {
   VAR_7->flags |= VAR_4;
   return -VAR_0;
  }

  if (VAR_7->common.shmem_base) {
   VAR_9 = FUNC_3(VAR_7, VAR_6[FUNC_1(VAR_7)]);
   if (VAR_9 & VAR_5)
    return 0;
  }

  FUNC_4(VAR_7);

 } while (VAR_8++ < (VAR_2 / VAR_1));

 FUNC_0("BAD MCP validity signature\n");

 return -VAR_0;
}
