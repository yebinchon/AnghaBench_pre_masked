
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct hinic_dev {int rss_tmpl_idx; void* rss_hkey_user; void* rss_indir_user; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hinic_dev*,int ,int const*) ;
 int FUNC_1 (struct hinic_dev*,int ,int const*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (void*,int const*,int) ;
 struct hinic_dev* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5,
     const u32 *VAR_6, const u8 *VAR_7)
{
 struct hinic_dev *VAR_8 = FUNC_4(VAR_5);
 int VAR_9;

 if (VAR_6) {
  if (!VAR_8->rss_indir_user) {
   VAR_8->rss_indir_user =
    FUNC_2(sizeof(u32) * VAR_3,
     VAR_2);
   if (!VAR_8->rss_indir_user)
    return -VAR_1;
  }

  FUNC_3(VAR_8->rss_indir_user, VAR_6,
         sizeof(u32) * VAR_3);

  VAR_9 = FUNC_0(VAR_8,
           VAR_8->rss_tmpl_idx, VAR_6);
  if (VAR_9)
   return -VAR_0;
 }

 if (VAR_7) {
  if (!VAR_8->rss_hkey_user) {
   VAR_8->rss_hkey_user =
    FUNC_2(VAR_4 * 2, VAR_2);

   if (!VAR_8->rss_hkey_user)
    return -VAR_1;
  }

  FUNC_3(VAR_8->rss_hkey_user, VAR_7, VAR_4);

  VAR_9 = FUNC_1(VAR_8,
       VAR_8->rss_tmpl_idx, VAR_7);
  if (VAR_9)
   return -VAR_0;
 }

 return 0;
}
