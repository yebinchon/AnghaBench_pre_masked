
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wl3501_card {int wait; int sig_get_confirm; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wl3501_card*,int ,int *,int) ;

__attribute__((used)) static inline void FUNC_3(struct wl3501_card *VAR_0,
      u16 VAR_1, void *VAR_2, int VAR_3)
{
 FUNC_0("entry");
 FUNC_2(VAR_0, VAR_1, &VAR_0->sig_get_confirm,
       sizeof(VAR_0->sig_get_confirm));
 FUNC_1(&VAR_0->wait);
}
