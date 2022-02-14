
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct prism2_download_aux_dump* private; } ;
struct prism2_download_aux_dump {TYPE_1__* local; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_1, loff_t *VAR_2)
{
 struct prism2_download_aux_dump *VAR_3 = VAR_1->private;
 FUNC_0(VAR_3->local->dev, 1);
 if (*VAR_2 >= VAR_0)
  return ((void*)0);
 return (void *)((unsigned long)*VAR_2 + 1);
}
