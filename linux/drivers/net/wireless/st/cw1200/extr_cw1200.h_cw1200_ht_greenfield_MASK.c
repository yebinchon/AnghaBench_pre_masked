
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cap; } ;
struct cw1200_ht_info {int operation_mode; TYPE_1__ ht_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cw1200_ht_info const*) ;

__attribute__((used)) static inline int FUNC_1(const struct cw1200_ht_info *VAR_2)
{
 return FUNC_0(VAR_2) &&
  (VAR_2->ht_cap.cap & VAR_0) &&
  !(VAR_2->operation_mode &
    VAR_1);
}
