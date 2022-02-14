
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_screenbuf_size; int vc_video_erase_char; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct vc_data *VAR_6, int VAR_7, int VAR_8)
{
 if (VAR_4 == VAR_2) {
  if (VAR_7)
   FUNC_2(VAR_5,
    FUNC_0(VAR_6->vc_video_erase_char),
    VAR_6->vc_screenbuf_size);

  return 1;
 } else {
  if (VAR_7)
   FUNC_1(0x00, VAR_3);
  else
   FUNC_1(VAR_1 | VAR_0,
    VAR_3);
  return 0;
 }
}
