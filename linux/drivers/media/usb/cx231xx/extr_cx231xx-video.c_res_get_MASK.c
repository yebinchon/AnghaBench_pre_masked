
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx231xx_fh {int stream_on; scalar_t__ type; struct cx231xx* dev; } ;
struct cx231xx {int stream_on; int vbi_stream_on; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(struct cx231xx_fh *VAR_4)
{
 struct cx231xx *VAR_5 = VAR_4->dev;
 int VAR_6 = 0;


 if (VAR_4->stream_on)
  return VAR_6;

 if (VAR_4->type == VAR_3) {
  if (VAR_5->stream_on)
   return -VAR_0;
  VAR_5->stream_on = 1;
 } else if (VAR_4->type == VAR_2) {
  if (VAR_5->vbi_stream_on)
   return -VAR_0;
  VAR_5->vbi_stream_on = 1;
 } else
  return -VAR_1;

 VAR_4->stream_on = 1;

 return VAR_6;
}
