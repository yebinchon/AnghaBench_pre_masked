
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_fmt {int fourcc; } ;
struct vivid_dev {scalar_t__ multiplanar; } ;
struct v4l2_fmtdesc {size_t index; int pixelformat; } ;
struct file {int dummy; } ;


 size_t FUNC_0 (struct vivid_fmt*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 struct vivid_dev* FUNC_1 (struct file*) ;
 struct vivid_fmt* VAR_2 ;

int FUNC_2(struct file *VAR_3, void *VAR_4,
     struct v4l2_fmtdesc *VAR_5)
{
 struct vivid_dev *VAR_6 = FUNC_1(VAR_3);
 const struct vivid_fmt *VAR_7;

 if (VAR_5->index >= FUNC_0(VAR_2) -
     (VAR_6->multiplanar ? 0 : VAR_1))
  return -VAR_0;

 VAR_7 = &VAR_2[VAR_5->index];

 VAR_5->pixelformat = VAR_7->fourcc;
 return 0;
}
