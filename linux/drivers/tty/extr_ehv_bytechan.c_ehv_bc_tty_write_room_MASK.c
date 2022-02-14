
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct ehv_bc_data* driver_data; } ;
struct ehv_bc_data {int lock; int tail; int head; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_1)
{
 struct ehv_bc_data *VAR_2 = VAR_1->driver_data;
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&VAR_2->lock, VAR_3);
 VAR_4 = FUNC_0(VAR_2->head, VAR_2->tail, VAR_0);
 FUNC_2(&VAR_2->lock, VAR_3);

 return VAR_4;
}
