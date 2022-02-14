
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusb_dn_connect {int attributes; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(const struct wusb_dn_connect *VAR_0)
{
 return (FUNC_0(VAR_0->attributes) >> 9) & 0x03;
}
