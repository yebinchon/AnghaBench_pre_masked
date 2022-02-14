
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mpi_msg_hdr {int dummy; } ;
struct inbound_queue_table {int producer_idx; scalar_t__ base_virt; int consumer_index; int ci_virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct inbound_queue_table *VAR_2,
       u16 VAR_3, void **VAR_4)
{
 u32 VAR_5, VAR_6;
 struct mpi_msg_hdr *VAR_7;
 u8 VAR_8 = 1;


 if (VAR_3 > VAR_0) {
  *VAR_4 = ((void*)0);
  return -1;
 }


 VAR_6 = FUNC_2(VAR_2->ci_virt);
 VAR_2->consumer_index = FUNC_0(VAR_6);
 if (((VAR_2->producer_idx + VAR_8) % VAR_1) ==
  FUNC_1(VAR_2->consumer_index)) {
  *VAR_4 = ((void*)0);
  return -1;
 }

 VAR_5 = VAR_2->producer_idx * VAR_3;

 VAR_2->producer_idx = (VAR_2->producer_idx + VAR_8)
    % VAR_1;


 VAR_7 = (struct mpi_msg_hdr *)(VAR_2->base_virt + VAR_5);
 *VAR_4 = ((void *)VAR_7) + sizeof(struct mpi_msg_hdr);
 return 0;
}
