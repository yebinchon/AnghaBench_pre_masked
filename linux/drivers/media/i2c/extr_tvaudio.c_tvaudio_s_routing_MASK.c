
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct CHIPSTATE {int input; scalar_t__ muted; struct CHIPDESC* desc; } ;
struct CHIPDESC {int flags; int inputmask; int * inputmap; int inputreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct CHIPSTATE*,int ,int ,int ) ;
 struct CHIPSTATE* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2,
        u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct CHIPSTATE *VAR_6 = FUNC_1(VAR_2);
 struct CHIPDESC *VAR_7 = VAR_6->desc;

 if (!(VAR_7->flags & VAR_0))
  return 0;
 if (VAR_3 >= 4)
  return -VAR_1;

 VAR_6->input = VAR_3;
 if (VAR_6->muted)
  return 0;
 FUNC_0(VAR_6, VAR_7->inputreg,
   VAR_7->inputmap[VAR_6->input], VAR_7->inputmask);
 return 0;
}
