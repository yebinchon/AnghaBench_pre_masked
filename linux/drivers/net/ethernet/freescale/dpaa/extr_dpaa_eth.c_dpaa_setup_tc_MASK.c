
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tc_mqprio_qopt {int num_tc; int hw; } ;
struct net_device {int dummy; } ;
struct dpaa_priv {int num_tc; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,char*,int) ;
 struct dpaa_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*,int,int,int) ;
 int FUNC_5 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_6, enum tc_setup_type VAR_7,
    void *VAR_8)
{
 struct dpaa_priv *VAR_9 = FUNC_1(VAR_6);
 struct tc_mqprio_qopt *VAR_10 = VAR_8;
 u8 VAR_11;
 int VAR_12;

 if (VAR_7 != VAR_5)
  return -VAR_3;

 VAR_10->hw = VAR_4;
 VAR_11 = VAR_10->num_tc;

 if (VAR_11 == VAR_9->num_tc)
  return 0;

 if (!VAR_11) {
  FUNC_2(VAR_6);
  goto out;
 }

 if (VAR_11 > VAR_0) {
  FUNC_0(VAR_6, "Too many traffic classes: max %d supported.\n",
      VAR_0);
  return -VAR_2;
 }

 FUNC_3(VAR_6, VAR_11);

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  FUNC_4(VAR_6, VAR_12, VAR_1,
        VAR_12 * VAR_1);

out:
 VAR_9->num_tc = VAR_11 ? : 1;
 FUNC_5(VAR_6, VAR_9->num_tc * VAR_1);
 return 0;
}
