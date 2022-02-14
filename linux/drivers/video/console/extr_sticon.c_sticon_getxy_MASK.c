
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {unsigned long vc_origin; unsigned long vc_scr_end; unsigned long vc_cols; scalar_t__ vc_num; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static unsigned long FUNC_0(struct vc_data *VAR_6, unsigned long VAR_7,
      int *VAR_8, int *VAR_9)
{
    int VAR_10, VAR_11;
    unsigned long VAR_12;
    if (VAR_7 >= VAR_6->vc_origin && VAR_7 < VAR_6->vc_scr_end) {
     unsigned long VAR_13 = (VAR_7 - VAR_6->vc_origin) / 2;

     VAR_10 = VAR_13 % VAR_6->vc_cols;
     VAR_11 = VAR_13 / VAR_6->vc_cols;
     if (VAR_6->vc_num == VAR_0)
         VAR_11 += VAR_5;
     VAR_12 = VAR_7 + (VAR_6->vc_cols - VAR_10) * 2;
    } else if (VAR_6->vc_num == VAR_0 && VAR_5) {
     unsigned long VAR_14 = VAR_7 - VAR_2;

     if (VAR_7 < VAR_2)
         VAR_14 += VAR_3 - VAR_1;
     VAR_14 /= 2;
     VAR_10 = VAR_14 % VAR_6->vc_cols;
     VAR_11 = VAR_14 / VAR_6->vc_cols;
 VAR_12 = VAR_7 + (VAR_6->vc_cols - VAR_10) * 2;
 if (VAR_12 == VAR_3)
     VAR_12 = VAR_1;
 if (VAR_12 == VAR_4)
     VAR_12 = VAR_6->vc_origin;
    } else {

     VAR_10 = VAR_11 = 0;
     VAR_12 = VAR_6->vc_origin;
    }
    if (VAR_8) *VAR_8 = VAR_10;
    if (VAR_9) *VAR_9 = VAR_11;
    return VAR_12;
}
