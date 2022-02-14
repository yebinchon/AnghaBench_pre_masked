
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct nicvf_rss_info {int rss_size; int key; int * ind_tbl; } ;
struct nicvf {struct nicvf_rss_info rss_info; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 struct nicvf* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, u32 *VAR_3, u8 *VAR_4,
     u8 *VAR_5)
{
 struct nicvf *VAR_6 = FUNC_1(VAR_2);
 struct nicvf_rss_info *VAR_7 = &VAR_6->rss_info;
 int VAR_8;

 if (VAR_3) {
  for (VAR_8 = 0; VAR_8 < VAR_7->rss_size; VAR_8++)
   VAR_3[VAR_8] = VAR_7->ind_tbl[VAR_8];
 }

 if (VAR_4)
  FUNC_0(VAR_4, VAR_7->key, VAR_1 * sizeof(u64));

 if (VAR_5)
  *VAR_5 = VAR_0;

 return 0;
}
