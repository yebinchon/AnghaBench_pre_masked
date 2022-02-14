
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct vfio_platform_device {TYPE_1__* irqs; } ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {int flags; int unmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*,int ,int *,int *,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct vfio_platform_device *VAR_6,
     unsigned VAR_7, unsigned VAR_8,
     unsigned VAR_9, uint32_t VAR_10,
     void *VAR_11)
{
 if (VAR_8 != 0 || VAR_9 != 1)
  return -VAR_0;

 if (!(VAR_6->irqs[VAR_7].flags & VAR_1))
  return -VAR_0;

 if (VAR_10 & VAR_3) {
  int32_t VAR_12 = *(int32_t *)VAR_11;

  if (VAR_12 >= 0)
   return FUNC_2((void *) &VAR_6->irqs[VAR_7],
        VAR_5,
        ((void*)0), ((void*)0),
        &VAR_6->irqs[VAR_7].unmask,
        VAR_12);

  FUNC_1(&VAR_6->irqs[VAR_7].unmask);
  return 0;
 }

 if (VAR_10 & VAR_4) {
  FUNC_0(&VAR_6->irqs[VAR_7]);

 } else if (VAR_10 & VAR_2) {
  uint8_t VAR_13 = *(uint8_t *)VAR_11;

  if (VAR_13)
   FUNC_0(&VAR_6->irqs[VAR_7]);
 }

 return 0;
}
