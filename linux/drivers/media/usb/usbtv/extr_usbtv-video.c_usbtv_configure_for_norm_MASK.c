
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct usbtv_norm_params {int norm; int cap_width; int cap_height; } ;
struct usbtv {int width; int height; int n_chunks; int norm; } ;


 int FUNC_0 (struct usbtv_norm_params*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct usbtv_norm_params* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct usbtv *VAR_3, v4l2_std_id VAR_4)
{
 int VAR_5, VAR_6 = 0;
 struct usbtv_norm_params *VAR_7 = ((void*)0);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  if (VAR_2[VAR_5].norm & VAR_4) {
   VAR_7 = &VAR_2[VAR_5];
   break;
  }
 }

 if (VAR_7) {
  VAR_3->width = VAR_7->cap_width;
  VAR_3->height = VAR_7->cap_height;
  VAR_3->n_chunks = VAR_3->width * VAR_3->height
      / 4 / VAR_1;
  VAR_3->norm = VAR_4;
 } else
  VAR_6 = -VAR_0;

 return VAR_6;
}
