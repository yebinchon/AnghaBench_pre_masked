
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_plane_pix_format {unsigned int sizeimage; unsigned int bytesperline; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct v4l2_plane_pix_format*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct v4l2_plane_pix_format *VAR_1,
       unsigned int VAR_2, unsigned int VAR_3)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->sizeimage = VAR_3;
 if (VAR_1->bytesperline < VAR_2 || VAR_1->bytesperline > VAR_0)
  VAR_1->bytesperline = VAR_2;
}
