
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wl3501_start_confirm {scalar_t__ status; } ;
struct wl3501_card {int dummy; } ;
struct net_device {int dummy; } ;
typedef int sig ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wl3501_card*,int ,struct wl3501_start_confirm*,int) ;

__attribute__((used)) static inline void FUNC_3(struct net_device *VAR_1,
        struct wl3501_card *VAR_2,
        u16 VAR_3)
{
 struct wl3501_start_confirm VAR_4;

 FUNC_1("entry");
 FUNC_2(VAR_2, VAR_3, &VAR_4, sizeof(VAR_4));
 if (VAR_4.status == VAR_0)
  FUNC_0(VAR_1);
}
