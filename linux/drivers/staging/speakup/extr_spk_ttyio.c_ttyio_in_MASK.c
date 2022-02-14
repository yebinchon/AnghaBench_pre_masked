
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spk_ldisc_data {char buf; int buf_free; int completion; } ;
struct TYPE_2__ {int port; struct spk_ldisc_data* disc_data; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static unsigned char FUNC_5(int VAR_1)
{
 struct spk_ldisc_data *VAR_2 = VAR_0->disc_data;
 char VAR_3;

 if (FUNC_4(&VAR_2->completion,
     FUNC_3(VAR_1)) == 0) {
  if (VAR_1)
   FUNC_1("spk_ttyio: timeout (%d)  while waiting for input\n",
    VAR_1);
  return 0xff;
 }

 VAR_3 = VAR_2->buf;



 FUNC_0();
 VAR_2->buf_free = 1;

 FUNC_2(VAR_0->port);

 return VAR_3;
}
