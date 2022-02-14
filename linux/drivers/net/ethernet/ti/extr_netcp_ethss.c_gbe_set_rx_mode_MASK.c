
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gbe_priv {int num_slaves; int dev; int ale_ports; struct cpsw_ale* ale; } ;
struct gbe_intf {struct gbe_priv* gbe_dev; } ;
struct cpsw_ale {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_1 (struct cpsw_ale*,int ,int ) ;
 int FUNC_2 (struct cpsw_ale*,int,int ,int) ;
 int FUNC_3 (struct cpsw_ale*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 unsigned long VAR_6 ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_7(void *VAR_7, bool VAR_8)
{
 struct gbe_intf *VAR_9 = VAR_7;
 struct gbe_priv *VAR_10 = VAR_9->gbe_dev;
 struct cpsw_ale *VAR_11 = VAR_10->ale;
 unsigned long VAR_12;
 int VAR_13, VAR_14 = -VAR_4;




 for (VAR_13 = 0; VAR_13 <= VAR_10->num_slaves; VAR_13++) {
  FUNC_2(VAR_11, VAR_13,
         VAR_2, !!VAR_8);
  FUNC_2(VAR_11, VAR_13,
         VAR_3, !!VAR_8);
 }

 if (!VAR_8) {

  FUNC_2(VAR_11, 0, VAR_1, 0);
  FUNC_5(VAR_10->dev, "promiscuous mode disabled\n");
  return 0;
 }

 VAR_12 = VAR_6 + VAR_5;


 FUNC_2(VAR_11, 0, VAR_0, 1);
 do {
  FUNC_4();
  if (FUNC_1(VAR_11, 0, VAR_0)) {
   VAR_14 = 0;
   break;
  }

 } while (FUNC_6(VAR_12, VAR_6));


 if (VAR_14 && !FUNC_1(VAR_11, 0, VAR_0))
  return VAR_14;

 FUNC_2(VAR_11, 0, VAR_0, 1);


 FUNC_3(VAR_11,
     FUNC_0(VAR_10->ale_ports),
     -1);


 FUNC_2(VAR_11, 0, VAR_1, 1);
 FUNC_5(VAR_10->dev, "promiscuous mode enabled\n");
 return VAR_14;
}
