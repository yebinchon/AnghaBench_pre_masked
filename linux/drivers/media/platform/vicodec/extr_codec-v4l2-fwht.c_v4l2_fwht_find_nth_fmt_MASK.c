
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_fwht_pixfmt_info {int dummy; } ;


 unsigned int FUNC_0 (struct v4l2_fwht_pixfmt_info const*) ;
 struct v4l2_fwht_pixfmt_info const* VAR_0 ;
 int FUNC_1 (struct v4l2_fwht_pixfmt_info const*,int ,int ,int ,int ) ;

const struct v4l2_fwht_pixfmt_info *FUNC_2(u32 VAR_1,
         u32 VAR_2,
         u32 VAR_3,
         u32 VAR_4,
         unsigned int VAR_5)
{
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  bool VAR_7 = FUNC_1(&VAR_0[VAR_6],
             VAR_1, VAR_2,
             VAR_3, VAR_4);
  if (VAR_7) {
   if (VAR_5 == 0)
    return VAR_0 + VAR_6;
   VAR_5--;
  }
 }
 return ((void*)0);
}
