
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct vb2_queue {int type; } ;
struct device {int dummy; } ;
struct amvdec_session {int pixfmt_cap; } ;


 int VAR_0 ;




 unsigned int FUNC_0 (struct amvdec_session*) ;
 int FUNC_1 (struct vb2_queue*,struct amvdec_session*,unsigned int*,int) ;
 struct amvdec_session* FUNC_2 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_3(struct vb2_queue *VAR_1, unsigned int *VAR_2,
       unsigned int *VAR_3, unsigned int VAR_4[],
       struct device *VAR_5[])
{
 struct amvdec_session *VAR_6 = FUNC_2(VAR_1);
 u32 VAR_7 = FUNC_0(VAR_6);

 if (*VAR_3) {
  switch (VAR_1->type) {
  case 130:
   if (*VAR_3 != 1 || VAR_4[0] < VAR_7)
    return -VAR_0;
   break;
  case 131:
   switch (VAR_6->pixfmt_cap) {
   case 129:
    if (*VAR_3 != 2 ||
        VAR_4[0] < VAR_7 ||
        VAR_4[1] < VAR_7 / 2)
     return -VAR_0;
    break;
   case 128:
    if (*VAR_3 != 3 ||
        VAR_4[0] < VAR_7 ||
        VAR_4[1] < VAR_7 / 4 ||
        VAR_4[2] < VAR_7 / 4)
     return -VAR_0;
    break;
   default:
    return -VAR_0;
   }

   FUNC_1(VAR_1, VAR_6, VAR_2, 0);
   break;
  }

  return 0;
 }

 switch (VAR_1->type) {
 case 130:
  VAR_4[0] = FUNC_0(VAR_6);
  *VAR_3 = 1;
  break;
 case 131:
  switch (VAR_6->pixfmt_cap) {
  case 129:
   VAR_4[0] = VAR_7;
   VAR_4[1] = VAR_7 / 2;
   *VAR_3 = 2;
   break;
  case 128:
   VAR_4[0] = VAR_7;
   VAR_4[1] = VAR_7 / 4;
   VAR_4[2] = VAR_7 / 4;
   *VAR_3 = 3;
   break;
  default:
   return -VAR_0;
  }

  FUNC_1(VAR_1, VAR_6, VAR_2, 1);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
