
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {scalar_t__ height; scalar_t__ width; } ;
struct s5c73m3_frame_size {scalar_t__ height; scalar_t__ width; } ;
typedef enum s5c73m3_resolution_types { ____Placeholder_s5c73m3_resolution_types } s5c73m3_resolution_types ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct s5c73m3_frame_size** VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static const struct s5c73m3_frame_size *FUNC_1(
     struct v4l2_mbus_framefmt *VAR_3,
     enum s5c73m3_resolution_types VAR_4)
{
 const struct s5c73m3_frame_size *VAR_5;
 const struct s5c73m3_frame_size *VAR_6;
 int VAR_7 = VAR_0;
 int VAR_8;

 VAR_5 = VAR_1[VAR_4];
 VAR_6 = ((void*)0);
 for (VAR_8 = 0; VAR_8 < VAR_2[VAR_4]; ++VAR_8) {
  int VAR_9 = FUNC_0(VAR_5->width - VAR_3->width) +
      FUNC_0(VAR_5->height - VAR_3->height);
  if (VAR_9 < VAR_7) {
   VAR_7 = VAR_9;
   VAR_6 = VAR_5;
  }
  ++VAR_5;
 }

 return VAR_6;
}
