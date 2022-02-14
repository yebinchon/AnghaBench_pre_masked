
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int flags; int tx_nr_rings; int rx_nr_rings; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt*) ;

__attribute__((used)) static int FUNC_1(struct bnxt *VAR_1)
{
 int VAR_2;

 if (!(VAR_1->flags & VAR_0))
  return FUNC_0(VAR_1);

 VAR_2 = VAR_1->tx_nr_rings + VAR_1->rx_nr_rings;
 return VAR_2;
}
