
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {scalar_t__ height; scalar_t__ width; } ;
struct ov965x_framesize {scalar_t__ height; scalar_t__ width; } ;


 int FUNC_0 (struct ov965x_framesize*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 struct ov965x_framesize* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct v4l2_mbus_framefmt *VAR_2,
        const struct ov965x_framesize **VAR_3)
{
 const struct ov965x_framesize *VAR_4 = &VAR_1[0],
  *VAR_5 = ((void*)0);
 int VAR_6 = FUNC_0(VAR_1);
 unsigned int VAR_7 = VAR_0;

 while (VAR_6--) {
  int VAR_8 = FUNC_1(VAR_4->width - VAR_2->width)
    + FUNC_1(VAR_4->height - VAR_2->height);
  if (VAR_8 < VAR_7) {
   VAR_7 = VAR_8;
   VAR_5 = VAR_4;
  }
  VAR_4++;
 }
 if (!VAR_5)
  VAR_5 = &VAR_1[0];
 VAR_2->width = VAR_5->width;
 VAR_2->height = VAR_5->height;
 if (VAR_3)
  *VAR_3 = VAR_5;
}
