
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pqi_ctrl_info {TYPE_1__* pqi_ofa_mem_virt_addr; } ;
struct TYPE_2__ {int bytes_allocated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pqi_ctrl_info*,int,int) ;

__attribute__((used)) static int FUNC_2(struct pqi_ctrl_info *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 u32 VAR_5;

 VAR_3 = FUNC_0(
   VAR_2->pqi_ofa_mem_virt_addr->bytes_allocated);
 VAR_4 = VAR_3 / VAR_1;

 for (VAR_5 = VAR_3; VAR_5 >= VAR_4; VAR_5 /= 2)
  if (!FUNC_1(VAR_2, VAR_3, VAR_5))
   return 0;

 return -VAR_0;
}
