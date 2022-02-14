
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtlwifi_firmware_header {int signature; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct rtlwifi_firmware_header *VAR_0)
{
 return (FUNC_0(VAR_0->signature) & 0xfff0) == 0x2300;
}
