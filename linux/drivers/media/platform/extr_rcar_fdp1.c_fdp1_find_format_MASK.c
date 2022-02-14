
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fdp1_fmt {scalar_t__ fourcc; } ;


 unsigned int FUNC_0 (struct fdp1_fmt*) ;
 struct fdp1_fmt* VAR_0 ;

__attribute__((used)) static const struct fdp1_fmt *FUNC_1(u32 VAR_1)
{
 const struct fdp1_fmt *VAR_2;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_2 = &VAR_0[VAR_3];
  if (VAR_2->fourcc == VAR_1)
   return VAR_2;
 }

 return ((void*)0);
}
