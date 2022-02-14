
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {int ssp_descriptors; int ss_descriptors; int hs_descriptors; int fs_descriptors; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct usb_function *VAR_0)
{
 FUNC_0(VAR_0->fs_descriptors);
 FUNC_0(VAR_0->hs_descriptors);
 FUNC_0(VAR_0->ss_descriptors);
 FUNC_0(VAR_0->ssp_descriptors);
}
