
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {struct map_info* priv; } ;
struct map_info {int dummy; } ;
struct erase_info {unsigned long len; scalar_t__ addr; } ;
typedef int map_word ;


 scalar_t__ FUNC_0 (struct map_info*) ;
 int FUNC_1 (struct map_info*) ;
 int FUNC_2 (struct map_info*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3 (struct mtd_info *VAR_0, struct erase_info *VAR_1)
{


 struct map_info *VAR_2 = VAR_0->priv;
 map_word VAR_3;
 unsigned long VAR_4;

 VAR_3 = FUNC_1(VAR_2);
 for (VAR_4=0; VAR_4<VAR_1->len; VAR_4 += FUNC_0(VAR_2))
  FUNC_2(VAR_2, VAR_3, VAR_1->addr + VAR_4);
 return 0;
}
