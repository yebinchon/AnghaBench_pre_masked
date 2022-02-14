
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ height; scalar_t__ width; int code; } ;
struct m5mols_resolution {int type; int reg; scalar_t__ height; scalar_t__ width; } ;
typedef enum m5mols_restype { ____Placeholder_m5mols_restype } m5mols_restype ;


 int FUNC_0 (struct m5mols_resolution*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 struct m5mols_resolution* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
        struct v4l2_mbus_framefmt *VAR_3,
        enum m5mols_restype *VAR_4,
        u32 *VAR_5)
{
 const struct m5mols_resolution *VAR_6 = &VAR_1[0];
 const struct m5mols_resolution *VAR_7 = ((void*)0);
 enum m5mols_restype VAR_8 = FUNC_1(VAR_3->code);
 int VAR_9 = FUNC_0(VAR_1);
 unsigned int VAR_10 = ~0;

 while (VAR_9--) {
  int VAR_11;
  if (VAR_8 == VAR_6->type) {
   VAR_11 = FUNC_2(VAR_6->width - VAR_3->width)
    + FUNC_2(VAR_6->height - VAR_3->height);

   if (VAR_11 < VAR_10) {
    VAR_10 = VAR_11;
    VAR_7 = VAR_6;
   }
  }
  VAR_6++;
 }
 if (VAR_7) {
  VAR_3->width = VAR_7->width;
  VAR_3->height = VAR_7->height;
  *VAR_5 = VAR_7->reg;
  *VAR_4 = VAR_8;
  return 0;
 }

 return -VAR_0;
}
