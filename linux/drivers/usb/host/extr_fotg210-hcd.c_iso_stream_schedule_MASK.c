
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct urb {unsigned int interval; unsigned int start_frame; struct fotg210_iso_sched* hcpriv; } ;
struct fotg210_iso_stream {unsigned int next_uframe; int highspeed; int usecs; int td_list; } ;
struct fotg210_iso_sched {unsigned int span; } ;
struct fotg210_hcd {int periodic_size; unsigned int i_thresh; scalar_t__ isoc_count; unsigned int next_frame; scalar_t__ fs_i_thresh; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct fotg210_hcd*,char*,struct urb*,...) ;
 unsigned int FUNC_2 (struct fotg210_hcd*) ;
 int FUNC_3 (struct fotg210_iso_stream*,struct fotg210_iso_sched*) ;
 scalar_t__ FUNC_4 (struct fotg210_hcd*,unsigned int,unsigned int,int ,unsigned int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct fotg210_hcd *VAR_3, struct urb *VAR_4,
  struct fotg210_iso_stream *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;
 unsigned VAR_12 = VAR_3->periodic_size << 3;
 struct fotg210_iso_sched *VAR_13 = VAR_4->hcpriv;

 VAR_9 = VAR_4->interval;
 VAR_10 = VAR_13->span;

 if (VAR_10 > VAR_12 - VAR_2) {
  FUNC_1(VAR_3, "iso request %p too long\n", VAR_4);
  VAR_11 = -VAR_0;
  goto fail;
 }

 VAR_6 = FUNC_2(VAR_3) & (VAR_12 - 1);






 if (FUNC_5(!FUNC_6(&VAR_5->td_list))) {
  u32 VAR_14;






  if (!VAR_5->highspeed && VAR_3->fs_i_thresh)
   VAR_7 = VAR_6 + VAR_3->i_thresh;
  else
   VAR_7 = VAR_6;





  VAR_14 = (VAR_5->next_uframe - VAR_9 - VAR_7) & (VAR_12 - 1);
  if (VAR_14 >= VAR_12 - 2 * VAR_2)
   VAR_8 = VAR_7 + VAR_14 - VAR_12 + VAR_9 *
     FUNC_0(VAR_12 - VAR_14, VAR_9);
  else
   VAR_8 = VAR_7 + VAR_14 + VAR_9;
  if (VAR_8 - VAR_6 >= VAR_12) {
   FUNC_1(VAR_3, "request %p would overflow (%d+%d >= %d)\n",
     VAR_4, VAR_8 - VAR_6 - VAR_9, VAR_9,
     VAR_12);
   VAR_11 = -VAR_0;
   goto fail;
  }
 }







 else {
  int VAR_15 = 0;

  VAR_8 = VAR_2 + (VAR_6 & ~0x07);
  VAR_7 = VAR_8;
  VAR_8 += VAR_9;
  do {
   VAR_8--;

   if (FUNC_4(VAR_3, VAR_12, VAR_8,
     VAR_5->usecs, VAR_9))
    VAR_15 = 1;
  } while (VAR_8 > VAR_7 && !VAR_15);


  if (!VAR_15) {
   FUNC_1(VAR_3, "iso resched full %p (now %d max %d)\n",
     VAR_4, VAR_6, VAR_6 + VAR_12);
   VAR_11 = -VAR_1;
   goto fail;
  }
 }


 if (FUNC_7(VAR_8 - VAR_6 + VAR_10 - VAR_9 >=
   VAR_12 - 2 * VAR_2)) {
  FUNC_1(VAR_3, "request %p would overflow (%d+%d >= %d)\n",
    VAR_4, VAR_8 - VAR_6, VAR_10 - VAR_9,
    VAR_12 - 2 * VAR_2);
  VAR_11 = -VAR_0;
  goto fail;
 }

 VAR_5->next_uframe = VAR_8 & (VAR_12 - 1);


 VAR_4->start_frame = VAR_5->next_uframe;
 if (!VAR_5->highspeed)
  VAR_4->start_frame >>= 3;


 if (VAR_3->isoc_count == 0)
  VAR_3->next_frame = VAR_6 >> 3;
 return 0;

fail:
 FUNC_3(VAR_5, VAR_13);
 VAR_4->hcpriv = ((void*)0);
 return VAR_11;
}
