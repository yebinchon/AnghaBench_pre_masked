
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct isp1760_udc {struct isp1760_ep* ep; } ;
struct isp1760_ep {scalar_t__ addr; scalar_t__ desc; } ;


 unsigned int FUNC_0 (struct isp1760_ep*) ;

__attribute__((used)) static struct isp1760_ep *FUNC_1(struct isp1760_udc *VAR_0,
           u16 VAR_1)
{
 unsigned int VAR_2;

 if (VAR_1 == 0)
  return &VAR_0->ep[0];

 for (VAR_2 = 1; VAR_2 < FUNC_0(VAR_0->ep); ++VAR_2) {
  if (VAR_0->ep[VAR_2].addr == VAR_1)
   return VAR_0->ep[VAR_2].desc ? &VAR_0->ep[VAR_2] : ((void*)0);
 }

 return ((void*)0);
}
