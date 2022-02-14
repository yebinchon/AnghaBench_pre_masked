
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsp1_device {TYPE_1__* info; } ;
struct TYPE_2__ {unsigned int wpf_count; unsigned int rpf_count; unsigned int uds_count; unsigned int uif_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (unsigned int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_15 ;
 int FUNC_3 (struct vsp1_device*) ;
 scalar_t__ FUNC_4 (struct vsp1_device*,int ) ;
 int FUNC_5 (struct vsp1_device*,unsigned int) ;
 int FUNC_6 (struct vsp1_device*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct vsp1_device *VAR_16)
{
 unsigned int VAR_17;
 int VAR_18;


 for (VAR_17 = 0; VAR_17 < VAR_16->info->wpf_count; ++VAR_17) {
  VAR_18 = FUNC_5(VAR_16, VAR_17);
  if (VAR_18 < 0)
   return VAR_18;
 }

 FUNC_6(VAR_16, VAR_0, (8 << VAR_1) |
     (8 << VAR_2));

 for (VAR_17 = 0; VAR_17 < VAR_16->info->rpf_count; ++VAR_17)
  FUNC_6(VAR_16, FUNC_0(VAR_17), VAR_11);

 for (VAR_17 = 0; VAR_17 < VAR_16->info->uds_count; ++VAR_17)
  FUNC_6(VAR_16, FUNC_1(VAR_17), VAR_11);

 for (VAR_17 = 0; VAR_17 < VAR_16->info->uif_count; ++VAR_17)
  FUNC_6(VAR_16, FUNC_2(VAR_17), VAR_11);

 FUNC_6(VAR_16, VAR_14, VAR_11);
 FUNC_6(VAR_16, VAR_10, VAR_11);
 FUNC_6(VAR_16, VAR_4, VAR_11);
 FUNC_6(VAR_16, VAR_8, VAR_11);
 FUNC_6(VAR_16, VAR_7, VAR_11);
 FUNC_6(VAR_16, VAR_3, VAR_11);

 if (FUNC_4(VAR_16, VAR_15))
  FUNC_6(VAR_16, VAR_9, VAR_11);

 FUNC_6(VAR_16, VAR_5, (7 << VAR_13) |
     (VAR_11 << VAR_12));
 FUNC_6(VAR_16, VAR_6, (7 << VAR_13) |
     (VAR_11 << VAR_12));

 FUNC_3(VAR_16);

 return 0;
}
