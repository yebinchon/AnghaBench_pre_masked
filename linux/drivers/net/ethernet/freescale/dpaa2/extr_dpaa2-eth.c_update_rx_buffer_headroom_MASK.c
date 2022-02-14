
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpni_buffer_layout {int options; scalar_t__ data_head_room; int member_0; } ;
struct dpaa2_eth_priv {int net_dev; int mc_token; int mc_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dpaa2_eth_priv*) ;
 int FUNC_1 (int ,int ,int ,int ,struct dpni_buffer_layout*) ;
 int FUNC_2 (int ,int ,int ,int ,struct dpni_buffer_layout*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct dpaa2_eth_priv *VAR_3, bool VAR_4)
{
 struct dpni_buffer_layout VAR_5 = {0};
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3->mc_io, 0, VAR_3->mc_token,
         VAR_1, &VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_3->net_dev, "dpni_get_buffer_layout failed\n");
  return VAR_6;
 }


 VAR_5.data_head_room = FUNC_0(VAR_3) +
        (VAR_4 ? VAR_2 : 0);
 VAR_5.options = VAR_0;
 VAR_6 = FUNC_2(VAR_3->mc_io, 0, VAR_3->mc_token,
         VAR_1, &VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_3->net_dev, "dpni_set_buffer_layout failed\n");
  return VAR_6;
 }

 return 0;
}
