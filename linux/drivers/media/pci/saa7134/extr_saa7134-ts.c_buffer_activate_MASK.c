
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timeout; } ;
struct saa7134_dev {scalar_t__ ts_field; int ts_started; TYPE_1__ ts_q; } ;
struct saa7134_buf {scalar_t__ top_seen; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct saa7134_buf*) ;
 int FUNC_4 (struct saa7134_dev*) ;
 int FUNC_5 (struct saa7134_dev*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,struct saa7134_buf*,...) ;

__attribute__((used)) static int FUNC_8(struct saa7134_dev *VAR_4,
      struct saa7134_buf *VAR_5,
      struct saa7134_buf *VAR_6)
{

 FUNC_7("buffer_activate [%p]", VAR_5);
 VAR_5->top_seen = 0;

 if (!VAR_4->ts_started)
  VAR_4->ts_field = VAR_2;

 if (((void*)0) == VAR_6)
  VAR_6 = VAR_5;
 if (VAR_2 == VAR_4->ts_field) {
  FUNC_7("- [top]     buf=%p next=%p\n", VAR_5, VAR_6);
  FUNC_6(FUNC_0(5),FUNC_3(VAR_5));
  FUNC_6(FUNC_1(5),FUNC_3(VAR_6));
  VAR_4->ts_field = VAR_1;
 } else {
  FUNC_7("- [bottom]  buf=%p next=%p\n", VAR_5, VAR_6);
  FUNC_6(FUNC_0(5),FUNC_3(VAR_6));
  FUNC_6(FUNC_1(5),FUNC_3(VAR_5));
  VAR_4->ts_field = VAR_2;
 }


 FUNC_4(VAR_4);

 FUNC_2(&VAR_4->ts_q.timeout, VAR_3+VAR_0);

 if (!VAR_4->ts_started)
  FUNC_5(VAR_4);

 return 0;
}
