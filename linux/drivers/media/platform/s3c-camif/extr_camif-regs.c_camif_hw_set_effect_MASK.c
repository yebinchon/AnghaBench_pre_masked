
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_control {unsigned int member_0; unsigned int id; unsigned int value; int const member_1; } ;
struct camif_dev {TYPE_2__* vp; TYPE_1__* variant; } ;
struct TYPE_4__ {int offset; } ;
struct TYPE_3__ {scalar_t__ ip_revision; } ;


 unsigned int FUNC_0 (struct v4l2_control const*) ;




 unsigned int VAR_0 ;


 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct camif_dev*,int ) ;
 int FUNC_3 (struct camif_dev*,int ,unsigned int) ;

void FUNC_4(struct camif_dev *VAR_4, unsigned int VAR_5,
   unsigned int VAR_6, unsigned int VAR_7)
{
 static const struct v4l2_control VAR_8[] = {
  { 131, 139 },
  { 134, 141 },
  { 130, 141 },
  { 132, 137 },
  { 135, 140 },
  { 133, 138 },
  { 128, 136 },
  { 129, 141 },
 };
 unsigned int VAR_9, VAR_10;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_8); VAR_9++)
  if (VAR_8[VAR_9].id == VAR_5)
   break;

 if (VAR_9 == FUNC_0(VAR_8))
  return;

 VAR_10 = FUNC_2(VAR_4, FUNC_1(VAR_4->vp->offset));

 VAR_10 &= ~VAR_0;
 VAR_10 |= VAR_8[VAR_9].value;

 if (VAR_4->variant->ip_revision >= VAR_3) {
  if (VAR_5 == 131)
   VAR_10 &= ~VAR_1;
  else
   VAR_10 |= VAR_1;
 }
 VAR_10 &= ~VAR_2;
 VAR_10 |= VAR_6 | (VAR_7 << 13);
 FUNC_3(VAR_4, FUNC_1(VAR_4->vp->offset), VAR_10);
}
