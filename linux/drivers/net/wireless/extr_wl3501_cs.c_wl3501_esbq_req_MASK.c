
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int tmp ;
struct wl3501_card {scalar_t__ esbq_req_head; scalar_t__ esbq_req_end; scalar_t__ esbq_req_start; } ;


 int FUNC_0 (struct wl3501_card*,scalar_t__,int *,int) ;

__attribute__((used)) static void FUNC_1(struct wl3501_card *VAR_0, u16 *VAR_1)
{
 u16 VAR_2 = 0;

 FUNC_0(VAR_0, VAR_0->esbq_req_head, VAR_1, 2);
 FUNC_0(VAR_0, VAR_0->esbq_req_head + 2, &VAR_2, sizeof(VAR_2));
 VAR_0->esbq_req_head += 4;
 if (VAR_0->esbq_req_head >= VAR_0->esbq_req_end)
  VAR_0->esbq_req_head = VAR_0->esbq_req_start;
}
