
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tee_shm {int dummy; } ;
struct tee_context {int teedev; } ;


 struct tee_shm* FUNC_0 (struct tee_context*,int ,size_t,int ) ;

struct tee_shm *FUNC_1(struct tee_context *VAR_0, size_t VAR_1, u32 VAR_2)
{
 return FUNC_0(VAR_0, VAR_0->teedev, VAR_1, VAR_2);
}
