
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {int dummy; } ;
typedef enum v4l2_memory { ____Placeholder_v4l2_memory } v4l2_memory ;


 int FUNC_0 (struct videobuf_queue*,unsigned int,unsigned int,int) ;
 int FUNC_1 (struct videobuf_queue*) ;
 int FUNC_2 (struct videobuf_queue*) ;

int FUNC_3(struct videobuf_queue *VAR_0,
   unsigned int VAR_1, unsigned int VAR_2,
   enum v4l2_memory VAR_3)
{
 int VAR_4;
 FUNC_1(VAR_0);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_0);
 return VAR_4;
}
