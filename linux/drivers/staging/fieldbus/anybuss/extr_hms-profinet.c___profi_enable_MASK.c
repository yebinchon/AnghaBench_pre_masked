
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct profi_priv {int power_on; struct anybuss_client* client; } ;
struct anybuss_memcfg {int input_io; int output_io; int offl_mode; int output_total; int output_dpram; int input_total; int input_dpram; } ;
struct anybuss_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct anybuss_client*) ;
 int FUNC_1 (struct anybuss_client*,int) ;
 int FUNC_2 (struct anybuss_client*,struct anybuss_memcfg const*) ;

__attribute__((used)) static int FUNC_3(struct profi_priv *VAR_2)
{
 int VAR_3;
 struct anybuss_client *VAR_4 = VAR_2->client;

 const struct anybuss_memcfg VAR_5 = {
  .input_io = 220,
  .input_dpram = VAR_1,
  .input_total = VAR_1,
  .output_io = 220,
  .output_dpram = VAR_1,
  .output_total = VAR_1,
  .offl_mode = VAR_0,
 };





 FUNC_1(VAR_4, 0);
 VAR_3 = FUNC_1(VAR_4, 1);
 if (VAR_3)
  goto err;
 VAR_3 = FUNC_2(VAR_4, &VAR_5);
 if (VAR_3)
  goto err;
 VAR_3 = FUNC_0(VAR_4);
 if (VAR_3)
  goto err;
 VAR_2->power_on = 1;
 return 0;

err:
 FUNC_1(VAR_4, 0);
 VAR_2->power_on = 0;
 return VAR_3;
}
