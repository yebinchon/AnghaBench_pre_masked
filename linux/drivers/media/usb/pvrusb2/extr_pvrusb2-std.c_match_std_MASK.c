
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_standard {int id; } ;


 unsigned int FUNC_0 (struct v4l2_standard*) ;
 struct v4l2_standard* VAR_0 ;

__attribute__((used)) static struct v4l2_standard *FUNC_1(v4l2_std_id VAR_1)
{
 unsigned int VAR_2;
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_0[VAR_2].id & VAR_1) {
   return VAR_0 + VAR_2;
  }
 }
 return ((void*)0);
}
