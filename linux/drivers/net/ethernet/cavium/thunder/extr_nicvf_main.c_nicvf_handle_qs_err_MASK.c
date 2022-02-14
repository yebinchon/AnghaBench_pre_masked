
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct queue_set {int cq_cnt; int * sq; } ;
struct nicvf {int netdev; struct queue_set* qs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nicvf*,struct queue_set*,int,int) ;
 int FUNC_3 (int ,int,int *,int ) ;
 int FUNC_4 (struct nicvf*,int ,int) ;
 int FUNC_5 (struct nicvf*,int ,int) ;
 int FUNC_6 (struct nicvf*,int ,int) ;
 int FUNC_7 (struct nicvf*,int) ;
 int FUNC_8 (struct nicvf*,int *,int) ;
 int FUNC_9 (int ,int *,int) ;

__attribute__((used)) static void FUNC_10(unsigned long VAR_4)
{
 struct nicvf *VAR_5 = (struct nicvf *)VAR_4;
 struct queue_set *VAR_6 = VAR_5->qs;
 int VAR_7;
 u64 VAR_8;

 FUNC_0(VAR_5->netdev);


 for (VAR_7 = 0; VAR_7 < VAR_6->cq_cnt; VAR_7++) {
  VAR_8 = FUNC_6(VAR_5, VAR_3,
           VAR_7);
  if (!(VAR_8 & VAR_0))
   continue;

  FUNC_4(VAR_5, VAR_1, VAR_7);
  FUNC_7(VAR_5, VAR_7);
  FUNC_3(VAR_5->netdev, VAR_7, ((void*)0), 0);
  FUNC_2(VAR_5, VAR_6, VAR_7, 1);
  FUNC_9(VAR_5->netdev, &VAR_6->sq[VAR_7], VAR_7);
  FUNC_8(VAR_5, &VAR_6->sq[VAR_7], VAR_7);

  FUNC_5(VAR_5, VAR_1, VAR_7);
 }

 FUNC_1(VAR_5->netdev);

 FUNC_5(VAR_5, VAR_2, 0);
}
