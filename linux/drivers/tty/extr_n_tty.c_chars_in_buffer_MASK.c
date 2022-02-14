
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct n_tty_data* disc_data; } ;
struct n_tty_data {scalar_t__ read_tail; scalar_t__ canon_head; scalar_t__ commit_head; int icanon; } ;
typedef scalar_t__ ssize_t ;



__attribute__((used)) static ssize_t FUNC_0(struct tty_struct *VAR_0)
{
 struct n_tty_data *VAR_1 = VAR_0->disc_data;
 ssize_t VAR_2 = 0;

 if (!VAR_1->icanon)
  VAR_2 = VAR_1->commit_head - VAR_1->read_tail;
 else
  VAR_2 = VAR_1->canon_head - VAR_1->read_tail;
 return VAR_2;
}
