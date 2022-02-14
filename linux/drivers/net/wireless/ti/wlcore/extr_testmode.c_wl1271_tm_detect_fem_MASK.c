
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1271 {int mutex; int fem_manuf; TYPE_1__* hw; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int ,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int,int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct wl1271*,int ) ;
 int FUNC_8 (struct wl1271*) ;

__attribute__((used)) static int FUNC_9(struct wl1271 *VAR_4, struct nlattr *VAR_5[])
{

 int VAR_6, VAR_7;
 struct sk_buff *VAR_8;

 VAR_6 = FUNC_7(VAR_4, VAR_2);
 if (VAR_6 < 0)
  goto out;

 FUNC_3(&VAR_4->mutex);

 VAR_7 = FUNC_6(sizeof(VAR_4->fem_manuf));
 VAR_8 = FUNC_0(VAR_4->hw->wiphy, VAR_7);
 if (!VAR_8) {
  VAR_6 = -VAR_1;
  goto out_mutex;
 }

 if (FUNC_5(VAR_8, VAR_3, sizeof(VAR_4->fem_manuf),
           &VAR_4->fem_manuf)) {
  FUNC_2(VAR_8);
  VAR_6 = -VAR_0;
  goto out_mutex;
 }

 VAR_6 = FUNC_1(VAR_8);

out_mutex:
 FUNC_4(&VAR_4->mutex);


 FUNC_8(VAR_4);
out:
 return VAR_6;
}
