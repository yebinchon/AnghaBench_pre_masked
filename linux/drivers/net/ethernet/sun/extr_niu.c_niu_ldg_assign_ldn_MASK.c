
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct niu_parent {int* ldg_map; } ;
struct niu {int port; int device; TYPE_1__* parent; } ;
struct TYPE_2__ {scalar_t__ plat_type; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,int ,int,int,unsigned long long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct niu *VAR_5, struct niu_parent *VAR_6,
         int VAR_7, int VAR_8)
{
 if (VAR_7 < VAR_3 || VAR_7 > VAR_2)
  return -VAR_0;
 if (VAR_8 < 0 || VAR_8 > VAR_1)
  return -VAR_0;

 VAR_6->ldg_map[VAR_8] = VAR_7;

 if (VAR_5->parent->plat_type == VAR_4) {





  if (FUNC_2(FUNC_0(VAR_8)) != VAR_7) {
   FUNC_1(VAR_5->device, "Port %u, mis-matched LDG assignment for ldn %d, should be %d is %llu\n",
    VAR_5->port, VAR_8, VAR_7,
    (unsigned long long) FUNC_2(FUNC_0(VAR_8)));
   return -VAR_0;
  }
 } else
  FUNC_3(FUNC_0(VAR_8), VAR_7);

 return 0;
}
