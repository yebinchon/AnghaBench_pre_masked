
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct dpaa2_fd {int dummy; } ;
struct dpaa2_faead {scalar_t__ conf_fqid; int ctrl; } ;
struct dpaa2_eth_priv {int (* enqueue ) (struct dpaa2_eth_priv*,struct dpaa2_eth_fq*,struct dpaa2_fd*,int ) ;struct dpaa2_eth_fq* fq; } ;
struct dpaa2_eth_fq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct dpaa2_fd*) ;
 int FUNC_2 (struct dpaa2_fd*,int ) ;
 int FUNC_3 (struct dpaa2_fd*,int) ;
 struct dpaa2_faead* FUNC_4 (void*,int) ;
 int FUNC_5 (struct dpaa2_eth_priv*,struct dpaa2_eth_fq*,struct dpaa2_fd*,int ) ;

__attribute__((used)) static int FUNC_6(struct dpaa2_eth_priv *VAR_7, struct dpaa2_fd *VAR_8,
         void *VAR_9, u16 VAR_10)
{
 struct dpaa2_eth_fq *VAR_11;
 struct dpaa2_faead *VAR_12;
 u32 VAR_13, VAR_14;
 int VAR_15, VAR_16;


 VAR_14 = FUNC_1(VAR_8);
 FUNC_3(VAR_8, VAR_14 | VAR_5);
 FUNC_2(VAR_8, VAR_4);





 VAR_13 = VAR_2 | VAR_1 | VAR_3;
 VAR_12 = FUNC_4(VAR_9, 0);
 VAR_12->ctrl = FUNC_0(VAR_13);
 VAR_12->conf_fqid = 0;

 VAR_11 = &VAR_7->fq[VAR_10];
 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
  VAR_16 = VAR_7->enqueue(VAR_7, VAR_11, VAR_8, 0);
  if (VAR_16 != -VAR_6)
   break;
 }

 return VAR_16;
}
