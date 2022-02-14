
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct wl1271_link {int * tx_queue; } ;
struct wl1271 {struct wl1271_link* links; } ;
struct sk_buff {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct wl1271*,size_t,struct wl1271_link*) ;
 scalar_t__ FUNC_2 (struct wl1271*,size_t,struct wl1271_link*) ;
 struct sk_buff* FUNC_3 (struct wl1271*,struct wl1271_link*,size_t) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct wl1271 *VAR_1,
          u8 VAR_2, u8 VAR_3,
          u8 *VAR_4)
{
 struct wl1271_link *VAR_5 = &VAR_1->links[VAR_2];

 if (!FUNC_1(VAR_1, VAR_2, VAR_5)) {
  if (*VAR_4 == VAR_0 &&
      !FUNC_0(&VAR_5->tx_queue[VAR_3]) &&
      FUNC_2(VAR_1, VAR_2, VAR_5))

   *VAR_4 = VAR_2;

  return ((void*)0);
 }

 return FUNC_3(VAR_1, VAR_5, VAR_3);
}
