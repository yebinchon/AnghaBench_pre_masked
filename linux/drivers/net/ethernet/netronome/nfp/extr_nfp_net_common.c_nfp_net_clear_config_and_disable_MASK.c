
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ctrl; unsigned int num_rx_rings; unsigned int num_tx_rings; unsigned int num_r_vecs; int * tx_rings; int * rx_rings; } ;
struct nfp_net {int cap; TYPE_1__ dp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nfp_net*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (struct nfp_net*,unsigned int) ;
 int FUNC_4 (struct nfp_net*,char*,int) ;
 int FUNC_5 (struct nfp_net*,int ,int) ;
 int FUNC_6 (struct nfp_net*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct nfp_net *VAR_8)
{
 u32 VAR_9, VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 VAR_9 = VAR_8->dp.ctrl;
 VAR_9 &= ~VAR_1;
 VAR_10 = VAR_5;
 VAR_10 |= VAR_6;
 VAR_10 |= VAR_7;

 if (VAR_8->cap & VAR_2)
  VAR_9 &= ~VAR_2;

 FUNC_6(VAR_8, VAR_4, 0);
 FUNC_6(VAR_8, VAR_3, 0);

 FUNC_5(VAR_8, VAR_0, VAR_9);
 VAR_12 = FUNC_0(VAR_8, VAR_10);
 if (VAR_12)
  FUNC_4(VAR_8, "Could not disable device: %d\n", VAR_12);

 for (VAR_11 = 0; VAR_11 < VAR_8->dp.num_rx_rings; VAR_11++)
  FUNC_1(&VAR_8->dp.rx_rings[VAR_11]);
 for (VAR_11 = 0; VAR_11 < VAR_8->dp.num_tx_rings; VAR_11++)
  FUNC_2(&VAR_8->dp, &VAR_8->dp.tx_rings[VAR_11]);
 for (VAR_11 = 0; VAR_11 < VAR_8->dp.num_r_vecs; VAR_11++)
  FUNC_3(VAR_8, VAR_11);

 VAR_8->dp.ctrl = VAR_9;
}
