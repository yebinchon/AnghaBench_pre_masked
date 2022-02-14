
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int length; } ;
struct nfp_dumpspec_csr {int register_width; TYPE_1__ tl; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct nfp_dumpspec_csr *VAR_0)
{
 u32 VAR_1 = sizeof(*VAR_0) - sizeof(VAR_0->tl);
 u32 VAR_2 = FUNC_0(VAR_0->tl.length);
 u32 VAR_3;

 if (VAR_2 < VAR_1)
  return 0;

 VAR_3 = FUNC_0(VAR_0->register_width);

 return VAR_3 == 32 || VAR_3 == 64;
}
