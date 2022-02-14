
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct mtd_info {int size; } ;
struct TYPE_2__ {struct mtd_info* parent; } ;


 int FUNC_0 (struct mtd_info const*) ;
 TYPE_1__* FUNC_1 (struct mtd_info const*) ;

uint64_t FUNC_2(const struct mtd_info *VAR_0)
{
 if (!FUNC_0(VAR_0))
  return VAR_0->size;

 return FUNC_2(FUNC_1(VAR_0)->parent);
}
