
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wilc_vif {int ndev; } ;
struct wid {int val; int size; int type; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wilc_vif*,int ,struct wid*,int) ;

int FUNC_6(struct wilc_vif *VAR_6, const u8 *VAR_7)
{
 struct wid VAR_8;
 int VAR_9;

 VAR_8.id = VAR_4;
 VAR_8.type = VAR_3;
 VAR_8.size = VAR_1;
 VAR_8.val = FUNC_3(VAR_8.size, VAR_2);
 if (!VAR_8.val)
  return -VAR_0;

 if (!VAR_7)
  FUNC_0(VAR_8.val);
 else
  FUNC_1(VAR_8.val, VAR_7);

 VAR_9 = FUNC_5(VAR_6, VAR_5, &VAR_8, 1);
 if (VAR_9)
  FUNC_4(VAR_6->ndev, "Failed to del station\n");

 FUNC_2(VAR_8.val);

 return VAR_9;
}
