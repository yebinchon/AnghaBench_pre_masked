
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_fmtdesc {unsigned int index; int pixelformat; } ;
struct file {int dummy; } ;
struct cedrus_format {unsigned int capabilities; int directions; int pixelformat; } ;
struct cedrus_dev {unsigned int capabilities; } ;
struct cedrus_ctx {struct cedrus_dev* dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct cedrus_ctx* FUNC_0 (struct file*) ;
 struct cedrus_format* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, struct v4l2_fmtdesc *VAR_4,
      u32 VAR_5)
{
 struct cedrus_ctx *VAR_6 = FUNC_0(VAR_3);
 struct cedrus_dev *VAR_7 = VAR_6->dev;
 unsigned int VAR_8 = VAR_7->capabilities;
 struct cedrus_format *VAR_9;
 unsigned int VAR_10, VAR_11;


 VAR_11 = 0;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  VAR_9 = &VAR_2[VAR_10];

  if (VAR_9->capabilities && (VAR_9->capabilities & VAR_8) !=
      VAR_9->capabilities)
   continue;

  if (!(VAR_2[VAR_10].directions & VAR_5))
   continue;

  if (VAR_11 == VAR_4->index)
   break;

  VAR_11++;
 }


 if (VAR_10 < VAR_0) {
  VAR_4->pixelformat = VAR_2[VAR_10].pixelformat;

  return 0;
 }

 return -VAR_1;
}
