
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdio_q {int nr; int * debugfs_q; TYPE_1__* irq_ptr; scalar_t__ is_input_q; } ;
struct TYPE_2__ {int debugfs_dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (char*,int,int ,struct qdio_q*,int *) ;
 int VAR_1 ;
 int FUNC_2 (char*,int,char*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct qdio_q *VAR_2)
{
 char VAR_3[VAR_0];

 FUNC_2(VAR_3, VAR_0, "%s_%d",
   VAR_2->is_input_q ? "input" : "output",
   VAR_2->nr);
 VAR_2->debugfs_q = FUNC_1(VAR_3, 0444,
    VAR_2->irq_ptr->debugfs_dev, VAR_2, &VAR_1);
 if (FUNC_0(VAR_2->debugfs_q))
  VAR_2->debugfs_q = ((void*)0);
}
