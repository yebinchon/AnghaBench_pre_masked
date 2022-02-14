
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_card {size_t nr_parts; TYPE_1__* part; } ;
struct TYPE_2__ {unsigned int size; unsigned int part_cfg; int force_ro; int area_type; int name; } ;


 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void FUNC_1(struct mmc_card *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2, char *VAR_3, int VAR_4, bool VAR_5,
    int VAR_6)
{
 VAR_0->part[VAR_0->nr_parts].size = VAR_1;
 VAR_0->part[VAR_0->nr_parts].part_cfg = VAR_2;
 FUNC_0(VAR_0->part[VAR_0->nr_parts].name, VAR_3, VAR_4);
 VAR_0->part[VAR_0->nr_parts].force_ro = VAR_5;
 VAR_0->part[VAR_0->nr_parts].area_type = VAR_6;
 VAR_0->nr_parts++;
}
