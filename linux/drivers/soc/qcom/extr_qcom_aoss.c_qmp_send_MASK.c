
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qmp {size_t size; int tx_lock; scalar_t__ offset; scalar_t__ msgram; int dev; int event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (scalar_t__,void const*,size_t) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct qmp*) ;
 int FUNC_6 (struct qmp*) ;
 long FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (size_t,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct qmp *VAR_3, const void *VAR_4, size_t VAR_5)
{
 long VAR_6;
 int VAR_7;

 if (FUNC_0(VAR_5 + sizeof(u32) > VAR_3->size))
  return -VAR_0;

 if (FUNC_0(VAR_5 % sizeof(u32)))
  return -VAR_0;

 FUNC_3(&VAR_3->tx_lock);


 FUNC_1(VAR_3->msgram + VAR_3->offset + sizeof(u32),
    VAR_4, VAR_5 / sizeof(u32));
 FUNC_8(VAR_5, VAR_3->msgram + VAR_3->offset);
 FUNC_5(VAR_3);

 VAR_6 = FUNC_7(VAR_3->event,
           FUNC_6(VAR_3), VAR_2);
 if (!VAR_6) {
  FUNC_2(VAR_3->dev, "ucore did not ack channel\n");
  VAR_7 = -VAR_1;


  FUNC_8(0, VAR_3->msgram + VAR_3->offset);
 } else {
  VAR_7 = 0;
 }

 FUNC_4(&VAR_3->tx_lock);

 return VAR_7;
}
