
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun6i_csi_dev {int dummy; } ;
struct sun6i_csi_config {int dummy; } ;
struct sun6i_csi {int config; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct sun6i_csi_config*,int) ;
 int FUNC_1 (struct sun6i_csi_dev*) ;
 int FUNC_2 (struct sun6i_csi_dev*) ;
 int FUNC_3 (struct sun6i_csi_dev*) ;
 struct sun6i_csi_dev* FUNC_4 (struct sun6i_csi*) ;

int FUNC_5(struct sun6i_csi *VAR_1,
       struct sun6i_csi_config *VAR_2)
{
 struct sun6i_csi_dev *VAR_3 = FUNC_4(VAR_1);

 if (!VAR_2)
  return -VAR_0;

 FUNC_0(&VAR_1->config, VAR_2, sizeof(VAR_1->config));

 FUNC_3(VAR_3);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3);

 return 0;
}
