
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int denominator; int numerator; } ;
struct v4l2_standard {int framelines; TYPE_1__ frameperiod; int name; scalar_t__ id; int index; } ;


 int FUNC_0 (char*,int ,unsigned long long,int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const void *VAR_0, bool VAR_1)
{
 const struct v4l2_standard *VAR_2 = VAR_0;

 FUNC_0("index=%u, id=0x%Lx, name=%.*s, fps=%u/%u, framelines=%u\n",
  VAR_2->index,
  (unsigned long long)VAR_2->id, (int)sizeof(VAR_2->name), VAR_2->name,
  VAR_2->frameperiod.numerator,
  VAR_2->frameperiod.denominator,
  VAR_2->framelines);
}
