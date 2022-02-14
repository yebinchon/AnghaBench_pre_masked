
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ks_wlan_private {int dummy; } ;
typedef int index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct ks_wlan_private*,int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(struct ks_wlan_private *VAR_4, u32 VAR_5)
{
 int VAR_6;
 unsigned char *VAR_7;

 VAR_7 = FUNC_1(&VAR_5, sizeof(u32), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_4, VAR_3, VAR_7, sizeof(VAR_5));
 if (VAR_6)
  goto err_free_data_buf;

 VAR_6 = FUNC_2(VAR_4, VAR_2, VAR_7, sizeof(VAR_5));
 if (VAR_6)
  goto err_free_data_buf;

 return 0;

err_free_data_buf:
 FUNC_0(VAR_7);

 return VAR_6;
}
