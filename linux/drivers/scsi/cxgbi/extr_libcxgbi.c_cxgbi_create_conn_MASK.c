
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_tcp_conn {struct cxgbi_conn* dd_data; } ;
struct iscsi_conn {struct iscsi_tcp_conn* dd_data; } ;
struct iscsi_cls_session {int dummy; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct cxgbi_conn {struct iscsi_conn* iconn; } ;


 int VAR_0 ;
 struct iscsi_cls_conn* FUNC_0 (struct iscsi_cls_session*,int,int ) ;
 int FUNC_1 (int,char*,int ,int ,struct iscsi_cls_session*,struct iscsi_cls_conn*,struct iscsi_conn*,struct iscsi_tcp_conn*,struct cxgbi_conn*) ;

struct iscsi_cls_conn *
FUNC_2(struct iscsi_cls_session *VAR_1, u32 VAR_2)
{
 struct iscsi_cls_conn *VAR_3;
 struct iscsi_conn *VAR_4;
 struct iscsi_tcp_conn *VAR_5;
 struct cxgbi_conn *VAR_6;

 VAR_3 = FUNC_0(VAR_1, sizeof(*VAR_6), VAR_2);
 if (!VAR_3)
  return ((void*)0);

 VAR_4 = VAR_3->dd_data;
 VAR_5 = VAR_4->dd_data;
 VAR_6 = VAR_5->dd_data;
 VAR_6->iconn = VAR_4;

 FUNC_1(1 << VAR_0,
  "cid %u(0x%x), cls 0x%p,0x%p, conn 0x%p,0x%p,0x%p.\n",
  VAR_2, VAR_2, VAR_1, VAR_3, VAR_4, VAR_5, VAR_6);

 return VAR_3;
}
