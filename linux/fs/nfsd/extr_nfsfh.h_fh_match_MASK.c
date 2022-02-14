
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fh_pad; } ;
struct knfsd_fh {scalar_t__ fh_size; TYPE_1__ fh_base; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static inline bool FUNC_1(struct knfsd_fh *VAR_0, struct knfsd_fh *VAR_1)
{
 if (VAR_0->fh_size != VAR_1->fh_size)
  return 0;
 if (FUNC_0(VAR_0->fh_base.fh_pad, VAR_1->fh_base.fh_pad, VAR_0->fh_size) != 0)
  return 0;
 return 1;
}
