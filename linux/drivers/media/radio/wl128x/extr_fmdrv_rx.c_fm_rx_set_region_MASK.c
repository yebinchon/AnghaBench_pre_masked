
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ fm_band; scalar_t__ bot_freq; scalar_t__ top_freq; } ;
struct TYPE_4__ {scalar_t__ freq; TYPE_1__ region; } ;
struct fmdev {TYPE_2__ rx; } ;
typedef int payload ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fmdev*,scalar_t__) ;
 int FUNC_1 (struct fmdev*,int ,int ,scalar_t__*,int,int *,int *) ;
 int FUNC_2 (struct fmdev*,scalar_t__) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct fmdev *VAR_5, u8 VAR_6)
{
 u16 VAR_7;
 u32 VAR_8 = 0;
 int VAR_9;

 if (VAR_6 != VAR_2 &&
     VAR_6 != VAR_3) {
  FUNC_4("Invalid band\n");
  return -VAR_1;
 }

 if (VAR_5->rx.region.fm_band == VAR_6) {
  FUNC_4("Requested band is already configured\n");
  return 0;
 }


 VAR_7 = (u16)VAR_6;
 VAR_9 = FUNC_1(VAR_5, VAR_0, VAR_4, &VAR_7,
   sizeof(VAR_7), ((void*)0), ((void*)0));
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_2(VAR_5, VAR_6);


 if (VAR_5->rx.freq < VAR_5->rx.region.bot_freq)
  VAR_8 = VAR_5->rx.region.bot_freq;
 else if (VAR_5->rx.freq > VAR_5->rx.region.top_freq)
  VAR_8 = VAR_5->rx.region.top_freq;

 if (VAR_8) {
  FUNC_3("Current freq is not within band limit boundary,switching to %d KHz\n",
        VAR_8);

  VAR_9 = FUNC_0(VAR_5, VAR_8);
 }

 return VAR_9;
}
