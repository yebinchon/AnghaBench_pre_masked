
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl1271 {int roc_map; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct wl1271*,int ) ;
 int FUNC_5 (struct wl1271*) ;

int FUNC_6(struct wl1271 *VAR_1, u8 VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_0(!FUNC_3(VAR_2, VAR_1->roc_map)))
  return 0;

 VAR_3 = FUNC_4(VAR_1, VAR_2);
 if (VAR_3 < 0)
  goto out;

 FUNC_1(VAR_2, VAR_1->roc_map);






 if (FUNC_2(VAR_1->roc_map, VAR_0) >= VAR_0)
  FUNC_5(VAR_1);
out:
 return VAR_3;
}
