
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fwht_pixfmt_info {int dummy; } ;
struct v4l2_ctrl_fwht_params {int flags; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (struct v4l2_fwht_pixfmt_info const*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static bool FUNC_1(const struct v4l2_ctrl_fwht_params *VAR_5,
         const struct v4l2_fwht_pixfmt_info *VAR_6)
{
 unsigned int VAR_7 =
  (VAR_5->flags & VAR_1) ? 1 : 2;
 unsigned int VAR_8 =
  (VAR_5->flags & VAR_0) ? 1 : 2;
 unsigned int VAR_9 = 3;
 unsigned int VAR_10 = 0;

 if (VAR_5->version < 3)
  return 0;

 VAR_9 = 1 + ((VAR_5->flags & VAR_2) >>
         VAR_3);
 VAR_10 = (VAR_5->flags & VAR_4);
 if (FUNC_0(VAR_6, VAR_7, VAR_8,
        VAR_9, VAR_10))
  return 1;
 return 0;
}
