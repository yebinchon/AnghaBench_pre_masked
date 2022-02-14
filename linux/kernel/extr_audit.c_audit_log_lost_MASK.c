
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DEFINE_SPINLOCK ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char const*) ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_3 (char*,int ,int ,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(const char *VAR_7)
{
 static unsigned long VAR_8 = 0;
 static DEFINE_SPINLOCK(VAR_9);
 unsigned long VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 FUNC_0(&VAR_4);

 VAR_12 = (VAR_3 == VAR_0 || !VAR_5);

 if (!VAR_12) {
  FUNC_5(&VAR_9, VAR_10);
  VAR_11 = VAR_6;
  if (VAR_11 - VAR_8 > VAR_1) {
   VAR_12 = 1;
   VAR_8 = VAR_11;
  }
  FUNC_6(&VAR_9, VAR_10);
 }

 if (VAR_12) {
  if (FUNC_4())
   FUNC_3("audit_lost=%u audit_rate_limit=%u audit_backlog_limit=%u\n",
    FUNC_1(&VAR_4),
    VAR_5,
    VAR_2);
  FUNC_2(VAR_7);
 }
}
