
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnx2 {scalar_t__ shmem_base; } ;


 scalar_t__ FUNC_0 (struct bnx2*,scalar_t__) ;

__attribute__((used)) static u32
FUNC_1(struct bnx2 *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0, VAR_0->shmem_base + VAR_1);
}
