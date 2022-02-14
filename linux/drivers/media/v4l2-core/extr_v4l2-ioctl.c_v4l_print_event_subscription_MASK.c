
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_event_subscription {int flags; int id; int type; } ;


 int FUNC_0 (char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_event_subscription *VAR_2 = VAR_0;

 FUNC_0("type=0x%x, id=0x%x, flags=0x%x\n",
   VAR_2->type, VAR_2->id, VAR_2->flags);
}
