
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int status; struct api_context* context; } ;
struct api_context {int done; int status; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct urb *VAR_0)
{
 struct api_context *VAR_1 = VAR_0->context;

 VAR_1->status = VAR_0->status;
 FUNC_0(&VAR_1->done);
}
