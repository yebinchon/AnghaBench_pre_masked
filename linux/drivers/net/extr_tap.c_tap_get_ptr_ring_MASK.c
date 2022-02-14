
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_ring {int dummy; } ;
struct tap_queue {struct ptr_ring ring; } ;
struct file {struct tap_queue* private_data; int * f_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ptr_ring* FUNC_0 (int ) ;
 int VAR_2 ;

struct ptr_ring *FUNC_1(struct file *VAR_3)
{
 struct tap_queue *VAR_4;

 if (VAR_3->f_op != &VAR_2)
  return FUNC_0(-VAR_1);
 VAR_4 = VAR_3->private_data;
 if (!VAR_4)
  return FUNC_0(-VAR_0);
 return &VAR_4->ring;
}
