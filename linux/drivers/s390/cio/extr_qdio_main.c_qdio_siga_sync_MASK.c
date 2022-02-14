
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct qdio_q {TYPE_1__* irq_ptr; int nr; } ;
struct TYPE_2__ {unsigned long sch_token; int schid; } ;


 int FUNC_0 (int ,TYPE_1__*,char*,int ) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (struct qdio_q*) ;
 int FUNC_3 (unsigned long,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_4 (struct qdio_q*) ;
 int FUNC_5 (struct qdio_q*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline int FUNC_7(struct qdio_q *VAR_5, unsigned int VAR_6,
     unsigned int VAR_7)
{
 unsigned long VAR_8 = *((u32 *) &VAR_5->irq_ptr->schid);
 unsigned int VAR_9 = VAR_3;
 int VAR_10;

 FUNC_0(VAR_0, VAR_5->irq_ptr, "siga-s:%1d", VAR_5->nr);
 FUNC_5(VAR_5, VAR_4);

 if (FUNC_4(VAR_5)) {
  VAR_8 = VAR_5->irq_ptr->sch_token;
  VAR_9 |= VAR_2;
 }

 VAR_10 = FUNC_3(VAR_8, VAR_6, VAR_7, VAR_9);
 if (FUNC_6(VAR_10))
  FUNC_1("%4x SIGA-S:%2d", FUNC_2(VAR_5), VAR_10);
 return (VAR_10) ? -VAR_1 : 0;
}
