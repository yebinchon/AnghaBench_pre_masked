
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int width; int height; } ;
struct TYPE_5__ {TYPE_1__ pixfmt; } ;
struct sd {TYPE_2__ gspca_dev; scalar_t__ first_frame; } ;
struct TYPE_6__ {int bulk_size; } ;
struct gspca_dev {int image_len; int last_packet_type; TYPE_3__ cam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int ,int *,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_4,
   u8 *VAR_5,
   int VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_4;

 FUNC_0(VAR_4, VAR_2, VAR_5, VAR_6);


 if (VAR_6 < VAR_4->cam.bulk_size) {


  if (VAR_7->first_frame) {
   VAR_7->first_frame--;
   if (VAR_4->image_len <
      VAR_7->gspca_dev.pixfmt.width *
     VAR_7->gspca_dev.pixfmt.height)
    VAR_4->last_packet_type = VAR_0;
  }
  FUNC_0(VAR_4, VAR_3, ((void*)0), 0);
  FUNC_0(VAR_4, VAR_1, ((void*)0), 0);
 }
}
