
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct cpmac_priv {int regs; int napi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*,char*,int) ;
 struct cpmac_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct cpmac_priv*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_8, void *VAR_9)
{
 struct net_device *VAR_10 = VAR_9;
 struct cpmac_priv *VAR_11;
 int VAR_12;
 u32 VAR_13;

 VAR_11 = FUNC_7(VAR_10);

 VAR_13 = FUNC_3(VAR_11->regs, VAR_1);

 if (FUNC_9(FUNC_8(VAR_11)))
  FUNC_6(VAR_10, "interrupt status: 0x%08x\n", VAR_13);

 if (VAR_13 & VAR_7)
  FUNC_2(VAR_10, (VAR_13 & 7));

 if (VAR_13 & VAR_5) {
  VAR_12 = (VAR_13 >> 8) & 7;
  if (FUNC_5(&VAR_11->napi)) {
   FUNC_4(VAR_11->regs, VAR_2, 1 << VAR_12);
   FUNC_0(&VAR_11->napi);
  }
 }

 FUNC_4(VAR_11->regs, VAR_0, 0);

 if (FUNC_9(VAR_13 & (VAR_4 | VAR_6)))
  FUNC_1(VAR_10);

 return VAR_3;
}
