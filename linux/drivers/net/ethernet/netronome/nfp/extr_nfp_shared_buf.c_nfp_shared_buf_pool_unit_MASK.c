
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nfp_pf {unsigned int num_shared_bufs; TYPE_1__* shared_bufs; } ;
typedef scalar_t__ __le32 ;
struct TYPE_2__ {scalar_t__ id; int pool_size_unit; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct nfp_pf *VAR_0, unsigned int VAR_1)
{
 __le32 VAR_2 = FUNC_1(VAR_1);
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_shared_bufs; VAR_3++)
  if (VAR_0->shared_bufs[VAR_3].id == VAR_2)
   return FUNC_2(VAR_0->shared_bufs[VAR_3].pool_size_unit);

 FUNC_0(1);
 return 0;
}
