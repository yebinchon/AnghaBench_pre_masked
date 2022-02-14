
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge {int fl_pg_order; } ;
struct rx_sw_desc {int dma_addr; } ;
struct adapter {struct sge sge; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(const struct adapter *VAR_2,
          const struct rx_sw_desc *VAR_3)
{
 const struct sge *VAR_4 = &VAR_2->sge;

 return (VAR_4->fl_pg_order > 0 && (VAR_3->dma_addr & VAR_1)
  ? (VAR_0 << VAR_4->fl_pg_order) : VAR_0);
}
