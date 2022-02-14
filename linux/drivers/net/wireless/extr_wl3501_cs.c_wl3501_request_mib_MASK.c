
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct wl3501_get_req {int mib_attrib; int sig_id; } ;
struct TYPE_2__ {int mib_status; } ;
struct wl3501_card {int lock; TYPE_1__ sig_get_confirm; } ;
typedef int sig ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct wl3501_card*,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct wl3501_card*) ;
 scalar_t__ FUNC_4 (struct wl3501_card*,int) ;
 int FUNC_5 (struct wl3501_card*,scalar_t__,struct wl3501_get_req*,int) ;

__attribute__((used)) static int FUNC_6(struct wl3501_card *VAR_2, u8 VAR_3, void *VAR_4)
{
 struct wl3501_get_req VAR_5 = {
  .sig_id = VAR_1,
  .mib_attrib = VAR_3,
 };
 unsigned long VAR_6;
 int VAR_7 = -VAR_0;

 FUNC_0(&VAR_2->lock, VAR_6);
 if (FUNC_3(VAR_2)) {
  u16 VAR_8 = FUNC_4(VAR_2, sizeof(VAR_5));
  if (VAR_8) {
   FUNC_5(VAR_2, VAR_8, &VAR_5, sizeof(VAR_5));
   FUNC_2(VAR_2, &VAR_8);
   VAR_2->sig_get_confirm.mib_status = 255;
   VAR_7 = 0;
  }
 }
 FUNC_1(&VAR_2->lock, VAR_6);

 return VAR_7;
}
