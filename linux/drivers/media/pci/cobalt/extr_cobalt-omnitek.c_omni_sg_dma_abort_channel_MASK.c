
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cobalt_stream {int dma_channel; struct cobalt* cobalt; } ;
struct cobalt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct cobalt_stream*) ;

void FUNC_3(struct cobalt_stream *VAR_1)
{
 struct cobalt *VAR_2 = VAR_1->cobalt;

 if (FUNC_2(VAR_1) == 0)
  FUNC_1(VAR_0, FUNC_0(VAR_1->dma_channel));
}
