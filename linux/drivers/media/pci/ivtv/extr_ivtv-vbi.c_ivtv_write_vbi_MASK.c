
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vbi_cc {int even; int odd; } ;
struct v4l2_sliced_vbi_data {int dummy; } ;
struct ivtv {int dummy; } ;


 int FUNC_0 (struct ivtv*,struct vbi_cc*) ;
 int FUNC_1 (struct ivtv*,struct v4l2_sliced_vbi_data const*,struct vbi_cc*,int*) ;

__attribute__((used)) static void FUNC_2(struct ivtv *VAR_0,
      const struct v4l2_sliced_vbi_data *VAR_1,
      size_t VAR_2)
{
 struct vbi_cc VAR_3 = { .odd = { 0x80, 0x80 }, .even = { 0x80, 0x80 } };
 int VAR_4 = 0;
 size_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  FUNC_1(VAR_0, VAR_1 + VAR_5, &VAR_3, &VAR_4);

 if (VAR_4)
  FUNC_0(VAR_0, &VAR_3);
}
