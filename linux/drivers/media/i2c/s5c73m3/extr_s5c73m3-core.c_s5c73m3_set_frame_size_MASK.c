
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5c73m3_frame_size {unsigned int reg_val; int height; int width; } ;
struct s5c73m3 {scalar_t__ mbus_code; int sensor_sd; struct s5c73m3_frame_size** sensor_pix_size; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct s5c73m3*,int ,unsigned int) ;
 int FUNC_1 (int,int ,int *,char*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct s5c73m3 *VAR_6)
{
 const struct s5c73m3_frame_size *VAR_7 =
     VAR_6->sensor_pix_size[VAR_2];
 const struct s5c73m3_frame_size *VAR_8 =
     VAR_6->sensor_pix_size[VAR_3];
 unsigned int VAR_9;

 FUNC_1(1, VAR_5, &VAR_6->sensor_sd,
   "Preview size: %dx%d, reg_val: 0x%x\n",
   VAR_7->width, VAR_7->height, VAR_7->reg_val);

 VAR_9 = VAR_7->reg_val | VAR_1;

 if (VAR_6->mbus_code == VAR_4) {
  FUNC_1(1, VAR_5, &VAR_6->sensor_sd,
    "Capture size: %dx%d, reg_val: 0x%x\n",
    VAR_8->width, VAR_8->height, VAR_8->reg_val);
  VAR_9 |= VAR_8->reg_val;
 }

 return FUNC_0(VAR_6, VAR_0, VAR_9);
}
