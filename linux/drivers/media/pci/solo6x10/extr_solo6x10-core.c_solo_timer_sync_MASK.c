
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct timespec64 {int tv_nsec; scalar_t__ tv_sec; } ;
struct solo_dev {scalar_t__ type; int time_sync; long usec_lsb; } ;
typedef long s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct timespec64*) ;
 scalar_t__ FUNC_1 (struct solo_dev*,int ) ;
 int FUNC_2 (struct solo_dev*,int ,long) ;
 int FUNC_3 (struct solo_dev*) ;

__attribute__((used)) static void FUNC_4(struct solo_dev *VAR_5)
{
 u32 VAR_6, VAR_7;
 struct timespec64 VAR_8;
 long VAR_9;

 if (VAR_5->type != VAR_1)
  return;

 if (++VAR_5->time_sync < 60)
  return;

 VAR_5->time_sync = 0;

 VAR_6 = FUNC_1(VAR_5, VAR_2);
 VAR_7 = FUNC_1(VAR_5, VAR_3);

 FUNC_0(&VAR_8);

 VAR_9 = (s32)VAR_8.tv_sec - (s32)VAR_6;
 VAR_9 = (VAR_9 * 1000000)
  + ((s32)(VAR_8.tv_nsec / VAR_0) - (s32)VAR_7);

 if (VAR_9 > 1000 || VAR_9 < -1000) {
  FUNC_3(VAR_5);
 } else if (VAR_9) {
  long VAR_10 = VAR_5->usec_lsb;

  VAR_10 -= VAR_9 / 4;
  if (VAR_10 < 0)
   VAR_10 = 0;
  else if (VAR_10 > 255)
   VAR_10 = 255;

  VAR_5->usec_lsb = VAR_10;
  FUNC_2(VAR_5, VAR_4,
          VAR_5->usec_lsb);
 }
}
