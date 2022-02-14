
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uas_stream {int * req_status; int * req_out; int * req_in; } ;
struct f_uas {int ep_status; int ep_out; int ep_in; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct f_uas *VAR_0, struct uas_stream *VAR_1)
{

 if (!VAR_1->req_in)
  return;

 FUNC_0(VAR_0->ep_in, VAR_1->req_in);
 FUNC_0(VAR_0->ep_out, VAR_1->req_out);
 FUNC_0(VAR_0->ep_status, VAR_1->req_status);

 VAR_1->req_in = ((void*)0);
 VAR_1->req_out = ((void*)0);
 VAR_1->req_status = ((void*)0);
}
