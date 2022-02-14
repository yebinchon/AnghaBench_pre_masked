
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_xdomain {int lock; int tb; scalar_t__ receive_ring; scalar_t__ receive_path; scalar_t__ transmit_ring; scalar_t__ transmit_path; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct tb_xdomain*) ;

int FUNC_3(struct tb_xdomain *VAR_0)
{
 int VAR_1 = 0;

 FUNC_0(&VAR_0->lock);
 if (VAR_0->transmit_path) {
  VAR_0->transmit_path = 0;
  VAR_0->transmit_ring = 0;
  VAR_0->receive_path = 0;
  VAR_0->receive_ring = 0;

  VAR_1 = FUNC_2(VAR_0->tb, VAR_0);
 }
 FUNC_1(&VAR_0->lock);

 return VAR_1;
}
