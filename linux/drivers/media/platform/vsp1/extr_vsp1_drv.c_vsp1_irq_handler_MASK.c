
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int pipe; } ;
struct vsp1_rwpf {TYPE_1__ entity; } ;
struct vsp1_device {struct vsp1_rwpf** wpf; TYPE_2__* info; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {unsigned int wpf_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vsp1_device*,int ) ;
 int FUNC_3 (struct vsp1_device*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 u32 VAR_6 = VAR_2 | VAR_3;
 struct vsp1_device *VAR_7 = VAR_5;
 irqreturn_t VAR_8 = VAR_1;
 unsigned int VAR_9;
 u32 VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_7->info->wpf_count; ++VAR_9) {
  struct vsp1_rwpf *VAR_11 = VAR_7->wpf[VAR_9];

  if (VAR_11 == ((void*)0))
   continue;

  VAR_10 = FUNC_2(VAR_7, FUNC_0(VAR_9));
  FUNC_3(VAR_7, FUNC_0(VAR_9), ~VAR_10 & VAR_6);

  if (VAR_10 & VAR_2) {
   FUNC_1(VAR_11->entity.pipe);
   VAR_8 = VAR_0;
  }
 }

 return VAR_8;
}
