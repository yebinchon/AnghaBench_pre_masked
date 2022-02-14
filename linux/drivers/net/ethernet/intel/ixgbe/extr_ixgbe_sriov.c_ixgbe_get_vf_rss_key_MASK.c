
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ixgbe_adapter {int rss_key; TYPE_1__* vfinfo; } ;
struct TYPE_2__ {int vf_api; int rss_query_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (size_t*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ixgbe_adapter *VAR_3,
    u32 *VAR_4, u32 VAR_5)
{
 u32 *VAR_6 = &VAR_4[1];


 if (!VAR_3->vfinfo[VAR_5].rss_query_enabled)
  return -VAR_1;


 switch (VAR_3->vfinfo[VAR_5].vf_api) {
 case 128:
 case 129:
 case 130:
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_6, VAR_3->rss_key, VAR_2);

 return 0;
}
