
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct musb_request {int dummy; } ;
struct musb_hw_ep {int ep_out; } ;


 struct musb_request* FUNC_0 (int *) ;

__attribute__((used)) static inline struct musb_request *FUNC_1(struct musb_hw_ep *VAR_0)
{
 return FUNC_0(&VAR_0->ep_out);
}
