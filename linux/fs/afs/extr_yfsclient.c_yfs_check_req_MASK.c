
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct afs_call {void* request; size_t request_size; TYPE_1__* type; } ;
typedef int __be32 ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ,size_t,size_t) ;
 int FUNC_1 (char*,int ,size_t,size_t) ;

__attribute__((used)) static void FUNC_2(struct afs_call *VAR_0, __be32 *VAR_1)
{
 size_t VAR_2 = (void *)VAR_1 - VAR_0->request;

 if (VAR_2 > VAR_0->request_size)
  FUNC_0("kAFS: %s: Request buffer overflow (%zu>%u)\n",
         VAR_0->type->name, VAR_2, VAR_0->request_size);
 else if (VAR_2 < VAR_0->request_size)
  FUNC_1("kAFS: %s: Request buffer underflow (%zu<%u)\n",
      VAR_0->type->name, VAR_2, VAR_0->request_size);
}
