
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct cfhsi {int * qhead; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int *) ;

__attribute__((used)) static struct sk_buff *FUNC_1(struct cfhsi *VAR_1)
{
 struct sk_buff *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  VAR_2 = FUNC_0(&VAR_1->qhead[VAR_3]);
  if (VAR_2)
   break;
 }

 return VAR_2;
}
