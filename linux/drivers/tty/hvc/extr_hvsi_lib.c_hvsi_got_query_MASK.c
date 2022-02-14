
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int len; int type; } ;
struct TYPE_4__ {int version; } ;
struct hvsi_query_response {TYPE_3__ hdr; int query_seqno; TYPE_1__ u; int verb; } ;
struct TYPE_5__ {int seqno; } ;
struct hvsi_query {TYPE_2__ hdr; int verb; } ;
struct hvsi_priv {int established; int termno; scalar_t__ inbuf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct hvsi_priv*,TYPE_3__*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(struct hvsi_priv *VAR_3)
{
 struct hvsi_query *VAR_4 = (struct hvsi_query *)VAR_3->inbuf;
 struct hvsi_query_response VAR_5;


 if (FUNC_0(VAR_4->verb) != VAR_1)
  return;

 FUNC_3("HVSI@%x: Got version query, sending response...\n",
   VAR_3->termno);


 VAR_5.hdr.type = VAR_2;
 VAR_5.hdr.len = sizeof(struct hvsi_query_response);
 VAR_5.verb = FUNC_1(VAR_1);
 VAR_5.u.version = VAR_0;
 VAR_5.query_seqno = VAR_4->hdr.seqno;
 FUNC_2(VAR_3, &VAR_5.hdr);


 VAR_3->established = 1;
}
