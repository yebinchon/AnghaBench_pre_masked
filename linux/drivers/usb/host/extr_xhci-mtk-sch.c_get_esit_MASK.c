
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xhci_ep_ctx {int ep_info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(struct xhci_ep_ctx *VAR_1)
{
 u32 VAR_2;

 VAR_2 = 1 << FUNC_0(FUNC_1(VAR_1->ep_info));
 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 return VAR_2;
}
