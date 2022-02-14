
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct v4l2_fract {scalar_t__ numerator; scalar_t__ denominator; } ;
struct csi_skip_desc {scalar_t__ max_ratio; int keep; } ;
typedef scalar_t__ s64 ;


 int FUNC_0 (struct csi_skip_desc*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct csi_skip_desc const*,struct v4l2_fract*) ;
 struct csi_skip_desc* VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static const struct csi_skip_desc *FUNC_4(struct v4l2_fract *VAR_3,
            struct v4l2_fract *VAR_4)
{
 const struct csi_skip_desc *VAR_5 = &VAR_2[0], *VAR_6 = VAR_5;
 u32 VAR_7 = VAR_0;
 u64 VAR_8;
 int VAR_9;


 if (VAR_4->numerator == 0 || VAR_4->denominator == 0 ||
     VAR_3->numerator == 0 || VAR_3->denominator == 0) {
  *VAR_4 = *VAR_3;
  return VAR_6;
 }

 VAR_8 = FUNC_3((u64)VAR_1 * VAR_4->numerator, VAR_4->denominator);


 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_2); VAR_9++, VAR_5++) {
  u64 VAR_10, VAR_11;

  VAR_10 = FUNC_3((u64)VAR_1 * VAR_3->numerator *
         VAR_5->max_ratio, VAR_3->denominator * VAR_5->keep);

  VAR_11 = FUNC_1((s64)VAR_10 - VAR_8);
  if (VAR_11 < VAR_7) {
   VAR_7 = VAR_11;
   VAR_6 = VAR_5;
  }
 }

 *VAR_4 = *VAR_3;
 FUNC_2(VAR_6, VAR_4);

 return VAR_6;
}
