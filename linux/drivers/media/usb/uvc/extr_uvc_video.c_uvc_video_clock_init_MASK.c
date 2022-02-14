
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_clock {int size; int * samples; int lock; } ;
struct uvc_streaming {struct uvc_clock clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uvc_streaming*) ;

__attribute__((used)) static int FUNC_3(struct uvc_streaming *VAR_2)
{
 struct uvc_clock *VAR_3 = &VAR_2->clock;

 FUNC_1(&VAR_3->lock);
 VAR_3->size = 32;

 VAR_3->samples = FUNC_0(VAR_3->size, sizeof(*VAR_3->samples),
           VAR_1);
 if (VAR_3->samples == ((void*)0))
  return -VAR_0;

 FUNC_2(VAR_2);

 return 0;
}
