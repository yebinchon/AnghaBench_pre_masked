
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int height; } ;
struct vc_data {int vc_cols; int vc_rows; scalar_t__ vc_screenbuf_size; int vc_num; scalar_t__ vc_screenbuf; scalar_t__ vc_origin; TYPE_1__ vc_font; } ;
struct TYPE_4__ {int orig_video_lines; int orig_video_cols; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct vc_data*,int,int) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_3(struct vc_data *VAR_9)
{
 int VAR_10 = VAR_9->vc_cols * VAR_0;
 int VAR_11 = VAR_9->vc_rows * VAR_9->vc_font.height;
 int VAR_12 = VAR_1.orig_video_lines * VAR_2/
  VAR_9->vc_font.height;





 VAR_4 = VAR_9->vc_cols;
 VAR_5 = VAR_9->vc_rows;




 if (!VAR_3) {
  FUNC_0((u16 *) VAR_9->vc_origin, (u16 *) VAR_9->vc_screenbuf,
       VAR_9->vc_screenbuf_size > VAR_6 ?
    VAR_6 : VAR_9->vc_screenbuf_size);

  if ((VAR_7 != VAR_10 || VAR_8 != VAR_11) &&
      (!(VAR_4 % 2) &&
       VAR_4 <= VAR_1.orig_video_cols &&
       VAR_5 <= VAR_12))
   FUNC_1(VAR_9, VAR_9->vc_cols, VAR_9->vc_rows);
 }

 FUNC_2(VAR_9->vc_num);
 return 0;
}
