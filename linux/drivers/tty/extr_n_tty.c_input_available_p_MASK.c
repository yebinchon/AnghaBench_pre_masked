
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct n_tty_data* disc_data; } ;
struct n_tty_data {scalar_t__ canon_head; scalar_t__ read_tail; int commit_head; scalar_t__ icanon; } ;


 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;

__attribute__((used)) static inline int FUNC_3(struct tty_struct *VAR_0, int VAR_1)
{
 struct n_tty_data *VAR_2 = VAR_0->disc_data;
 int VAR_3 = VAR_1 && !FUNC_2(VAR_0) && FUNC_1(VAR_0) ? FUNC_1(VAR_0) : 1;

 if (VAR_2->icanon && !FUNC_0(VAR_0))
  return VAR_2->canon_head != VAR_2->read_tail;
 else
  return VAR_2->commit_head - VAR_2->read_tail >= VAR_3;
}
