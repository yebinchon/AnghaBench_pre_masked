
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_camera_dev {int task_eof; scalar_t__ base; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 int FUNC_2 (int ,char*,unsigned long) ;
 int FUNC_3 (struct pxa_camera_dev*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct pxa_camera_dev *VAR_8 = VAR_7;
 unsigned long VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_8->base + VAR_2);
 FUNC_2(FUNC_3(VAR_8),
  "Camera interrupt status 0x%lx\n", VAR_9);

 if (!VAR_9)
  return VAR_5;

 FUNC_1(VAR_9, VAR_8->base + VAR_2);

 if (VAR_9 & VAR_3) {
  VAR_10 = FUNC_0(VAR_8->base + VAR_0) | VAR_1;
  FUNC_1(VAR_10, VAR_8->base + VAR_0);
  FUNC_4(&VAR_8->task_eof);
 }

 return VAR_4;
}
