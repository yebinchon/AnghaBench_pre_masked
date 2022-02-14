
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct videobuf_queue {struct cx231xx_fh* priv_data; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int norm; int width; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_0(struct videobuf_queue *VAR_5, unsigned int *VAR_6,
   unsigned int *VAR_7)
{
 struct cx231xx_fh *VAR_8 = VAR_5->priv_data;
 struct cx231xx *VAR_9 = VAR_8->dev;
 u32 VAR_10 = 0;

 VAR_10 = ((VAR_9->norm & VAR_4) ?
    VAR_3 : VAR_2);

 *VAR_7 = (VAR_9->width * VAR_10 * 2 * 2);
 if (0 == *VAR_6)
  *VAR_6 = VAR_0;

 if (*VAR_6 < VAR_1)
  *VAR_6 = VAR_1;

 return 0;
}
