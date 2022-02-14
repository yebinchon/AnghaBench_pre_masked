
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct faraday_pci {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct faraday_pci *VAR_4, int VAR_5,
           unsigned int VAR_6, int VAR_7, int VAR_8,
           u32 *VAR_9)
{
 FUNC_7(FUNC_0(VAR_5) |
   FUNC_1(FUNC_5(VAR_6)) |
   FUNC_2(FUNC_4(VAR_6)) |
   FUNC_3(VAR_7) |
   VAR_2,
   VAR_4->base + VAR_1);

 *VAR_9 = FUNC_6(VAR_4->base + VAR_3);

 if (VAR_8 == 1)
  *VAR_9 = (*VAR_9 >> (8 * (VAR_7 & 3))) & 0xFF;
 else if (VAR_8 == 2)
  *VAR_9 = (*VAR_9 >> (8 * (VAR_7 & 3))) & 0xFFFF;

 return VAR_0;
}
