
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct v4l2_fmtdesc {size_t index; int pixelformat; } ;
struct file {int dummy; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
       struct v4l2_fmtdesc *VAR_4)
{
 u32 VAR_5 = VAR_4->index;

 if (VAR_5 >= FUNC_0(VAR_1))
  return -VAR_0;

 VAR_4->pixelformat = VAR_1[VAR_5];

 return 0;
}
