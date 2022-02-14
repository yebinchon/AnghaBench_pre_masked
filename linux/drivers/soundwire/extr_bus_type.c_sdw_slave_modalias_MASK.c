
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mfg_id; int part_id; } ;
struct sdw_slave {TYPE_1__ id; } ;


 int FUNC_0 (char*,size_t,char*,int,int) ;

int FUNC_1(const struct sdw_slave *VAR_0, char *VAR_1, size_t VAR_2)
{


 return FUNC_0(VAR_1, VAR_2, "sdw:m%04Xp%04X\n",
   VAR_0->id.mfg_id, VAR_0->id.part_id);
}
