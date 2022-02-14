
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct TYPE_3__ {int cal_data_len; } ;
struct ath10k {TYPE_1__ hw_params; TYPE_2__* dev; } ;
struct TYPE_4__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath10k*,void*,int) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct device_node*,char const*,int*) ;
 int FUNC_5 (struct device_node*,char const*,void*,int) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_4, const char *VAR_5)
{
 struct device_node *VAR_6;
 int VAR_7;
 void *VAR_8;
 int VAR_9;

 VAR_6 = VAR_4->dev->of_node;
 if (!VAR_6)



  return -VAR_1;

 if (!FUNC_4(VAR_6, VAR_5, &VAR_7)) {

  return -VAR_1;
 }

 if (VAR_7 != VAR_4->hw_params.cal_data_len) {
  FUNC_1(VAR_4, "invalid calibration data length in DT: %d\n",
       VAR_7);
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_8 = FUNC_3(VAR_7, VAR_3);
 if (!VAR_8) {
  VAR_9 = -VAR_2;
  goto out;
 }

 VAR_9 = FUNC_5(VAR_6, VAR_5, VAR_8, VAR_7);
 if (VAR_9) {
  FUNC_1(VAR_4, "failed to read calibration data from DT: %d\n",
       VAR_9);
  goto out_free;
 }

 VAR_9 = FUNC_0(VAR_4, VAR_8, VAR_7);
 if (VAR_9) {
  FUNC_1(VAR_4, "failed to download calibration data from Device Tree: %d\n",
       VAR_9);
  goto out_free;
 }

 VAR_9 = 0;

out_free:
 FUNC_2(VAR_8);

out:
 return VAR_9;
}
