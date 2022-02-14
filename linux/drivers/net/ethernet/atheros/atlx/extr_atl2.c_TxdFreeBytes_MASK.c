
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl2_adapter {int txd_write_ptr; int txd_ring_size; int txd_read_ptr; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct atl2_adapter *VAR_0)
{
 u32 VAR_1 = (u32)FUNC_0(&VAR_0->txd_read_ptr);

 return (VAR_0->txd_write_ptr >= VAR_1) ?
  (int) (VAR_0->txd_ring_size - VAR_0->txd_write_ptr +
  VAR_1 - 1) :
  (int) (VAR_1 - VAR_0->txd_write_ptr - 1);
}
