
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int datalen; int segment; } ;
struct iscsi_tcp_conn {TYPE_3__ in; struct ahash_request* rx_hash; struct iscsi_conn* iscsi_conn; } ;
struct iscsi_conn {int data; TYPE_2__* session; scalar_t__ datadgst_en; } ;
struct ahash_request {int dummy; } ;
struct TYPE_5__ {TYPE_1__* tt; } ;
struct TYPE_4__ {int caps; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,struct ahash_request*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct iscsi_tcp_conn *VAR_2)
{
 struct iscsi_conn *VAR_3 = VAR_2->iscsi_conn;
 struct ahash_request *VAR_4 = ((void*)0);

 if (VAR_3->datadgst_en &&
     !(VAR_3->session->tt->caps & VAR_0))
  VAR_4 = VAR_2->rx_hash;

 FUNC_0(&VAR_2->in.segment,
    VAR_3->data, VAR_2->in.datalen,
    VAR_1, VAR_4);
}
