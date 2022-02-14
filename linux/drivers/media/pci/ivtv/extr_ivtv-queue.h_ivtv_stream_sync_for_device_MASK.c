
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ivtv_stream {int sg_handle; TYPE_1__* itv; } ;
struct ivtv_sg_element {int dummy; } ;
struct TYPE_2__ {int pdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ivtv_stream*) ;
 int FUNC_1 (int ,int ,int,int ) ;

__attribute__((used)) static inline void FUNC_2(struct ivtv_stream *VAR_1)
{
 if (FUNC_0(VAR_1))
  FUNC_1(VAR_1->itv->pdev, VAR_1->sg_handle,
   sizeof(struct ivtv_sg_element), VAR_0);
}
