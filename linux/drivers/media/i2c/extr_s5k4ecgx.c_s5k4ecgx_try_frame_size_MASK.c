
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_mbus_framefmt {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_2__ {scalar_t__ height; scalar_t__ width; } ;
struct s5k4ecgx_frmsize {TYPE_1__ size; } ;


 int FUNC_0 (struct s5k4ecgx_frmsize*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 struct s5k4ecgx_frmsize* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct v4l2_mbus_framefmt *VAR_2,
      const struct s5k4ecgx_frmsize **VAR_3)
{
 unsigned int VAR_4 = ~0;
 int VAR_5 = FUNC_0(VAR_1);
 const struct s5k4ecgx_frmsize *VAR_6 = &VAR_1[0],
  *VAR_7 = ((void*)0);

 while (VAR_5--) {
  int VAR_8 = FUNC_1(VAR_6->size.width - VAR_2->width)
    + FUNC_1(VAR_6->size.height - VAR_2->height);
  if (VAR_8 < VAR_4) {
   VAR_4 = VAR_8;
   VAR_7 = VAR_6;
  }
  VAR_6++;
 }
 if (VAR_7) {
  VAR_2->width = VAR_7->size.width;
  VAR_2->height = VAR_7->size.height;
  if (VAR_3)
   *VAR_3 = VAR_7;
  return 0;
 }

 return -VAR_0;
}
