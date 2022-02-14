
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {scalar_t__* tx_queue_count; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct wl1271 *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_3 += VAR_1->tx_queue_count[VAR_2];

 return VAR_3;
}
