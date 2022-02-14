
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_sliced_vbi_cap {scalar_t__ type; int service_set; int** service_lines; scalar_t__* reserved; } ;
struct file {int dummy; } ;
struct cx18 {scalar_t__ is_50hz; } ;
struct TYPE_2__ {struct cx18* cx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int,int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
     struct v4l2_sliced_vbi_cap *VAR_6)
{
 struct cx18 *VAR_7 = FUNC_0(VAR_5)->cx;
 int VAR_8 = VAR_7->is_50hz ? VAR_3 : VAR_2;
 int VAR_9, VAR_10;

 if (VAR_6->type != VAR_1)
  return -VAR_0;

 VAR_6->service_set = 0;
 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < 24; VAR_10++) {
   if (FUNC_1(VAR_9, VAR_10, VAR_7->is_50hz)) {




    VAR_6->service_lines[VAR_9][VAR_10] = VAR_8;
    VAR_6->service_set |= VAR_8;
   } else
    VAR_6->service_lines[VAR_9][VAR_10] = 0;
  }
 }
 for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
  VAR_6->reserved[VAR_9] = 0;
 return 0;
}
