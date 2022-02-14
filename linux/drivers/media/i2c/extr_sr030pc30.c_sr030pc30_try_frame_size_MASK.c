
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {scalar_t__ height; scalar_t__ width; } ;
struct sr030pc30_frmsize {scalar_t__ height; scalar_t__ width; } ;


 int FUNC_0 (struct sr030pc30_frmsize*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 struct sr030pc30_frmsize* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct v4l2_mbus_framefmt *VAR_2)
{
 unsigned int VAR_3 = ~0;
 int VAR_4 = FUNC_0(VAR_1);
 const struct sr030pc30_frmsize *VAR_5 = &VAR_1[0],
     *VAR_6 = ((void*)0);
 while (VAR_4--) {
  int VAR_7 = FUNC_1(VAR_5->width - VAR_2->width)
    + FUNC_1(VAR_5->height - VAR_2->height);
  if (VAR_7 < VAR_3) {
   VAR_3 = VAR_7;
   VAR_6 = VAR_5;
  }
  VAR_5++;
 }
 if (VAR_6) {
  VAR_2->width = VAR_6->width;
  VAR_2->height = VAR_6->height;
  return 0;
 }
 return -VAR_0;
}
