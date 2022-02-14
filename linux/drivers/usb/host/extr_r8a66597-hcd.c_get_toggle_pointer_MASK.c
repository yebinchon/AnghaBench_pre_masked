
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8a66597_device {unsigned short ep_in_toggle; unsigned short ep_out_toggle; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static unsigned short *FUNC_1(struct r8a66597_device *VAR_0,
       int VAR_1)
{
 if (!VAR_0)
  return ((void*)0);

 return FUNC_0(VAR_1) ? &VAR_0->ep_in_toggle : &VAR_0->ep_out_toggle;
}
