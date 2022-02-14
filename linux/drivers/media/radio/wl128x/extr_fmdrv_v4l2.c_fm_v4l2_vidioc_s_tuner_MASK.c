
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct v4l2_tuner {scalar_t__ index; scalar_t__ audmode; int rxsubchans; } ;
struct fmdev {scalar_t__ curr_fmmode; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fmdev*,scalar_t__) ;
 int FUNC_1 (struct fmdev*,int ) ;
 int FUNC_2 (struct fmdev*,int ) ;
 int FUNC_3 (char*) ;
 struct fmdev* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_8, void *VAR_9,
  const struct v4l2_tuner *VAR_10)
{
 struct fmdev *VAR_11 = FUNC_4(VAR_8);
 u16 VAR_12;
 u8 VAR_13;
 int VAR_14;

 if (VAR_10->index != 0)
  return -VAR_0;

 VAR_12 = (VAR_10->audmode == VAR_6) ?
   VAR_5 : VAR_2;
 VAR_13 = (VAR_10->rxsubchans & VAR_7) ?
   VAR_4 : VAR_3;

 if (VAR_11->curr_fmmode != VAR_1) {
  VAR_14 = FUNC_0(VAR_11, VAR_1);
  if (VAR_14 < 0) {
   FUNC_3("Failed to set RX mode\n");
   return VAR_14;
  }
 }

 VAR_14 = FUNC_2(VAR_11, VAR_12);
 if (VAR_14 < 0) {
  FUNC_3("Failed to set RX stereo/mono mode\n");
  return VAR_14;
 }

 VAR_14 = FUNC_1(VAR_11, VAR_13);
 if (VAR_14 < 0)
  FUNC_3("Failed to set RX RDS mode\n");

 return VAR_14;
}
