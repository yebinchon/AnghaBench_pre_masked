
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ice_vsi {int rss_table_size; scalar_t__* rss_lut_user; int rss_size; void* rss_hkey_user; struct ice_pf* back; } ;
struct ice_pf {TYPE_1__* pdev; int flags; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (scalar_t__*,int,int ) ;
 scalar_t__ FUNC_2 (struct ice_vsi*,scalar_t__*,scalar_t__*,int) ;
 int FUNC_3 (void*,scalar_t__ const*,int) ;
 struct ice_netdev_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_8, const u32 *VAR_9, const u8 *VAR_10,
      const u8 VAR_11)
{
 struct ice_netdev_priv *VAR_12 = FUNC_4(VAR_8);
 struct ice_vsi *VAR_13 = VAR_12->vsi;
 struct ice_pf *VAR_14 = VAR_13->back;
 u8 *VAR_15 = ((void*)0);

 if (VAR_11 != VAR_3 && VAR_11 != VAR_4)
  return -VAR_2;

 if (!FUNC_6(VAR_6, VAR_14->flags)) {

  FUNC_5(VAR_8, "RSS is not configured on this VSI!\n");
  return -VAR_0;
 }

 if (VAR_10) {
  if (!VAR_13->rss_hkey_user) {
   VAR_13->rss_hkey_user =
    FUNC_0(&VAR_14->pdev->dev,
          VAR_7,
          VAR_5);
   if (!VAR_13->rss_hkey_user)
    return -VAR_1;
  }
  FUNC_3(VAR_13->rss_hkey_user, VAR_10, VAR_7);
  VAR_15 = VAR_13->rss_hkey_user;
 }

 if (!VAR_13->rss_lut_user) {
  VAR_13->rss_lut_user = FUNC_0(&VAR_14->pdev->dev,
       VAR_13->rss_table_size,
       VAR_5);
  if (!VAR_13->rss_lut_user)
   return -VAR_1;
 }


 if (VAR_9) {
  int VAR_16;

  for (VAR_16 = 0; VAR_16 < VAR_13->rss_table_size; VAR_16++)
   VAR_13->rss_lut_user[VAR_16] = (u8)(VAR_9[VAR_16]);
 } else {
  FUNC_1(VAR_13->rss_lut_user, VAR_13->rss_table_size,
     VAR_13->rss_size);
 }

 if (FUNC_2(VAR_13, VAR_15, VAR_13->rss_lut_user, VAR_13->rss_table_size))
  return -VAR_0;

 return 0;
}
