
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct most_channel {scalar_t__ is_poisoned; } ;
struct mbo {scalar_t__ status; struct most_channel* context; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mbo*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct mbo*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct mbo *VAR_2)
{
 struct most_channel *VAR_3;

 VAR_3 = VAR_2->context;
 if (VAR_2->status == VAR_1)
  FUNC_1("WARN: Tx MBO status: invalid\n");
 if (FUNC_3(VAR_3->is_poisoned || (VAR_2->status == VAR_0)))
  FUNC_2(VAR_2);
 else
  FUNC_0(VAR_2);
}
