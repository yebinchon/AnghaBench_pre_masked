
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {scalar_t__ expires; } ;
struct ieee80211_device {int lock; TYPE_2__ crypt_deinit_timer; TYPE_1__* dev; int crypt_deinit_list; } ;
struct TYPE_3__ {int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 struct ieee80211_device* FUNC_1 (int ,struct timer_list*,int ) ;
 struct ieee80211_device* VAR_2 ;
 int FUNC_2 (struct ieee80211_device*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct timer_list *VAR_4)
{
 struct ieee80211_device *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_1);
 unsigned long VAR_6;

 FUNC_5(&VAR_5->lock, VAR_6);
 FUNC_2(VAR_5, 0);
 if (!FUNC_3(&VAR_5->crypt_deinit_list)) {
  FUNC_4(VAR_5->dev, "%s: entries remaining in delayed crypt deletion list\n",
    VAR_5->dev->name);
  VAR_5->crypt_deinit_timer.expires = VAR_3 + VAR_0;
  FUNC_0(&VAR_5->crypt_deinit_timer);
 }
 FUNC_6(&VAR_5->lock, VAR_6);

}
