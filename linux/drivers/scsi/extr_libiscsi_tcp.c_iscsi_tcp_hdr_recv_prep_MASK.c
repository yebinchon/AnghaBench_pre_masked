
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hdr_buf; int segment; } ;
struct iscsi_tcp_conn {TYPE_1__ in; TYPE_2__* iscsi_conn; } ;
struct iscsi_hdr {int dummy; } ;
struct TYPE_4__ {scalar_t__ hdrdgst_en; } ;


 int FUNC_0 (TYPE_2__*,char*,char*) ;
 int FUNC_1 (int *,int ,int,int ,int *) ;
 int VAR_0 ;

void FUNC_2(struct iscsi_tcp_conn *VAR_1)
{
 FUNC_0(VAR_1->iscsi_conn,
        "(%s)\n", VAR_1->iscsi_conn->hdrdgst_en ?
        "digest enabled" : "digest disabled");
 FUNC_1(&VAR_1->in.segment,
    VAR_1->in.hdr_buf, sizeof(struct iscsi_hdr),
    VAR_0, ((void*)0));
}
