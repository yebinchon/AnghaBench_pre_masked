
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct TYPE_4__ {int bdf_ext; } ;
struct ath10k {TYPE_2__ id; TYPE_1__* dev; } ;
struct TYPE_3__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*,int ,char*,char const*) ;
 int FUNC_1 (struct device_node*,char*,char const**) ;
 scalar_t__ FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_3)
{
 struct device_node *VAR_4;
 const char *VAR_5 = ((void*)0);

 VAR_4 = VAR_3->dev->of_node;
 if (!VAR_4)
  return -VAR_2;

 FUNC_1(VAR_4, "qcom,ath10k-calibration-variant",
    &VAR_5);
 if (!VAR_5)
  return -VAR_1;

 if (FUNC_2(VAR_3->id.bdf_ext, VAR_5, sizeof(VAR_3->id.bdf_ext)) < 0)
  FUNC_0(VAR_3, VAR_0,
      "bdf variant string is longer than the buffer can accommodate (variant: %s)\n",
       VAR_5);

 return 0;
}
