
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {unsigned int vc_rows; scalar_t__ vc_mode; unsigned long vc_origin; unsigned int vc_size_row; unsigned int vc_scr_end; unsigned int vc_screenbuf_size; unsigned int vc_visible_origin; unsigned long vc_pos; int vc_video_erase_char; } ;
typedef enum con_scroll { ____Placeholder_con_scroll } con_scroll ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,unsigned int) ;
 int FUNC_1 (int *,int *,unsigned int) ;
 int FUNC_2 (int *,int ,unsigned int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_3 (struct vc_data*) ;
 unsigned long VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_4 (struct vc_data*) ;
 int FUNC_5 (struct vc_data*,unsigned int,unsigned int) ;

__attribute__((used)) static bool FUNC_6(struct vc_data *VAR_7, unsigned int VAR_8, unsigned int VAR_9,
  enum con_scroll VAR_10, unsigned int VAR_11)
{
 unsigned long VAR_12;
 unsigned int VAR_13;

 if (VAR_8 || VAR_9 != VAR_7->vc_rows || VAR_3 || VAR_7->vc_mode != VAR_0)
  return 0;

 if (!VAR_2 || VAR_11 >= VAR_7->vc_rows / 2)
  return 0;

 FUNC_4(VAR_7);
 VAR_12 = VAR_7->vc_origin;
 VAR_13 = VAR_11 * VAR_7->vc_size_row;
 if (VAR_10 == VAR_1) {
  FUNC_5(VAR_7, VAR_8, VAR_11);
  if (VAR_7->vc_scr_end + VAR_13 >= VAR_6) {
   FUNC_0((u16 *) VAR_5,
        (u16 *) (VAR_12 + VAR_13),
        VAR_7->vc_screenbuf_size - VAR_13);
   VAR_7->vc_origin = VAR_5;
   VAR_4 = VAR_12 - VAR_5;
  } else
   VAR_7->vc_origin += VAR_13;
  FUNC_2((u16 *) (VAR_7->vc_origin + VAR_7->vc_screenbuf_size -
         VAR_13), VAR_7->vc_video_erase_char,
       VAR_13);
 } else {
  if (VAR_12 - VAR_13 < VAR_5) {
   FUNC_1((u16 *) (VAR_6 -
           VAR_7->vc_screenbuf_size +
           VAR_13), (u16 *) VAR_12,
         VAR_7->vc_screenbuf_size - VAR_13);
   VAR_7->vc_origin = VAR_6 - VAR_7->vc_screenbuf_size;
   VAR_4 = 0;
  } else
   VAR_7->vc_origin -= VAR_13;
  VAR_7->vc_scr_end = VAR_7->vc_origin + VAR_7->vc_screenbuf_size;
  FUNC_2((u16 *) (VAR_7->vc_origin), VAR_7->vc_video_erase_char,
       VAR_13);
 }
 VAR_7->vc_scr_end = VAR_7->vc_origin + VAR_7->vc_screenbuf_size;
 VAR_7->vc_visible_origin = VAR_7->vc_origin;
 FUNC_3(VAR_7);
 VAR_7->vc_pos = (VAR_7->vc_pos - VAR_12) + VAR_7->vc_origin;
 return 1;
}
