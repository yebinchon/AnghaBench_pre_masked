
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpsw_slave {int dummy; } ;
struct cpsw_priv {int ndev; int mqprio_hw; struct cpsw_common* cpsw; } ;
struct cpsw_common {scalar_t__ version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct cpsw_slave*,int,int) ;

__attribute__((used)) static void FUNC_2(struct cpsw_slave *VAR_4, struct cpsw_priv *VAR_5)
{
 struct cpsw_common *VAR_6 = VAR_5->cpsw;
 u32 VAR_7 = 0;
 int VAR_8, VAR_9, VAR_10;
 u32 VAR_11;

 if (!VAR_5->mqprio_hw)
  return;

 for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
  VAR_9 = FUNC_0(VAR_5->ndev, VAR_8);
  VAR_10 = VAR_2 - VAR_9;
  VAR_7 |= VAR_10 << (4 * VAR_8);
 }

 VAR_11 = VAR_6->version == VAR_3 ?
       VAR_0 : VAR_1;

 FUNC_1(VAR_4, VAR_7, VAR_11);
}
