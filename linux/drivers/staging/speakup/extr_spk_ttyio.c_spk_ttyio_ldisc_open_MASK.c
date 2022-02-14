
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct spk_ldisc_data* disc_data; TYPE_1__* ops; } ;
struct spk_ldisc_data {int buf_free; int completion; } ;
struct TYPE_2__ {int write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct spk_ldisc_data* FUNC_1 (int,int ) ;
 struct tty_struct* VAR_3 ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_4)
{
 struct spk_ldisc_data *VAR_5;

 if (!VAR_4->ops->write)
  return -VAR_1;
 VAR_3 = VAR_4;

 VAR_5 = FUNC_1(sizeof(struct spk_ldisc_data), VAR_2);
 if (!VAR_5)
  return -VAR_0;

 FUNC_0(&VAR_5->completion);
 VAR_5->buf_free = 1;
 VAR_3->disc_data = VAR_5;

 return 0;
}
