
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int* bytes; } ;
struct CHIPSTATE {TYPE_1__ shadow; struct v4l2_subdev sd; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (struct CHIPSTATE*,int,int) ;
 int FUNC_2 (struct v4l2_subdev*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct CHIPSTATE *VAR_1,
        int VAR_2, int VAR_3, int VAR_4)
{
 struct v4l2_subdev *VAR_5 = &VAR_1->sd;

 if (VAR_4 != 0) {
  if (VAR_2 < 0) {
   VAR_3 = (VAR_1->shadow.bytes[1] & ~VAR_4) | (VAR_3 & VAR_4);
  } else {
   if (VAR_2 + 1 >= FUNC_0(VAR_1->shadow.bytes)) {
    FUNC_2(VAR_5,
     "Tried to access a non-existent register: %d\n",
     VAR_2);
    return -VAR_0;
   }

   VAR_3 = (VAR_1->shadow.bytes[VAR_2+1] & ~VAR_4) | (VAR_3 & VAR_4);
  }
 }
 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
