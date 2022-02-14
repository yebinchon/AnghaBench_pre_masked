
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vsp1_device {TYPE_1__* info; } ;
struct TYPE_2__ {unsigned int wpf_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct vsp1_device*,int ) ;
 int FUNC_2 (struct vsp1_device*,int ,int) ;

void FUNC_3(struct vsp1_device *VAR_12)
{
 unsigned int VAR_13;
 u32 VAR_14 = (256 << VAR_1)
   | VAR_4 | VAR_3 | VAR_2
   | VAR_5;
 u32 VAR_15 = (0x02 << VAR_8)
     | VAR_6 | VAR_7;

 if (FUNC_1(VAR_12, VAR_11)) {
  for (VAR_13 = 0; VAR_13 < VAR_12->info->wpf_count; ++VAR_13)
   FUNC_2(VAR_12, FUNC_0(VAR_13), VAR_15);
 }

 FUNC_2(VAR_12, VAR_0, VAR_14);
 FUNC_2(VAR_12, VAR_9, VAR_10);
}
