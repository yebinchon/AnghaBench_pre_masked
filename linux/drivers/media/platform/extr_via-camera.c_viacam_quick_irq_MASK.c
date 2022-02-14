
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via_camera {TYPE_1__* viadev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct via_camera*,int ) ;
 int FUNC_3 (struct via_camera*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct via_camera *VAR_8 = VAR_7;
 irqreturn_t VAR_9 = VAR_0;
 int VAR_10;





 FUNC_0(&VAR_8->viadev->reg_lock);
 VAR_10 = FUNC_2(VAR_8, VAR_5);
 if (VAR_10 & VAR_2) {
  VAR_10 |= VAR_2|VAR_3|VAR_4;
  FUNC_3(VAR_8, VAR_5, VAR_10);
  VAR_9 = VAR_1;
 }
 FUNC_1(&VAR_8->viadev->reg_lock);
 return VAR_9;
}
