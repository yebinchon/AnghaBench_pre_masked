
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nicvf {scalar_t__ hw_tso; scalar_t__ t88; } ;
struct TYPE_2__ {scalar_t__ nr_frags; scalar_t__ gso_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct nicvf *VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4 = VAR_0;

 if (FUNC_1(VAR_3)->gso_size && !VAR_2->hw_tso) {
  VAR_4 = FUNC_0(VAR_3);
  return VAR_4;
 }


 if (VAR_2->t88 && VAR_2->hw_tso && FUNC_1(VAR_3)->gso_size)
  VAR_4 += VAR_1;

 if (FUNC_1(VAR_3)->nr_frags)
  VAR_4 += FUNC_1(VAR_3)->nr_frags;

 return VAR_4;
}
