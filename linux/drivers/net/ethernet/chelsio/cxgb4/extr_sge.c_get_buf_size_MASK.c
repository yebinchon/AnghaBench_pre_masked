
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge {int fl_pg_order; } ;
struct rx_sw_desc {unsigned int dma_addr; } ;
struct adapter {struct sge sge; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;





__attribute__((used)) static inline int FUNC_3(struct adapter *VAR_2,
          const struct rx_sw_desc *VAR_3)
{
 struct sge *VAR_4 = &VAR_2->sge;
 unsigned int VAR_5 = VAR_3->dma_addr & VAR_1;
 int VAR_6;

 switch (VAR_5) {
 case 128:
  VAR_6 = VAR_0;
  break;

 case 130:
  VAR_6 = VAR_0 << VAR_4->fl_pg_order;
  break;

 case 129:
  VAR_6 = FUNC_2(VAR_2);
  break;

 case 131:
  VAR_6 = FUNC_1(VAR_2);
  break;

 default:
  FUNC_0();
 }

 return VAR_6;
}
