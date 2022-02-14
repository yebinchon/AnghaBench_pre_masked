
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct spk_ldisc_data* disc_data; } ;
struct spk_ldisc_data {int buf_free; unsigned char buf; int completion; } ;
struct TYPE_2__ {int (* read_buff_add ) (unsigned char const) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (unsigned char const) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_1,
      const unsigned char *VAR_2, char *VAR_3, int VAR_4)
{
 struct spk_ldisc_data *VAR_5 = VAR_1->disc_data;

 if (VAR_0->read_buff_add) {
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
   VAR_0->read_buff_add(VAR_2[VAR_6]);

  return VAR_4;
 }

 if (!VAR_5->buf_free)

  return 0;




 FUNC_1();

 VAR_5->buf = VAR_2[0];
 VAR_5->buf_free = 0;
 FUNC_0(&VAR_5->completion);

 return 1;
}
