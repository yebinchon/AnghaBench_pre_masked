
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_port {int nrxqs; int first_rxq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;

__attribute__((used)) static inline u32 FUNC_2(struct mvpp2_port *VAR_0, u32 VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = FUNC_1();


 VAR_2 = VAR_0->nrxqs / VAR_4;


 VAR_3 = VAR_1 / VAR_2;

 if (!FUNC_0(VAR_3))
  return VAR_0->first_rxq;




 return VAR_0->first_rxq + ((VAR_1 * VAR_2 + VAR_1 / VAR_4) % VAR_0->nrxqs);
}
