
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int video_b_frames; } ;
struct ivtv {int speed; int speed_mute_audio; int serialize_lock; int dma_waitq; int i_flags; int decoding; TYPE_1__ cxhdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (char*,int,int,int,int,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_7 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct ivtv*,int ,int,int*) ;
 int FUNC_5 (struct ivtv*,int ,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (int ) ;
 int VAR_8 ;

int FUNC_13(struct ivtv *VAR_9, int VAR_10)
{
 u32 VAR_11[VAR_3];
 int VAR_12 = (VAR_10 == 1 || VAR_10 == -1);
 FUNC_0(VAR_8);

 if (VAR_10 == 0) VAR_10 = 1000;


 if (VAR_10 == VAR_9->speed && !VAR_12)
  return 0;

 if (VAR_12 && (VAR_10 < 0) == (VAR_9->speed < 0)) {

  FUNC_5(VAR_9, VAR_2, 1, 0);
  VAR_9->speed = VAR_10;
  return 0;
 }
 if (VAR_12)

  VAR_10 = VAR_10 < 0 ? -1000 : 1000;

 VAR_11[0] = (VAR_10 > 1000 || VAR_10 < -1000) ? 0x80000000 : 0;
 VAR_11[0] |= (VAR_10 > 1000 || VAR_10 < -1500) ? 0x40000000 : 0;
 VAR_11[1] = (VAR_10 < 0);
 VAR_11[2] = VAR_10 < 0 ? 3 : 7;
 VAR_11[3] = FUNC_12(VAR_9->cxhdl.video_b_frames);
 VAR_11[4] = (VAR_10 == 1500 || VAR_10 == 500) ? VAR_9->speed_mute_audio : 0;
 VAR_11[5] = 0;
 VAR_11[6] = 0;

 if (VAR_10 == 1500 || VAR_10 == -1500) VAR_11[0] |= 1;
 else if (VAR_10 == 2000 || VAR_10 == -2000) VAR_11[0] |= 2;
 else if (VAR_10 > -1000 && VAR_10 < 0) VAR_11[0] |= (-1000 / VAR_10);
 else if (VAR_10 < 1000 && VAR_10 > 0) VAR_11[0] |= (1000 / VAR_10);


 if (FUNC_2(&VAR_9->decoding) > 0) {
  int VAR_13 = 0;


  FUNC_5(VAR_9, VAR_0, 1, 0);


  FUNC_7(&VAR_9->serialize_lock);
  FUNC_8(&VAR_9->dma_waitq, &VAR_8, VAR_6);
  while (FUNC_11(VAR_5, &VAR_9->i_flags)) {
   VAR_13 = FUNC_10(VAR_7);
   if (VAR_13)
    break;
   VAR_13 = 0;
   FUNC_9();
  }
  FUNC_3(&VAR_9->dma_waitq, &VAR_8);
  FUNC_6(&VAR_9->serialize_lock);
  if (VAR_13)
   return -VAR_4;


  FUNC_4(VAR_9, VAR_1, 7, VAR_11);
  FUNC_1("Setting Speed to 0x%08x 0x%08x 0x%08x 0x%08x 0x%08x 0x%08x 0x%08x\n",
    VAR_11[0], VAR_11[1], VAR_11[2], VAR_11[3], VAR_11[4], VAR_11[5], VAR_11[6]);
 }
 if (VAR_12) {
  VAR_10 = (VAR_10 < 0) ? -1 : 1;
  FUNC_5(VAR_9, VAR_2, 1, 0);
 }
 VAR_9->speed = VAR_10;
 return 0;
}
