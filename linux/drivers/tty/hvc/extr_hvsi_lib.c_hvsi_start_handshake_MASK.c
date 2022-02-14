
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; int type; } ;
struct hvsi_query {TYPE_1__ hdr; int verb; } ;
struct hvsi_priv {int termno; int seqno; scalar_t__ established; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hvsi_priv*,TYPE_1__*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void FUNC_4(struct hvsi_priv *VAR_2)
{
 struct hvsi_query VAR_3;


 VAR_2->established = 0;
 FUNC_0(&VAR_2->seqno, 0);

 FUNC_3("HVSI@%x: Handshaking started\n", VAR_2->termno);


 VAR_3.hdr.type = VAR_1;
 VAR_3.hdr.len = sizeof(struct hvsi_query);
 VAR_3.verb = FUNC_1(VAR_0);
 FUNC_2(VAR_2, &VAR_3.hdr);
}
