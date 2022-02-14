
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_pkt {int pipe; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct usbhs_pkt*,int*) ;

__attribute__((used)) static int FUNC_2(struct usbhs_pkt *VAR_0, int *VAR_1)
{
 if (FUNC_0(VAR_0->pipe))
  return 0;

 return FUNC_1(VAR_0, VAR_1);
}
