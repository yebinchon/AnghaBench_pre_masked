
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cobalt_stream {int dma_channel; struct cobalt* cobalt; } ;
struct cobalt {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

bool FUNC_2(struct cobalt_stream *VAR_1)
{
 struct cobalt *VAR_2 = VAR_1->cobalt;

 if (FUNC_1(FUNC_0(VAR_1->dma_channel)) & VAR_0)
  return 1;

 return 0;
}
