
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_mbus_framefmt {scalar_t__ width; scalar_t__ height; } ;
typedef enum ipu_rotate_mode { ____Placeholder_ipu_rotate_mode } ipu_rotate_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,int,int ,int ,int*,int,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct v4l2_mbus_framefmt *VAR_5,
       struct v4l2_mbus_framefmt *VAR_6,
       enum ipu_rotate_mode VAR_7)
{
 u32 VAR_8 = VAR_5->width;
 u32 VAR_9 = VAR_5->height;

 if (FUNC_0(VAR_7))
  FUNC_1(&VAR_5->width,
          VAR_6->height / 4, VAR_1,
          VAR_4,
          &VAR_5->height,
          VAR_6->width / 4, VAR_2,
          VAR_4, VAR_3);
 else
  FUNC_1(&VAR_5->width,
          VAR_6->width / 4, VAR_2,
          VAR_4,
          &VAR_5->height,
          VAR_6->height / 4, VAR_1,
          VAR_0, VAR_3);

 return VAR_5->width != VAR_8 || VAR_5->height != VAR_9;
}
