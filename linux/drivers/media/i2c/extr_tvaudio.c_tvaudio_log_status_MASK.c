
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int name; } ;
struct CHIPSTATE {int hdl; struct CHIPDESC* desc; } ;
struct CHIPDESC {int name; } ;


 struct CHIPSTATE* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct v4l2_subdev*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0)
{
 struct CHIPSTATE *VAR_1 = FUNC_0(VAR_0);
 struct CHIPDESC *VAR_2 = VAR_1->desc;

 FUNC_2(VAR_0, "Chip: %s\n", VAR_2->name);
 FUNC_1(&VAR_1->hdl, VAR_0->name);
 return 0;
}
