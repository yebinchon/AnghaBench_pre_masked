
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int image_mask; int vcinterface; int vendpoint; scalar_t__ frame_trailer_size; scalar_t__ frame_header_size; int type; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

void FUNC_2(struct pwc_device *VAR_8)
{
 if (FUNC_0(VAR_8->type)) {

  VAR_8->image_mask = 1 << VAR_4 | 1 << VAR_1 | 1 << VAR_0;
  VAR_8->vcinterface = 2;
  VAR_8->vendpoint = 4;
  VAR_8->frame_header_size = 0;
  VAR_8->frame_trailer_size = 0;

 } else if (FUNC_1(VAR_8->type)) {

  VAR_8->image_mask = 1 << VAR_2 | 1 << VAR_3 | 1 << VAR_5;
  VAR_8->vcinterface = 3;
  VAR_8->vendpoint = 5;
  VAR_8->frame_header_size = VAR_6;
  VAR_8->frame_trailer_size = VAR_7;

 } else {

  VAR_8->image_mask = 1 << VAR_4 | 1 << VAR_2 | 1 << VAR_1 | 1 << VAR_3 | 1 << VAR_0 | 1 << VAR_5;
  VAR_8->vcinterface = 3;
  VAR_8->vendpoint = 4;
  VAR_8->frame_header_size = 0;
  VAR_8->frame_trailer_size = 0;
 }
}
