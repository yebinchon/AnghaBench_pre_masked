
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tmp ;
struct wl3501_card {scalar_t__ esbq_confirm; scalar_t__ esbq_confirm_end; scalar_t__ esbq_confirm_start; } ;


 int FUNC_0 (struct wl3501_card*,scalar_t__,int *,int) ;

__attribute__((used)) static void FUNC_1(struct wl3501_card *VAR_0)
{
 u8 VAR_1 = 0;

 FUNC_0(VAR_0, VAR_0->esbq_confirm + 3, &VAR_1, sizeof(VAR_1));
 VAR_0->esbq_confirm += 4;
 if (VAR_0->esbq_confirm >= VAR_0->esbq_confirm_end)
  VAR_0->esbq_confirm = VAR_0->esbq_confirm_start;
}
