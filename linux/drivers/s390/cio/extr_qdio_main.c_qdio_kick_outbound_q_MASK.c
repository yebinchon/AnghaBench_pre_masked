
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_q {int nr; int irq_ptr; } ;


 int FUNC_0 (int ,int ,char*,int ) ;
 int FUNC_1 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct qdio_q*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct qdio_q*) ;
 int FUNC_5 (struct qdio_q*,unsigned int*,unsigned long) ;
 int FUNC_6 (struct qdio_q*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct qdio_q *VAR_7, unsigned long VAR_8)
{
 int VAR_9 = 0, VAR_10;
 unsigned int VAR_11;

 if (!FUNC_4(VAR_7))
  return 0;

 FUNC_0(VAR_0, VAR_7->irq_ptr, "siga-w:%1d", VAR_7->nr);
retry:
 FUNC_6(VAR_7, VAR_6);

 VAR_10 = FUNC_5(VAR_7, &VAR_11, VAR_8);
 switch (VAR_10) {
 case 0:
  break;
 case 2:
  if (VAR_11) {
   while (++VAR_9 < VAR_4) {
    FUNC_3(VAR_5);
    goto retry;
   }
   FUNC_1("%4x cc2 BBC:%1d", FUNC_2(VAR_7), VAR_7->nr);
   VAR_10 = -VAR_1;
  } else {
   FUNC_0(VAR_0, VAR_7->irq_ptr, "siga-w cc2:%1d", VAR_7->nr);
   VAR_10 = -VAR_3;
  }
  break;
 case 1:
 case 3:
  FUNC_1("%4x SIGA-W:%1d", FUNC_2(VAR_7), VAR_10);
  VAR_10 = -VAR_2;
  break;
 }
 if (VAR_9) {
  FUNC_1("%4x cc2 BB2:%1d", FUNC_2(VAR_7), VAR_7->nr);
  FUNC_1("count:%u", VAR_9);
 }
 return VAR_10;
}
