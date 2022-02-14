
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct nicvf {int sqs_count; struct nicvf** snicvf; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long FUNC_0 (struct nicvf*,int ,int ) ;
 int FUNC_1 (struct nicvf*,int ,int ,unsigned long long) ;

void FUNC_2(struct nicvf *VAR_2, netdev_features_t VAR_3)
{
 u64 VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_1, 0);


 if (VAR_3 & VAR_0)
  VAR_4 |= (1ULL << 25);
 else
  VAR_4 &= ~(1ULL << 25);
 FUNC_1(VAR_2, VAR_1, 0, VAR_4);


 for (VAR_5 = 0; VAR_5 < VAR_2->sqs_count; VAR_5++)
  if (VAR_2->snicvf[VAR_5])
   FUNC_1(VAR_2->snicvf[VAR_5],
           VAR_1, 0, VAR_4);
}
