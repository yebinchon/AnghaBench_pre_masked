
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {void* data; } ;
struct seq_file {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int FUNC_0 (struct seq_file*,char*,int,...) ;
 void* FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct seq_file*,void*,int,char*) ;

__attribute__((used)) static void FUNC_6(struct seq_file *VAR_0, struct sk_buff *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = FUNC_3(VAR_1);
 void *VAR_4 = VAR_1->data;
 int VAR_5 = FUNC_4(VAR_1)->nr_frags;

 FUNC_0(VAR_0, "    len = %d\n", VAR_3);
 FUNC_5(VAR_0, VAR_4, VAR_3, "      : ");

 if (VAR_5) {
  FUNC_0(VAR_0, "    nr_frags = %d\n", VAR_5);
  for (VAR_2 = 0; VAR_2 < VAR_5; VAR_2++) {
   const skb_frag_t *VAR_6 = &FUNC_4(VAR_1)->frags[VAR_2];

   VAR_3 = FUNC_2(VAR_6);
   VAR_4 = FUNC_1(VAR_6);
   FUNC_0(VAR_0, "    [%2d] : len = %d\n", VAR_2, VAR_3);
   FUNC_5(VAR_0, VAR_4, VAR_3, "      : ");
  }
 }
}
