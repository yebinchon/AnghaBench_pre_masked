
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fwht_pixfmt_info {int dummy; } ;
struct fwht_cframe_hdr {int version; int flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 struct v4l2_fwht_pixfmt_info const* FUNC_1 (unsigned int,unsigned int,unsigned int,unsigned int,int ) ;

__attribute__((used)) static const struct v4l2_fwht_pixfmt_info *
FUNC_2(const struct fwht_cframe_hdr *VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_5->flags);
 unsigned int VAR_7 = (VAR_6 & VAR_1) ? 1 : 2;
 unsigned int VAR_8 = (VAR_6 & VAR_0) ? 1 : 2;
 unsigned int VAR_9 = 3;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11 = FUNC_0(VAR_5->version);

 if (VAR_11 >= 2) {
  VAR_9 = 1 + ((VAR_6 & VAR_2) >>
    VAR_3);
  VAR_10 = (VAR_6 & VAR_4);
 }
 return FUNC_1(VAR_7, VAR_8,
         VAR_9, VAR_10, 0);
}
