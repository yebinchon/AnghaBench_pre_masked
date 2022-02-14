
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kioctx {struct file* aio_ring_file; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {int private_lock; int * private_data; } ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct kioctx *VAR_0)
{
 struct file *VAR_1 = VAR_0->aio_ring_file;
 struct address_space *VAR_2;

 if (VAR_1) {
  FUNC_4(FUNC_0(VAR_1), 0);


  VAR_2 = VAR_1->f_mapping;
  FUNC_2(&VAR_2->private_lock);
  VAR_2->private_data = ((void*)0);
  VAR_0->aio_ring_file = ((void*)0);
  FUNC_3(&VAR_2->private_lock);

  FUNC_1(VAR_1);
 }
}
