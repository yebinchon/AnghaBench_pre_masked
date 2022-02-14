
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_rbm {scalar_t__ rgd; scalar_t__ bii; scalar_t__ offset; } ;



__attribute__((used)) static inline bool FUNC_0(const struct gfs2_rbm *VAR_0,
          const struct gfs2_rbm *VAR_1)
{
 return (VAR_0->rgd == VAR_1->rgd) && (VAR_0->bii == VAR_1->bii) &&
        (VAR_0->offset == VAR_1->offset);
}
