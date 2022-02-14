
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fwht_pixfmt_info {int dummy; } ;
struct fwht_cframe_hdr {int flags; int version; int height; int width; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct v4l2_fwht_pixfmt_info* FUNC_0 (struct fwht_cframe_hdr const*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,unsigned int) ;

__attribute__((used)) static bool FUNC_3(const struct fwht_cframe_hdr *VAR_4)
{
 const struct v4l2_fwht_pixfmt_info *VAR_5;
 unsigned int VAR_6 = FUNC_1(VAR_4->width);
 unsigned int VAR_7 = FUNC_1(VAR_4->height);
 unsigned int VAR_8 = FUNC_1(VAR_4->version);
 unsigned int VAR_9 = FUNC_1(VAR_4->flags);

 if (VAR_6 < VAR_3 || VAR_6 > VAR_1 || VAR_7 < VAR_2 || VAR_7 > VAR_0)
  return 0;

 if (!FUNC_2(VAR_9, VAR_8))
  return 0;

 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5)
  return 0;
 return 1;
}
