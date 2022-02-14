
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qdio_q {TYPE_2__** sbal; int nr; scalar_t__ is_input_q; int irq_ptr; int qdio_error; } ;
struct TYPE_4__ {TYPE_1__* element; } ;
struct TYPE_3__ {int sflags; } ;


 int FUNC_0 (int ,int ,char*,unsigned int) ;
 int FUNC_1 (char*,unsigned int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct qdio_q*) ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_3 (struct qdio_q*,int ) ;
 scalar_t__ FUNC_4 (struct qdio_q*) ;
 int FUNC_5 (struct qdio_q*,unsigned int,unsigned char,int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6(struct qdio_q *VAR_6, unsigned int VAR_7,
     int VAR_8)
{
 unsigned char VAR_9 = (VAR_6->is_input_q) ? VAR_3 :
     VAR_4;

 VAR_6->qdio_error = VAR_1;


 if (FUNC_4(VAR_6) == VAR_2 && !VAR_6->is_input_q &&
     VAR_6->sbal[VAR_7]->element[15].sflags == 0x10) {
  FUNC_3(VAR_6, VAR_5);
  FUNC_0(VAR_0, VAR_6->irq_ptr, "OUTFULL FTC:%02x", VAR_7);
  goto set;
 }

 FUNC_1("%4x BUF ERROR", FUNC_2(VAR_6));
 FUNC_1((VAR_6->is_input_q) ? "IN:%2d" : "OUT:%2d", VAR_6->nr);
 FUNC_1("FTC:%3d C:%3d", VAR_7, VAR_8);
 FUNC_1("F14:%2x F15:%2x",
    VAR_6->sbal[VAR_7]->element[14].sflags,
    VAR_6->sbal[VAR_7]->element[15].sflags);

set:




 FUNC_5(VAR_6, VAR_7, VAR_9, VAR_8);
}
