
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct seq_file {struct fimc_is* private; } ;
struct TYPE_3__ {int * vaddr; } ;
struct fimc_is {TYPE_2__* pdev; TYPE_1__ memory; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct seq_file*,char*,int const*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_2, void *VAR_3)
{
 struct fimc_is *VAR_4 = VAR_2->private;
 const u8 *VAR_5 = VAR_4->memory.vaddr + VAR_1;

 if (VAR_4->memory.vaddr == ((void*)0)) {
  FUNC_0(&VAR_4->pdev->dev, "firmware memory is not initialized\n");
  return -VAR_0;
 }

 FUNC_1(VAR_2, "%s\n", VAR_5);
 return 0;
}
