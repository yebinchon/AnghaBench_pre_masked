
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_ring {int dummy; } ;
struct tun_file {struct ptr_ring tx_ring; } ;
struct file {struct tun_file* private_data; int * f_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ptr_ring* FUNC_0 (int ) ;
 int VAR_2 ;

struct ptr_ring *FUNC_1(struct file *VAR_3)
{
 struct tun_file *VAR_4;

 if (VAR_3->f_op != &VAR_2)
  return FUNC_0(-VAR_1);
 VAR_4 = VAR_3->private_data;
 if (!VAR_4)
  return FUNC_0(-VAR_0);
 return &VAR_4->tx_ring;
}
