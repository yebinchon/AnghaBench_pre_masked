
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct wl3501_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct wl3501_card*,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct wl3501_card*) ;
 scalar_t__ FUNC_2 (struct wl3501_card*,int) ;
 int FUNC_3 (struct wl3501_card*,scalar_t__,void*,int) ;

__attribute__((used)) static int FUNC_4(struct wl3501_card *VAR_1, void *VAR_2, int VAR_3)
{
 int VAR_4 = -VAR_0;

 if (FUNC_1(VAR_1)) {
  u16 VAR_5 = FUNC_2(VAR_1, VAR_3);
  if (VAR_5) {
   FUNC_3(VAR_1, VAR_5, VAR_2, VAR_3);
   FUNC_0(VAR_1, &VAR_5);
   VAR_4 = 0;
  }
 }
 return VAR_4;
}
