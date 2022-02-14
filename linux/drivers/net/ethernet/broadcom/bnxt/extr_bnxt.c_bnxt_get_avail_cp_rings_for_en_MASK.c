
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int flags; unsigned int rx_nr_rings; unsigned int tx_nr_rings; unsigned int cp_nr_rings; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct bnxt*) ;

unsigned int FUNC_1(struct bnxt *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_1->flags & VAR_0)
  return VAR_2 - VAR_1->rx_nr_rings - VAR_1->tx_nr_rings;
 else
  return VAR_2 - VAR_1->cp_nr_rings;
}
