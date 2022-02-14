
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int flags; int default_value; int step; int maximum; int minimum; int name; int type; int id; } ;


 int FUNC_0 (char*,int ,int ,int,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_queryctrl *VAR_2 = VAR_0;

 FUNC_0("id=0x%x, type=%d, name=%.*s, min/max=%d/%d, step=%d, default=%d, flags=0x%08x\n",
   VAR_2->id, VAR_2->type, (int)sizeof(VAR_2->name), VAR_2->name,
   VAR_2->minimum, VAR_2->maximum,
   VAR_2->step, VAR_2->default_value, VAR_2->flags);
}
