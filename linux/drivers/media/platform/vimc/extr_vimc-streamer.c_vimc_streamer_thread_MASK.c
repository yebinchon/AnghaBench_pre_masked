
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vimc_stream {int pipe_size; TYPE_1__** ved_pipeline; } ;
struct TYPE_2__ {int * (* process_frame ) (TYPE_1__*,int *) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int * FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(void *VAR_2)
{
 struct vimc_stream *VAR_3 = VAR_2;
 u8 *VAR_4 = ((void*)0);
 int VAR_5;

 FUNC_4();

 for (;;) {
  FUNC_6();
  if (FUNC_1())
   break;

  for (VAR_5 = VAR_3->pipe_size - 1; VAR_5 >= 0; VAR_5--) {
   VAR_4 = VAR_3->ved_pipeline[VAR_5]->process_frame(
     VAR_3->ved_pipeline[VAR_5], VAR_4);
   if (!VAR_4 || FUNC_0(VAR_4))
    break;
  }

  FUNC_3(VAR_1);
  FUNC_2(VAR_0 / 60);
 }

 return 0;
}
