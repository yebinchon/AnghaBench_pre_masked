
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ks_wlan_private {int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ks_wlan_private*,int ,int *,unsigned int) ;
 scalar_t__ FUNC_3 (int *,int *,unsigned int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct ks_wlan_private *VAR_4, u32 VAR_5,
        u8 *VAR_6, unsigned int VAR_7)
{
 int VAR_8;
 u8 *VAR_9;

 VAR_9 = FUNC_1(VAR_3, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_9, VAR_7);
 if (VAR_8)
  goto err_free_read_buf;

 if (FUNC_3(VAR_6, VAR_9, VAR_7) != 0) {
  VAR_8 = -VAR_0;
  FUNC_4(VAR_4->net_dev, "data compare error (%d)\n", VAR_8);
  goto err_free_read_buf;
 }

 return 0;

err_free_read_buf:
 FUNC_0(VAR_9);

 return VAR_8;
}
