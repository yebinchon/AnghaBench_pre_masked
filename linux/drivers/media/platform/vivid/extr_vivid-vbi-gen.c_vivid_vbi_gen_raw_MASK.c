
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vivid_vbi_gen_data {struct v4l2_sliced_vbi_data* data; } ;
struct v4l2_vbi_format {int flags; unsigned int samples_per_line; unsigned int* count; int sampling_rate; scalar_t__* start; } ;
struct v4l2_sliced_vbi_data {unsigned int line; int id; int field; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_sliced_vbi_data const*,int *,int ) ;
 int FUNC_1 (struct v4l2_sliced_vbi_data const*,int *,int ) ;
 int FUNC_2 (struct v4l2_sliced_vbi_data const*,int *,int ) ;

void FUNC_3(const struct vivid_vbi_gen_data *VAR_5,
  const struct v4l2_vbi_format *VAR_6, u8 *VAR_7)
{
 unsigned VAR_8;

 for (VAR_8 = 0; VAR_8 < 25; VAR_8++) {
  const struct v4l2_sliced_vbi_data *VAR_9 = VAR_5->data + VAR_8;
  unsigned VAR_10;
  unsigned VAR_11 = VAR_9->line;
  u8 *VAR_12 = VAR_7;

  VAR_10 = (VAR_9->id & VAR_2) ? 263 : 313;
  if (VAR_9->field)
   VAR_11 += VAR_10;
  VAR_11 -= VAR_6->start[VAR_9->field];

  if (VAR_6->flags & VAR_4)
   VAR_12 += (VAR_11 * 2 + VAR_9->field) *
    VAR_6->samples_per_line;
  else
   VAR_12 += (VAR_11 + VAR_9->field * VAR_6->count[0]) *
    VAR_6->samples_per_line;
  if (VAR_9->id == VAR_0)
   FUNC_0(VAR_9, VAR_12, VAR_6->sampling_rate);
  else if (VAR_9->id == VAR_3)
   FUNC_2(VAR_9, VAR_12, VAR_6->sampling_rate);
  else if (VAR_9->id == VAR_1)
   FUNC_1(VAR_9, VAR_12, VAR_6->sampling_rate);
 }
}
