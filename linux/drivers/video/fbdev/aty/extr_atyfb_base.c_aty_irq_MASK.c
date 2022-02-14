
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int wait; scalar_t__ pan_display; int count; } ;
struct TYPE_3__ {int off_pitch; } ;
struct atyfb_par {int int_lock; TYPE_2__ vblank; TYPE_1__ crtc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct atyfb_par*) ;
 int FUNC_2 (int ,int,struct atyfb_par*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct atyfb_par *VAR_7 = VAR_6;
 int VAR_8 = 0;
 u32 VAR_9;

 FUNC_3(&VAR_7->int_lock);

 VAR_9 = FUNC_1(VAR_0, VAR_7);

 if (VAR_9 & VAR_3) {

  FUNC_2(VAR_0, (VAR_9 & VAR_1) |
       VAR_4, VAR_7);
  VAR_7->vblank.count++;
  if (VAR_7->vblank.pan_display) {
   VAR_7->vblank.pan_display = 0;
   FUNC_2(VAR_2, VAR_7->crtc.off_pitch, VAR_7);
  }
  FUNC_5(&VAR_7->vblank.wait);
  VAR_8 = 1;
 }

 FUNC_4(&VAR_7->int_lock);

 return FUNC_0(VAR_8);
}
