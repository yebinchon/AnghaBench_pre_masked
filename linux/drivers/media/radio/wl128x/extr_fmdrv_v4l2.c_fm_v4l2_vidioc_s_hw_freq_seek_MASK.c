
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_hw_freq_seek {int spacing; int wrap_around; int seek_upward; } ;
struct fmdev {scalar_t__ curr_fmmode; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fmdev*,int ,int ,int ) ;
 int FUNC_1 (struct fmdev*,scalar_t__) ;
 int FUNC_2 (char*,...) ;
 struct fmdev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
  const struct v4l2_hw_freq_seek *VAR_5)
{
 struct fmdev *VAR_6 = FUNC_3(VAR_3);
 int VAR_7;

 if (VAR_3->f_flags & VAR_2)
  return -VAR_0;

 if (VAR_6->curr_fmmode != VAR_1) {
  VAR_7 = FUNC_1(VAR_6, VAR_1);
  if (VAR_7 != 0) {
   FUNC_2("Failed to set RX mode\n");
   return VAR_7;
  }
 }

 VAR_7 = FUNC_0(VAR_6, VAR_5->seek_upward, VAR_5->wrap_around,
   VAR_5->spacing);
 if (VAR_7 < 0)
  FUNC_2("RX seek failed - %d\n", VAR_7);

 return VAR_7;
}
