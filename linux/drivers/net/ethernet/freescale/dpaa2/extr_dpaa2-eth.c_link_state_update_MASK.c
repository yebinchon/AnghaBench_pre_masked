
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpni_link_state {int options; scalar_t__ up; int member_0; } ;
struct dpaa2_eth_priv {struct dpni_link_state link_state; int net_dev; int mc_token; int mc_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dpaa2_eth_priv*,int) ;
 int FUNC_1 (int ,int ,int ,struct dpni_link_state*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct dpaa2_eth_priv*) ;

__attribute__((used)) static int FUNC_10(struct dpaa2_eth_priv *VAR_2)
{
 struct dpni_link_state VAR_3 = {0};
 bool VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2->mc_io, 0, VAR_2->mc_token, &VAR_3);
 if (FUNC_8(VAR_5)) {
  FUNC_2(VAR_2->net_dev,
      "dpni_get_link_state() failed\n");
  return VAR_5;
 }





 VAR_4 = !!(VAR_3.options & VAR_1) ^
     !!(VAR_3.options & VAR_0);
 FUNC_0(VAR_2, !VAR_4);


 if (VAR_2->link_state.up == VAR_3.up)
  goto out;

 if (VAR_3.up) {
  FUNC_9(VAR_2);
  FUNC_5(VAR_2->net_dev);
  FUNC_6(VAR_2->net_dev);
 } else {
  FUNC_7(VAR_2->net_dev);
  FUNC_4(VAR_2->net_dev);
 }

 FUNC_3(VAR_2->net_dev, "Link Event: state %s\n",
      VAR_3.up ? "up" : "down");

out:
 VAR_2->link_state = VAR_3;

 return 0;
}
