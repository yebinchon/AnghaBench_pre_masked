
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct knav_acc_info {int mem_size; } ;
struct knav_range_info {int flags; int num_queues; struct knav_acc_channel* acc; struct knav_device* kdev; struct knav_acc_info acc_info; } ;
struct knav_device {int dev; } ;
struct knav_acc_channel {int * list_cpu; int * list_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct knav_acc_channel*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct knav_range_info *VAR_2)
{
 struct knav_device *VAR_3 = VAR_2->kdev;
 struct knav_acc_channel *VAR_4;
 struct knav_acc_info *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = &VAR_2->acc_info;

 if (VAR_2->flags & VAR_1)
  VAR_7 = 1;
 else
  VAR_7 = VAR_2->num_queues;

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_4 = VAR_2->acc + VAR_6;
  if (!VAR_4->list_cpu[0])
   continue;
  FUNC_1(VAR_3->dev, VAR_4->list_dma[0],
     VAR_5->mem_size, VAR_0);
  FUNC_2(VAR_4->list_cpu[0], VAR_5->mem_size);
 }
 FUNC_0(VAR_2->kdev->dev, VAR_2->acc);
 return 0;
}
