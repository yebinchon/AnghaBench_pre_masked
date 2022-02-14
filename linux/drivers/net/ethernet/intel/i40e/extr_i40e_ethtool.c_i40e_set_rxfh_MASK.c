
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct net_device {int dummy; } ;
struct i40e_vsi {scalar_t__* rss_lut_user; int rss_size; void* rss_hkey_user; struct i40e_pf* back; } ;
struct i40e_pf {int dummy; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct i40e_vsi*,scalar_t__*,scalar_t__*,size_t) ;
 int FUNC_1 (struct i40e_pf*,scalar_t__*,size_t,int ) ;
 void* FUNC_2 (size_t,int ) ;
 int FUNC_3 (void*,scalar_t__ const*,size_t) ;
 struct i40e_netdev_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_7, const u32 *VAR_8,
    const u8 *VAR_9, const u8 VAR_10)
{
 struct i40e_netdev_priv *VAR_11 = FUNC_4(VAR_7);
 struct i40e_vsi *VAR_12 = VAR_11->vsi;
 struct i40e_pf *VAR_13 = VAR_12->back;
 u8 *VAR_14 = ((void*)0);
 u16 VAR_15;

 if (VAR_10 != VAR_2 && VAR_10 != VAR_3)
  return -VAR_1;

 if (VAR_9) {
  if (!VAR_12->rss_hkey_user) {
   VAR_12->rss_hkey_user = FUNC_2(VAR_5,
           VAR_4);
   if (!VAR_12->rss_hkey_user)
    return -VAR_0;
  }
  FUNC_3(VAR_12->rss_hkey_user, VAR_9, VAR_5);
  VAR_14 = VAR_12->rss_hkey_user;
 }
 if (!VAR_12->rss_lut_user) {
  VAR_12->rss_lut_user = FUNC_2(VAR_6, VAR_4);
  if (!VAR_12->rss_lut_user)
   return -VAR_0;
 }


 if (VAR_8)
  for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++)
   VAR_12->rss_lut_user[VAR_15] = (u8)(VAR_8[VAR_15]);
 else
  FUNC_1(VAR_13, VAR_12->rss_lut_user, VAR_6,
      VAR_12->rss_size);

 return FUNC_0(VAR_12, VAR_14, VAR_12->rss_lut_user,
          VAR_6);
}
