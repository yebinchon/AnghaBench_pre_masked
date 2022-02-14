
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan9303 {int dev; } ;
struct dsa_switch {struct lan9303* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct dsa_switch*,int ) ;
 int FUNC_3 (struct lan9303*,int ) ;
 int FUNC_4 (struct lan9303*) ;
 int FUNC_5 (struct lan9303*) ;
 int FUNC_6 (struct lan9303*,int ,int,int) ;

__attribute__((used)) static int FUNC_7(struct dsa_switch *VAR_3)
{
 struct lan9303 *VAR_4 = VAR_3->priv;
 int VAR_5;


 if (!FUNC_2(VAR_3, 0)) {
  FUNC_1(VAR_4->dev, "port 0 is not the CPU port\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5)
  FUNC_1(VAR_4->dev, "failed to setup port tagging %d\n", VAR_5);

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5)
  FUNC_1(VAR_4->dev, "failed to separate ports %d\n", VAR_5);

 VAR_5 = FUNC_3(VAR_4, 0);
 if (VAR_5)
  FUNC_1(VAR_4->dev, "failed to re-enable switching %d\n", VAR_5);


 VAR_5 = FUNC_6(VAR_4, VAR_1,
         VAR_2 |
         FUNC_0(0),
         FUNC_0(1) |
         FUNC_0(2));
 if (VAR_5)
  FUNC_1(VAR_4->dev, "failed to setup IGMP trap %d\n", VAR_5);

 return 0;
}
