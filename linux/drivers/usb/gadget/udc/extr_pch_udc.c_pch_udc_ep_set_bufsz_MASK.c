
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pch_udc_ep {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pch_udc_ep*,int ) ;
 int FUNC_1 (struct pch_udc_ep*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct pch_udc_ep *VAR_2,
       u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;
 if (VAR_4) {
  VAR_5 = FUNC_0(VAR_2, VAR_0);
  VAR_5 = (VAR_5 & 0xffff0000) | (VAR_3 & 0xffff);
  FUNC_1(VAR_2, VAR_5, VAR_0);
 } else {
  VAR_5 = FUNC_0(VAR_2, VAR_1);
  VAR_5 = (VAR_3 << 16) | (VAR_5 & 0xffff);
  FUNC_1(VAR_2, VAR_5, VAR_1);
 }
}
