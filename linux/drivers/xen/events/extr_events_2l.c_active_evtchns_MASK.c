
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xen_ulong_t ;
struct shared_info {int* evtchn_pending; int* evtchn_mask; } ;


 int VAR_0 ;
 int* FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static inline xen_ulong_t FUNC_1(unsigned int VAR_1,
      struct shared_info *VAR_2,
      unsigned int VAR_3)
{
 return VAR_2->evtchn_pending[VAR_3] &
  FUNC_0(VAR_0, VAR_1)[VAR_3] &
  ~VAR_2->evtchn_mask[VAR_3];
}
