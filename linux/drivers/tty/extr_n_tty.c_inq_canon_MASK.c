
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct n_tty_data {size_t canon_head; size_t read_tail; int read_flags; } ;


 scalar_t__ FUNC_0 (size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct n_tty_data*,size_t) ;
 scalar_t__ FUNC_2 (size_t,int ) ;

__attribute__((used)) static unsigned long FUNC_3(struct n_tty_data *VAR_2)
{
 size_t VAR_3, VAR_4, VAR_5;

 if (VAR_2->canon_head == VAR_2->read_tail)
  return 0;
 VAR_4 = VAR_2->canon_head;
 VAR_5 = VAR_2->read_tail;
 VAR_3 = VAR_4 - VAR_5;

 while (FUNC_0(VAR_4) != FUNC_0(VAR_5)) {
  if (FUNC_2(VAR_5 & (VAR_0 - 1), VAR_2->read_flags) &&
      FUNC_1(VAR_2, VAR_5) == VAR_1)
   VAR_3--;
  VAR_5++;
 }
 return VAR_3;
}
