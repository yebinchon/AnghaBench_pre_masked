
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct regmap {int dummy; } ;
struct TYPE_4__ {TYPE_1__* twl_map; } ;
struct TYPE_3__ {size_t base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,size_t,size_t,unsigned int) ;
 int FUNC_1 (struct regmap*,size_t,size_t*,unsigned int) ;
 struct regmap* FUNC_2 (size_t) ;
 TYPE_2__* VAR_2 ;

int FUNC_3(u8 VAR_3, u8 *VAR_4, u8 VAR_5, unsigned VAR_6)
{
 struct regmap *VAR_7 = FUNC_2(VAR_3);
 int VAR_8;

 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_1(VAR_7, VAR_2->twl_map[VAR_3].base + VAR_5,
          VAR_4, VAR_6);

 if (VAR_8)
  FUNC_0("%s: Read failed (mod %d, reg 0x%02x count %d)\n",
         VAR_0, VAR_3, VAR_5, VAR_6);

 return VAR_8;
}
