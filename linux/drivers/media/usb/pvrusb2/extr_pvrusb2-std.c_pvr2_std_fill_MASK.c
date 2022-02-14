
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_standard {int index; scalar_t__* name; int id; } ;


 int VAR_0 ;
 struct v4l2_standard* FUNC_0 (int ) ;
 int FUNC_1 (struct v4l2_standard*,struct v4l2_standard*,int) ;
 unsigned int FUNC_2 (scalar_t__*,int,int ) ;
 int FUNC_3 (int ,char*,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_standard *VAR_1,v4l2_std_id VAR_2)
{
 struct v4l2_standard *VAR_3;
 int VAR_4;
 unsigned int VAR_5;
 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3) return 0;
 VAR_4 = VAR_1->index;
 FUNC_1(VAR_1,VAR_3,sizeof(*VAR_3));
 VAR_1->index = VAR_4;
 VAR_1->id = VAR_2;
 VAR_5 = FUNC_2(VAR_1->name,sizeof(VAR_1->name)-1,VAR_2);
 VAR_1->name[VAR_5] = 0;
 FUNC_3(VAR_0,"Set up standard idx=%u name=%s",
     VAR_1->index,VAR_1->name);
 return !0;
}
