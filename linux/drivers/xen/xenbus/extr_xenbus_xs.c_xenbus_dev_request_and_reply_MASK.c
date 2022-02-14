
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsd_sockmsg {int len; } ;
struct xb_req_data {int num_vecs; int user_req; void* par; int cb; struct kvec* vec; } ;
struct kvec {struct xsd_sockmsg* iov_base; int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xb_req_data* FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct xb_req_data*,struct xsd_sockmsg*) ;

int FUNC_2(struct xsd_sockmsg *VAR_3, void *VAR_4)
{
 struct xb_req_data *VAR_5;
 struct kvec *VAR_6;

 VAR_5 = FUNC_0(sizeof(*VAR_5) + sizeof(*VAR_6), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = (struct kvec *)(VAR_5 + 1);
 VAR_6->iov_len = VAR_3->len;
 VAR_6->iov_base = VAR_3 + 1;

 VAR_5->vec = VAR_6;
 VAR_5->num_vecs = 1;
 VAR_5->cb = VAR_2;
 VAR_5->par = VAR_4;
 VAR_5->user_req = 1;

 FUNC_1(VAR_5, VAR_3);

 return 0;
}
