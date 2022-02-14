
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct prev_params {int brightness; int update; } ;
struct TYPE_2__ {int active; int lock; struct prev_params* params; } ;
struct isp_prev_device {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_2(struct isp_prev_device *VAR_2, u8 VAR_3)
{
 struct prev_params *VAR_4;
 unsigned long VAR_5;

 FUNC_0(&VAR_2->params.lock, VAR_5);
 VAR_4 = (VAR_2->params.active & VAR_1)
        ? &VAR_2->params.params[0] : &VAR_2->params.params[1];

 if (VAR_4->brightness != (VAR_3 * VAR_0)) {
  VAR_4->brightness = VAR_3 * VAR_0;
  VAR_4->update |= VAR_1;
 }
 FUNC_1(&VAR_2->params.lock, VAR_5);
}
