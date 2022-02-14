
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {size_t start; int end; int flags; } ;
struct mfd_cell {int id; int num_resources; struct resource* resources; int name; scalar_t__ pdata_size; int * platform_data; } ;
struct kp2000_device {int card_num; int dma_base_resource; } ;
typedef int resources ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kp2000_device*) ;
 int FUNC_1 (struct resource**,int ,int) ;
 int FUNC_2 (int ,int,struct mfd_cell*,int,int *,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct kp2000_device *VAR_4, size_t VAR_5, int VAR_6, int VAR_7)
{
 struct mfd_cell VAR_8 = { .id = VAR_6 };
 struct resource VAR_9[2];

 VAR_8.platform_data = ((void*)0);
 VAR_8.pdata_size = 0;
 VAR_8.name = VAR_3;
 VAR_8.num_resources = 2;

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));

 VAR_9[0].start = VAR_5;
 VAR_9[0].end = VAR_5 + (VAR_2 - 1);
 VAR_9[0].flags = VAR_1;

 VAR_9[1].start = VAR_7;
 VAR_9[1].end = VAR_7;
 VAR_9[1].flags = VAR_0;

 VAR_8.resources = VAR_9;

 return FUNC_2(FUNC_0(VAR_4),
          VAR_4->card_num * 100,
          &VAR_8,
          1,
          &VAR_4->dma_base_resource,
          0,
          ((void*)0));
}
