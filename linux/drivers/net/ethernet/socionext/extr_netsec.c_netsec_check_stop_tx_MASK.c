
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netsec_priv {int ndev; struct netsec_desc_ring* desc_ring; } ;
struct netsec_desc_ring {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct netsec_desc_ring*) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct netsec_priv *VAR_3, int VAR_4)
{
 struct netsec_desc_ring *VAR_5 = &VAR_3->desc_ring[VAR_2];


 if (VAR_0 - VAR_4 < 2) {
  FUNC_0(VAR_3->ndev);




  FUNC_3();

  VAR_4 = FUNC_2(VAR_5);
  if (VAR_0 - VAR_4 < 2)
   return VAR_1;

  FUNC_1(VAR_3->ndev);
 }

 return 0;
}
