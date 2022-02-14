
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct tb_xdomain {scalar_t__ transmit_path; int lock; int tb; scalar_t__ receive_ring; scalar_t__ receive_path; scalar_t__ transmit_ring; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct tb_xdomain*) ;

int FUNC_3(struct tb_xdomain *VAR_1, u16 VAR_2,
       u16 VAR_3, u16 VAR_4,
       u16 VAR_5)
{
 int VAR_6;

 FUNC_0(&VAR_1->lock);

 if (VAR_1->transmit_path) {
  VAR_6 = VAR_1->transmit_path == VAR_2 ? 0 : -VAR_0;
  goto exit_unlock;
 }

 VAR_1->transmit_path = VAR_2;
 VAR_1->transmit_ring = VAR_3;
 VAR_1->receive_path = VAR_4;
 VAR_1->receive_ring = VAR_5;

 VAR_6 = FUNC_2(VAR_1->tb, VAR_1);

exit_unlock:
 FUNC_1(&VAR_1->lock);

 return VAR_6;
}
