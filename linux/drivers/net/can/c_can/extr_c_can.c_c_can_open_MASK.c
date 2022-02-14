
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; int name; } ;
struct c_can_priv {int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct c_can_priv*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct c_can_priv*) ;
 int FUNC_2 (struct c_can_priv*) ;
 int FUNC_3 (struct c_can_priv*,int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,struct net_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct net_device*,char*) ;
 struct c_can_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ,int *,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_3)
{
 int VAR_4;
 struct c_can_priv *VAR_5 = FUNC_10(VAR_3);

 FUNC_1(VAR_5);
 FUNC_3(VAR_5, 1);


 VAR_4 = FUNC_12(VAR_3);
 if (VAR_4) {
  FUNC_9(VAR_3, "failed to open can device\n");
  goto exit_open_fail;
 }


 VAR_4 = FUNC_13(VAR_3->irq, &VAR_2, VAR_1, VAR_3->name,
    VAR_3);
 if (VAR_4 < 0) {
  FUNC_9(VAR_3, "failed to request interrupt\n");
  goto exit_irq_fail;
 }


 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4)
  goto exit_start_fail;

 FUNC_5(VAR_3, VAR_0);

 FUNC_8(&VAR_5->napi);

 FUNC_0(VAR_5, 1);
 FUNC_11(VAR_3);

 return 0;

exit_start_fail:
 FUNC_7(VAR_3->irq, VAR_3);
exit_irq_fail:
 FUNC_6(VAR_3);
exit_open_fail:
 FUNC_3(VAR_5, 0);
 FUNC_2(VAR_5);
 return VAR_4;
}
