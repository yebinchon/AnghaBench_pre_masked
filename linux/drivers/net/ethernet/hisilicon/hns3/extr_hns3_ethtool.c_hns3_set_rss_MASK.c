
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct hnae3_handle {TYPE_2__* ae_algo; TYPE_3__* pdev; } ;
struct TYPE_6__ {int revision; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* set_rss ) (struct hnae3_handle*,int const*,int const*,int const) ;} ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 (struct hnae3_handle*,int const*,int const*,int const) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, const u32 *VAR_5,
   const u8 *VAR_6, const u8 VAR_7)
{
 struct hnae3_handle *VAR_8 = FUNC_0(VAR_4);

 if (!VAR_8->ae_algo->ops->set_rss)
  return -VAR_0;

 if ((VAR_8->pdev->revision == 0x20 &&
      VAR_7 != VAR_2) || (VAR_7 != VAR_1 &&
      VAR_7 != VAR_2 && VAR_7 != VAR_3)) {
  FUNC_1(VAR_4, "hash func not supported\n");
  return -VAR_0;
 }

 if (!VAR_5) {
  FUNC_1(VAR_4,
      "set rss failed for indir is empty\n");
  return -VAR_0;
 }

 return VAR_8->ae_algo->ops->set_rss(VAR_8, VAR_5, VAR_6, VAR_7);
}
