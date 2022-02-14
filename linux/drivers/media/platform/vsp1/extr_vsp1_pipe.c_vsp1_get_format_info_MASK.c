
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vsp1_format_info {int fourcc; } ;
struct vsp1_device {TYPE_1__* info; } ;
struct TYPE_2__ {int gen; } ;


 unsigned int FUNC_0 (struct vsp1_format_info*) ;



 struct vsp1_format_info* VAR_0 ;

const struct vsp1_format_info *FUNC_1(struct vsp1_device *VAR_1,
          u32 VAR_2)
{
 unsigned int VAR_3;


 if (VAR_1->info->gen != 2) {
  switch (VAR_2) {
  case 128:
  case 130:
  case 129:
   return ((void*)0);
  }
 }

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); ++VAR_3) {
  const struct vsp1_format_info *VAR_4 = &VAR_0[VAR_3];

  if (VAR_4->fourcc == VAR_2)
   return VAR_4;
 }

 return ((void*)0);
}
