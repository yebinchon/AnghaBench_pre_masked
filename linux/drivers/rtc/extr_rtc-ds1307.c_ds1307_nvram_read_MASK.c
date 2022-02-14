
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds1307 {size_t type; int regmap; } ;
struct chip_desc {scalar_t__ nvram_offset; } ;


 struct chip_desc* VAR_0 ;
 int FUNC_0 (int ,scalar_t__,void*,size_t) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, unsigned int VAR_2, void *VAR_3,
        size_t VAR_4)
{
 struct ds1307 *VAR_5 = VAR_1;
 const struct chip_desc *VAR_6 = &VAR_0[VAR_5->type];

 return FUNC_0(VAR_5->regmap, VAR_6->nvram_offset + VAR_2,
    VAR_3, VAR_4);
}
