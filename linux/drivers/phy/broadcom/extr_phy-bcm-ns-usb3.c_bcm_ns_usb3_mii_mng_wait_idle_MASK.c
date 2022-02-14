
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_ns_usb3 {scalar_t__ ccb_mii; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm_ns_usb3*,scalar_t__,int,int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct bcm_ns_usb3 *VAR_2)
{
 return FUNC_0(VAR_2, VAR_2->ccb_mii + VAR_0,
        0x0100, 0x0000,
        FUNC_1(VAR_1));
}
