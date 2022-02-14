
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct knav_range_info {unsigned int queue_base; unsigned int acc; int flags; TYPE_1__* kdev; } ;
struct knav_queue_inst {unsigned int id; unsigned int acc; int descs; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct knav_range_info *VAR_4,
    struct knav_queue_inst *VAR_5)
{
 unsigned VAR_6 = VAR_5->id - VAR_4->queue_base;

 VAR_5->descs = FUNC_0(VAR_4->kdev->dev,
     VAR_0, sizeof(u32), VAR_2);
 if (!VAR_5->descs)
  return -VAR_1;

 VAR_5->acc = VAR_4->acc;
 if ((VAR_4->flags & VAR_3) == 0)
  VAR_5->acc += VAR_6;
 return 0;
}
