
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvsi_priv {int (* put_chars ) (int ,char*,int ) ;int termno; int seqno; } ;
struct hvsi_header {int len; int seqno; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct hvsi_priv *VAR_0, struct hvsi_header *VAR_1)
{
 VAR_1->seqno = FUNC_1(FUNC_0(&VAR_0->seqno));


 return VAR_0->put_chars(VAR_0->termno, (char *)VAR_1, VAR_1->len);
}
