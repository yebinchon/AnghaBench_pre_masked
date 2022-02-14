
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct fotg210_hcd {scalar_t__ uframe_periodic_max; } ;


 scalar_t__ FUNC_0 (struct fotg210_hcd*,int,int) ;

__attribute__((used)) static inline int FUNC_1(struct fotg210_hcd *VAR_0, u32 VAR_1, u32 VAR_2,
  u8 VAR_3, u32 VAR_4)
{
 VAR_2 %= VAR_4;
 do {

  if (FUNC_0(VAR_0, VAR_2 >> 3, VAR_2 & 0x7)
    > (VAR_0->uframe_periodic_max - VAR_3))
   return 0;


  VAR_2 += VAR_4;
 } while (VAR_2 < VAR_1);
 return 1;
}
