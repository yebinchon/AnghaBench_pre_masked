
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct gb_loopback {scalar_t__ iteration_count; scalar_t__ iteration_max; scalar_t__ requests_completed; int ts; } ;
typedef int ktime_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct gb_loopback*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct gb_loopback*,int ) ;
 int FUNC_4 (struct gb_loopback*,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct gb_loopback *VAR_1, bool VAR_2)
{
 u64 VAR_3;
 u32 VAR_4;
 ktime_t VAR_5;

 if (!VAR_2) {
  VAR_1->requests_completed++;
  FUNC_1(VAR_1);
 }

 VAR_5 = FUNC_5();
 VAR_3 = FUNC_0(VAR_1->ts, VAR_5);
 if (VAR_3 >= VAR_0 || VAR_1->iteration_count == VAR_1->iteration_max) {
  VAR_4 = FUNC_2(VAR_3);

  FUNC_4(VAR_1, VAR_4);
  FUNC_3(VAR_1, VAR_4);

  if (VAR_1->iteration_count != VAR_1->iteration_max) {
   VAR_1->ts = VAR_5;
   VAR_1->requests_completed = 0;
  }
 }
}
