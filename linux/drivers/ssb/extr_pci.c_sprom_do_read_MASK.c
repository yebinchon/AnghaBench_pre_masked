
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ssb_bus {int sprom_size; scalar_t__ sprom_offset; scalar_t__ mmio; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct ssb_bus *VAR_0, u16 *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->sprom_size; VAR_2++)
  VAR_1[VAR_2] = FUNC_0(VAR_0->mmio + VAR_0->sprom_offset + (VAR_2 * 2));

 return 0;
}
