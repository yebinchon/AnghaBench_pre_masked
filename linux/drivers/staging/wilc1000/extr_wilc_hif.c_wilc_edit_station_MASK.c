
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wilc_vif {int ndev; } ;
struct wid {int * val; scalar_t__ size; int type; int id; } ;
struct station_parameters {scalar_t__ supported_rates_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int const*,struct station_parameters*) ;
 int FUNC_4 (struct wilc_vif*,int ,struct wid*,int) ;

int FUNC_5(struct wilc_vif *VAR_6, const u8 *VAR_7,
        struct station_parameters *VAR_8)
{
 struct wid VAR_9;
 int VAR_10;
 u8 *VAR_11;

 VAR_9.id = VAR_3;
 VAR_9.type = VAR_2;
 VAR_9.size = VAR_4 + VAR_8->supported_rates_len;
 VAR_9.val = FUNC_1(VAR_9.size, VAR_1);
 if (!VAR_9.val)
  return -VAR_0;

 VAR_11 = VAR_9.val;
 FUNC_3(VAR_11, VAR_7, VAR_8);

 VAR_10 = FUNC_4(VAR_6, VAR_5, &VAR_9, 1);
 if (VAR_10)
  FUNC_2(VAR_6->ndev, "Failed to send edit station\n");

 FUNC_0(VAR_9.val);
 return VAR_10;
}
