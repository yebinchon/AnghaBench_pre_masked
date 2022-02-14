
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {scalar_t__ tx_frames_cnt; int num_links; int flush_mutex; int mutex; int tx_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 unsigned long FUNC_5 (int) ;
 int FUNC_6 (int ,char*,scalar_t__,...) ;
 int FUNC_7 (struct wl1271*,int) ;
 scalar_t__ FUNC_8 (struct wl1271*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (struct wl1271*,int ) ;
 int FUNC_12 (struct wl1271*,int ) ;

void FUNC_13(struct wl1271 *VAR_4)
{
 unsigned long VAR_5, VAR_6;
 int VAR_7;
 VAR_6 = VAR_3;
 VAR_5 = VAR_6 + FUNC_5(VAR_1);


 FUNC_2(&VAR_4->flush_mutex);

 FUNC_2(&VAR_4->mutex);
 if (VAR_4->tx_frames_cnt == 0 && FUNC_8(VAR_4) == 0) {
  FUNC_3(&VAR_4->mutex);
  goto out;
 }

 FUNC_11(VAR_4, VAR_2);

 while (!FUNC_4(VAR_3, VAR_5)) {
  FUNC_6(VAR_0, "flushing tx buffer: %d %d",
        VAR_4->tx_frames_cnt,
        FUNC_8(VAR_4));


  FUNC_3(&VAR_4->mutex);
  if (FUNC_8(VAR_4))
   FUNC_9(&VAR_4->tx_work);
  FUNC_1(20);
  FUNC_2(&VAR_4->mutex);

  if ((VAR_4->tx_frames_cnt == 0) &&
      (FUNC_8(VAR_4) == 0)) {
   FUNC_6(VAR_0, "tx flush took %d ms",
         FUNC_0(VAR_3 - VAR_6));
   goto out_wake;
  }
 }

 FUNC_10("Unable to flush all TX buffers, "
         "timed out (timeout %d ms",
         VAR_1 / 1000);


 for (VAR_7 = 0; VAR_7 < VAR_4->num_links; VAR_7++)
  FUNC_7(VAR_4, VAR_7);

out_wake:
 FUNC_12(VAR_4, VAR_2);
 FUNC_3(&VAR_4->mutex);
out:
 FUNC_3(&VAR_4->flush_mutex);
}
