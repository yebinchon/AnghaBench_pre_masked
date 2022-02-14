
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fh_pad; } ;
struct knfsd_fh {int fh_size; TYPE_1__ fh_base; } ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct knfsd_fh *VAR_0)
{
 return FUNC_1(VAR_0->fh_base.fh_pad, FUNC_0(VAR_0->fh_size), 0);
}
