
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct netsec_priv {struct netsec_desc_ring* desc_ring; } ;
struct netsec_desc_ring {int * desc; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct netsec_priv*,struct netsec_desc_ring*,size_t,int *) ;

__attribute__((used)) static void FUNC_1(struct netsec_priv *VAR_2, u16 VAR_3, u16 VAR_4)
{
 struct netsec_desc_ring *VAR_5 = &VAR_2->desc_ring[VAR_1];
 u16 VAR_6 = VAR_3;

 while (VAR_4) {
  FUNC_0(VAR_2, VAR_5, VAR_6, &VAR_5->desc[VAR_6]);
  VAR_6++;
  if (VAR_6 >= VAR_0)
   VAR_6 = 0;
  VAR_4--;
 }
}
