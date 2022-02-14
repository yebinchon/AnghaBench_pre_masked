
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mjpeg_header {int length; int sample_precision; int frame_width; int frame_height; int nb_of_components; } ;


 int FUNC_0 (char*,unsigned int,char*,int,int,int,int,int) ;

__attribute__((used)) static char *FUNC_1(struct mjpeg_header *VAR_0,
   char *VAR_1,
   unsigned int VAR_2)
{
 char *VAR_3 = VAR_1;
 unsigned int VAR_4 = VAR_2;

 if (!VAR_0)
  return "";

 FUNC_0(VAR_3, VAR_4, "[MJPEG header]\n"
   "|- length     = %d\n"
   "|- precision  = %d\n"
   "|- width      = %d\n"
   "|- height     = %d\n"
   "|- components = %d\n",
   VAR_0->length,
   VAR_0->sample_precision,
   VAR_0->frame_width,
   VAR_0->frame_height,
   VAR_0->nb_of_components);

 return VAR_1;
}
