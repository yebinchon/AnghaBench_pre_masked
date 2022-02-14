
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videobuf_queue {scalar_t__ reading; scalar_t__ streaming; } ;


 int FUNC_0 (struct videobuf_queue*) ;
 int FUNC_1 (struct videobuf_queue*) ;
 int FUNC_2 (struct videobuf_queue*) ;
 int FUNC_3 (struct videobuf_queue*) ;

void FUNC_4(struct videobuf_queue *VAR_0)
{
 FUNC_2(VAR_0);

 if (VAR_0->streaming)
  FUNC_1(VAR_0);

 if (VAR_0->reading)
  FUNC_0(VAR_0);

 FUNC_3(VAR_0);
}
