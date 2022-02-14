
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netsec_priv {int napi; int reglock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct netsec_priv*,int ) ;
 int FUNC_2 (struct netsec_priv*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_7, void *VAR_8)
{
 struct netsec_priv *VAR_9 = VAR_8;
 u32 VAR_10, VAR_11 = FUNC_1(VAR_9, VAR_6);
 unsigned long VAR_12;


 if (VAR_11 & VAR_2) {
  VAR_10 = FUNC_1(VAR_9, VAR_5);
  FUNC_2(VAR_9, VAR_5, VAR_10);
 }
 if (VAR_11 & VAR_1) {
  VAR_10 = FUNC_1(VAR_9, VAR_4);
  FUNC_2(VAR_9, VAR_4, VAR_10);
 }

 FUNC_3(&VAR_9->reglock, VAR_12);
 FUNC_2(VAR_9, VAR_3, VAR_1 | VAR_2);
 FUNC_4(&VAR_9->reglock, VAR_12);

 FUNC_0(&VAR_9->napi);

 return VAR_0;
}
