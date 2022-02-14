
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx231xx_fh {scalar_t__ type; scalar_t__ stream_on; struct cx231xx* dev; } ;
struct cx231xx {scalar_t__ vbi_stream_on; scalar_t__ stream_on; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct cx231xx_fh *VAR_2)
{
 struct cx231xx *VAR_3 = VAR_2->dev;

 VAR_2->stream_on = 0;

 if (VAR_2->type == VAR_1)
  VAR_3->stream_on = 0;
 if (VAR_2->type == VAR_0)
  VAR_3->vbi_stream_on = 0;
}
