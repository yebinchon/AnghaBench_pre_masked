
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sa1100fb_info {TYPE_1__* inf; } ;
struct TYPE_2__ {int (* set_visual ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct sa1100fb_info *VAR_0, u32 VAR_1)
{
 if (VAR_0->inf->set_visual)
  VAR_0->inf->set_visual(VAR_1);
}
