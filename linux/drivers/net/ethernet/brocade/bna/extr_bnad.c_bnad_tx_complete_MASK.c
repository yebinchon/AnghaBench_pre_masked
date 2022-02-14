
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct bnad {struct net_device* netdev; } ;
struct bna_tcb {int flags; int i_dbell; int q_depth; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnad*,int ) ;
 scalar_t__ FUNC_1 (struct bna_tcb*,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (struct bnad*,struct bna_tcb*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static u32
FUNC_12(struct bnad *VAR_4, struct bna_tcb *VAR_5)
{
 struct net_device *VAR_6 = VAR_4->netdev;
 u32 VAR_7 = 0;

 if (FUNC_10(VAR_1, &VAR_5->flags))
  return 0;

 VAR_7 = FUNC_3(VAR_4, VAR_5);
 if (VAR_7) {
  if (FUNC_7(VAR_6) &&
      FUNC_6(VAR_6) &&
      FUNC_1(VAR_5, VAR_5->q_depth) >=
        VAR_0) {
   if (FUNC_11(VAR_2, &VAR_5->flags)) {
    FUNC_8(VAR_6);
    FUNC_0(VAR_4, VAR_3);
   }
  }
 }

 if (FUNC_5(FUNC_11(VAR_2, &VAR_5->flags)))
  FUNC_2(VAR_5->i_dbell, VAR_7);

 FUNC_9();
 FUNC_4(VAR_1, &VAR_5->flags);

 return VAR_7;
}
