
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct TYPE_2__ {unsigned int width; unsigned int height; } ;
struct sh_vou_geometry {unsigned int in_width; unsigned int in_height; int scale_idx_h; int scale_idx_v; TYPE_1__ output; } ;


 int FUNC_0 (unsigned int*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int*,int ,unsigned int,int,unsigned int*,int ,unsigned int,int,int ) ;
 unsigned int* VAR_5 ;
 unsigned int* VAR_6 ;
 unsigned int* VAR_7 ;
 unsigned int* VAR_8 ;

__attribute__((used)) static void FUNC_3(struct sh_vou_geometry *VAR_9, v4l2_std_id VAR_10)
{

 unsigned int VAR_11 = VAR_0, VAR_12 = 0, VAR_13;
 int VAR_14, VAR_15 = 0;

 if (VAR_10 & VAR_1)
  VAR_13 = 480;
 else
  VAR_13 = 576;


 FUNC_2(&VAR_9->in_width,
         VAR_4, VAR_2, 2,
         &VAR_9->in_height,
         VAR_3, VAR_13, 1, 0);


 for (VAR_14 = FUNC_0(VAR_6) - 1; VAR_14 >= 0; VAR_14--) {
  unsigned int VAR_16;
  unsigned int VAR_17 = VAR_9->output.width * VAR_5[VAR_14] /
   VAR_6[VAR_14];

  if (VAR_17 > VAR_2)

   break;

  VAR_16 = FUNC_1(VAR_17 - VAR_9->in_width);
  if (VAR_16 < VAR_11) {
   VAR_11 = VAR_16;
   VAR_15 = VAR_14;
   VAR_12 = VAR_17;
  }
  if (!VAR_16)
   break;
 }

 VAR_9->in_width = VAR_12;
 VAR_9->scale_idx_h = VAR_15;

 VAR_11 = VAR_0;


 for (VAR_14 = FUNC_0(VAR_8) - 1; VAR_14 >= 0; VAR_14--) {
  unsigned int VAR_18;
  unsigned int VAR_19 = VAR_9->output.height * VAR_7[VAR_14] /
   VAR_8[VAR_14];

  if (VAR_19 > VAR_13)

   break;

  VAR_18 = FUNC_1(VAR_19 - VAR_9->in_height);
  if (VAR_18 < VAR_11) {
   VAR_11 = VAR_18;
   VAR_15 = VAR_14;
   VAR_12 = VAR_19;
  }
  if (!VAR_18)
   break;
 }

 VAR_9->in_height = VAR_12;
 VAR_9->scale_idx_v = VAR_15;
}
