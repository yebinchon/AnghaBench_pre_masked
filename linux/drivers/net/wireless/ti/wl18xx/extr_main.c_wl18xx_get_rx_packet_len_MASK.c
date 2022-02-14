
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1271_rx_descriptor {int dummy; } ;
struct wl1271 {int dummy; } ;



__attribute__((used)) static u32 FUNC_0(struct wl1271 *VAR_0, void *VAR_1,
        u32 VAR_2)
{
 struct wl1271_rx_descriptor *VAR_3 = VAR_1;


 if (VAR_2 < sizeof(*VAR_3))
  return 0;

 return VAR_2 - sizeof(*VAR_3);
}
