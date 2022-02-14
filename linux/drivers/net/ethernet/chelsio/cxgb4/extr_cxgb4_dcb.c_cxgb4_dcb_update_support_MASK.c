
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_dcb_info {scalar_t__ dcb_version; int supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline void FUNC_0(struct port_dcb_info *VAR_4)
{
 if (VAR_4->dcb_version == VAR_3) {
  if (VAR_4->supported & VAR_0)
   VAR_4->supported &= ~VAR_0;
  VAR_4->supported |= VAR_1;
 } else if (VAR_4->dcb_version == VAR_2) {
  if (VAR_4->supported & VAR_1)
   VAR_4->supported &= ~VAR_1;
  VAR_4->supported |= VAR_0;
 }
}
