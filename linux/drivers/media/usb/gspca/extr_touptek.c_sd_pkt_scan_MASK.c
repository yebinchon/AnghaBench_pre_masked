
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {scalar_t__ this_f; } ;
struct TYPE_2__ {scalar_t__ sizeimage; } ;
struct gspca_dev {TYPE_1__ pixfmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (struct gspca_dev*,int ,int *,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_6,
   u8 *VAR_7,
   int VAR_8)
{
 struct sd *VAR_9 = (struct sd *) VAR_6;

 if (VAR_8 != VAR_0) {

  if (VAR_9->this_f + VAR_8 == VAR_6->pixfmt.sizeimage) {
   FUNC_1(VAR_6, VAR_5, VAR_7, VAR_8);
   FUNC_0(VAR_6, VAR_2, "finish frame sz %u/%u w/ len %u\n\n",
      VAR_9->this_f, VAR_6->pixfmt.sizeimage, VAR_8);

  } else {
   FUNC_1(VAR_6, VAR_1, ((void*)0), 0);
   FUNC_0(VAR_6, VAR_2, "abort frame sz %u/%u w/ len %u\n\n",
      VAR_9->this_f, VAR_6->pixfmt.sizeimage, VAR_8);
  }
  VAR_9->this_f = 0;
 } else {
  if (VAR_9->this_f == 0)
   FUNC_1(VAR_6, VAR_3, VAR_7, VAR_8);
  else
   FUNC_1(VAR_6, VAR_4, VAR_7, VAR_8);
  VAR_9->this_f += VAR_8;
 }
}
