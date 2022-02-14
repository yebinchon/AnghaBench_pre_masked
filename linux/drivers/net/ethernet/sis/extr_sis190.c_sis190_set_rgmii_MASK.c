
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sis190_private {int features; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct sis190_private *VAR_1, u8 VAR_2)
{
 VAR_1->features |= (VAR_2 & 0x80) ? VAR_0 : 0;
}
