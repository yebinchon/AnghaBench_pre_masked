
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scif_endpt {scalar_t__ files; int lock; } ;
struct file {struct scif_endpt* private_data; } ;
typedef scalar_t__ fl_owner_t ;


 int FUNC_0 (struct scif_endpt*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, fl_owner_t VAR_1)
{
 struct scif_endpt *VAR_2 = VAR_0->private_data;

 FUNC_1(&VAR_2->lock);
 if (VAR_2->files == VAR_1)
  FUNC_0(VAR_2);
 FUNC_2(&VAR_2->lock);
 return 0;
}
