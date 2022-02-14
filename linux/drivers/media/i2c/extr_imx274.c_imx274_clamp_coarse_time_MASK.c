
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct stimx274 {TYPE_1__* mode; } ;
struct TYPE_2__ {scalar_t__ min_frame_len; scalar_t__ min_SHR; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct stimx274*,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct stimx274 *VAR_1, u32 *VAR_2,
        u32 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3);
 if (VAR_4)
  return VAR_4;

 if (*VAR_3 < VAR_1->mode->min_frame_len)
  *VAR_3 = VAR_1->mode->min_frame_len;

 *VAR_2 = *VAR_3 - *VAR_2;
 if (*VAR_2 > *VAR_3 - VAR_0)
  *VAR_2 = *VAR_3 - VAR_0;
 else if (*VAR_2 < VAR_1->mode->min_SHR)
  *VAR_2 = VAR_1->mode->min_SHR;

 return 0;
}
