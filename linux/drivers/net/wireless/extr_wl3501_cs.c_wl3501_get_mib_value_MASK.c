
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int mib_status; int mib_value; } ;
struct wl3501_card {TYPE_1__ sig_get_confirm; int wait; } ;


 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct wl3501_card*,int ,void*) ;

__attribute__((used)) static int FUNC_3(struct wl3501_card *VAR_0, u8 VAR_1,
    void *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_0->wait,
  VAR_0->sig_get_confirm.mib_status != 255);
 if (VAR_4)
  return VAR_4;

 FUNC_0(VAR_2, VAR_0->sig_get_confirm.mib_value, VAR_3);
 return 0;
}
