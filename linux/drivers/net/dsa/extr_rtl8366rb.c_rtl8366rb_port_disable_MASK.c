
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct realtek_smi {int map; int dev; } ;
struct dsa_switch {struct realtek_smi* priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct realtek_smi*,int,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct dsa_switch *VAR_1, int VAR_2)
{
 struct realtek_smi *VAR_3 = VAR_1->priv;
 int VAR_4;

 FUNC_1(VAR_3->dev, "disable port %d\n", VAR_2);
 VAR_4 = FUNC_3(VAR_3->map, VAR_0, FUNC_0(VAR_2),
     FUNC_0(VAR_2));
 if (VAR_4)
  return;

 FUNC_2(VAR_3, VAR_2, 0);
}
