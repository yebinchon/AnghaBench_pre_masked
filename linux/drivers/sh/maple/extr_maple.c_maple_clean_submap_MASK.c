
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct maple_device {int unit; size_t port; } ;


 int* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct maple_device *VAR_1)
{
 int VAR_2;

 VAR_2 = (VAR_1->unit > 0 ? (1 << (VAR_1->unit - 1)) & 0x1f : 0x20);
 VAR_2 = ~VAR_2;
 VAR_2 &= 0xFF;
 VAR_0[VAR_1->port] = VAR_0[VAR_1->port] & VAR_2;
}
