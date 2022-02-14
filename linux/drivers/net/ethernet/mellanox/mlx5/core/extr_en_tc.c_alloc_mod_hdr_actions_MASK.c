
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pedit_headers_action {int pedits; } ;
struct mlx5e_tc_flow_parse_attr {int max_mod_hdr_actions; int mod_hdr_actions; } ;
struct mlx5e_priv {int mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct mlx5e_priv *VAR_5,
     struct pedit_headers_action *VAR_6,
     int VAR_7,
     struct mlx5e_tc_flow_parse_attr *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;

 VAR_9 = VAR_6[VAR_3].pedits +
  VAR_6[VAR_2].pedits;
 VAR_10 = FUNC_0(VAR_4);

 VAR_11 = FUNC_3(VAR_5->mdev, VAR_7);

 VAR_11 = FUNC_2(VAR_11, VAR_9 * 16);

 VAR_8->mod_hdr_actions = FUNC_1(VAR_11, VAR_10, VAR_1);
 if (!VAR_8->mod_hdr_actions)
  return -VAR_0;

 VAR_8->max_mod_hdr_actions = VAR_11;
 return 0;
}
