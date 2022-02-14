
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zs_scc {int zlock; struct zs_port* zport; } ;
struct zs_port {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (struct zs_port*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct zs_port*) ;
 int FUNC_4 (struct zs_port*,struct zs_port*) ;
 int FUNC_5 (struct zs_port*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_11, void *VAR_12)
{
 struct zs_scc *VAR_13 = VAR_12;
 struct zs_port *VAR_14 = &VAR_13->zport[VAR_9];
 struct zs_port *VAR_15 = &VAR_13->zport[VAR_10];
 irqreturn_t VAR_16 = VAR_7;
 u8 VAR_17;
 int VAR_18;
 for (VAR_18 = 16; VAR_18; VAR_18--) {
  FUNC_1(&VAR_13->zlock);
  VAR_17 = FUNC_0(VAR_14, VAR_8);
  FUNC_2(&VAR_13->zlock);
  if (!VAR_17)
   break;






  if (VAR_17 & VAR_4)
   FUNC_3(VAR_15);
  if (VAR_17 & VAR_1)
   FUNC_3(VAR_14);
  if (VAR_17 & VAR_3)
   FUNC_4(VAR_15, VAR_14);
  if (VAR_17 & VAR_0)
   FUNC_4(VAR_14, VAR_14);
  if (VAR_17 & VAR_5)
   FUNC_5(VAR_15);
  if (VAR_17 & VAR_2)
   FUNC_5(VAR_14);

  VAR_16 = VAR_6;
 }

 return VAR_16;
}
