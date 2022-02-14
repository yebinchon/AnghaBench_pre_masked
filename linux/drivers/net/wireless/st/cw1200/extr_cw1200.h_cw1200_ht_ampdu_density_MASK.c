
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ampdu_density; } ;
struct cw1200_ht_info {TYPE_1__ ht_cap; } ;


 int FUNC_0 (struct cw1200_ht_info const*) ;

__attribute__((used)) static inline int FUNC_1(const struct cw1200_ht_info *VAR_0)
{
 if (!FUNC_0(VAR_0))
  return 0;
 return VAR_0->ht_cap.ampdu_density;
}
