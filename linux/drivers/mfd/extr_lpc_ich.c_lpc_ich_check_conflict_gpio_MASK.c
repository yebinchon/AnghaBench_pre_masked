
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct resource {scalar_t__ start; } ;


 int FUNC_0 (scalar_t__,int,char*) ;
 int FUNC_1 (struct resource*) ;

__attribute__((used)) static int FUNC_2(struct resource *VAR_0)
{
 int VAR_1;
 u8 VAR_2 = 0;

 if (FUNC_1(VAR_0) >= 0x50 &&
     !FUNC_0(VAR_0->start + 0x40, 0x10, "LPC ICH GPIO3"))
  VAR_2 |= 1 << 2;

 if (!FUNC_0(VAR_0->start + 0x30, 0x10, "LPC ICH GPIO2"))
  VAR_2 |= 1 << 1;

 VAR_1 = FUNC_0(VAR_0->start + 0x00, 0x30, "LPC ICH GPIO1");
 if (!VAR_1)
  VAR_2 |= 1 << 0;

 return VAR_2 ? VAR_2 : VAR_1;
}
