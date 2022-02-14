
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int topo; } ;
struct intel_ntb_dev {int hwerr_flags; int unsafe_flags; TYPE_1__ ntb; scalar_t__ unsafe_flags_ignore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct intel_ntb_dev *VAR_4)
{
 VAR_4->unsafe_flags = 0;
 VAR_4->unsafe_flags_ignore = 0;


 if (VAR_4->hwerr_flags & VAR_1)
  if (!FUNC_0(VAR_4->ntb.topo))
   VAR_4->unsafe_flags |= VAR_2;


 if (VAR_4->hwerr_flags & VAR_0) {
  VAR_4->unsafe_flags |= VAR_2;
  VAR_4->unsafe_flags |= VAR_3;
 }
}
