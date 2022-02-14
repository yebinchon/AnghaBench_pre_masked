
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_ntb_dev {unsigned long unsafe_flags; unsigned long unsafe_flags_ignore; } ;



__attribute__((used)) static inline int FUNC_0(struct intel_ntb_dev *VAR_0,
     unsigned long VAR_1)
{
 return !!(VAR_1 & VAR_0->unsafe_flags & ~VAR_0->unsafe_flags_ignore);
}
