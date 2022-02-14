
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uas_stream {int * req_out; int * req_status; void* req_in; } ;
struct f_uas {int ep_out; int ep_status; int ep_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct f_uas *VAR_2, struct uas_stream *VAR_3)
{
 VAR_3->req_in = FUNC_0(VAR_2->ep_in, VAR_1);
 if (!VAR_3->req_in)
  goto out;

 VAR_3->req_out = FUNC_0(VAR_2->ep_out, VAR_1);
 if (!VAR_3->req_out)
  goto err_out;

 VAR_3->req_status = FUNC_0(VAR_2->ep_status, VAR_1);
 if (!VAR_3->req_status)
  goto err_sts;

 return 0;
err_sts:
 FUNC_1(VAR_2->ep_status, VAR_3->req_status);
 VAR_3->req_status = ((void*)0);
err_out:
 FUNC_1(VAR_2->ep_out, VAR_3->req_out);
 VAR_3->req_out = ((void*)0);
out:
 return -VAR_0;
}
