
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vivid_fmt {scalar_t__ fourcc; int buffers; } ;
struct vivid_dev {scalar_t__ multiplanar; } ;


 unsigned int FUNC_0 (struct vivid_fmt*) ;
 struct vivid_fmt* VAR_0 ;

const struct vivid_fmt *FUNC_1(struct vivid_dev *VAR_1, u32 VAR_2)
{
 const struct vivid_fmt *VAR_3;
 unsigned VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  VAR_3 = &VAR_0[VAR_4];
  if (VAR_3->fourcc == VAR_2)
   if (VAR_3->buffers == 1 || VAR_1->multiplanar)
    return VAR_3;
 }

 return ((void*)0);
}
