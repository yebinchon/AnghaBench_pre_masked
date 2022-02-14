
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_video {scalar_t__ req_size; int req_free; int ** req_buffer; int ** req; int ep; } ;


 int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct uvc_video *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  if (VAR_1->req[VAR_2]) {
   FUNC_2(VAR_1->ep, VAR_1->req[VAR_2]);
   VAR_1->req[VAR_2] = ((void*)0);
  }

  if (VAR_1->req_buffer[VAR_2]) {
   FUNC_1(VAR_1->req_buffer[VAR_2]);
   VAR_1->req_buffer[VAR_2] = ((void*)0);
  }
 }

 FUNC_0(&VAR_1->req_free);
 VAR_1->req_size = 0;
 return 0;
}
