
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {scalar_t__ tx_frames_cnt; scalar_t__ num_tx_desc; int ** tx_frames; int flags; int tx_frames_map; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct wl1271 *VAR_1, int VAR_2)
{
 if (FUNC_0(VAR_2, VAR_1->tx_frames_map)) {
  if (FUNC_2(VAR_1->tx_frames_cnt == VAR_1->num_tx_desc))
   FUNC_1(VAR_0, &VAR_1->flags);

  VAR_1->tx_frames[VAR_2] = ((void*)0);
  VAR_1->tx_frames_cnt--;
 }
}
