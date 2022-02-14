
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc2_qh {scalar_t__ ep_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct dwc2_qh *VAR_2)
{
 return VAR_2->ep_type == VAR_0 ||
        VAR_2->ep_type == VAR_1;
}
