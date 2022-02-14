
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_5__ {int type; } ;
struct TYPE_6__ {TYPE_1__ radio; int tuner_type; } ;
struct cx88_core {TYPE_2__ board; } ;
struct TYPE_7__ {char* name; scalar_t__ fm; int id; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static void FUNC_2(struct cx88_core *VAR_2, u8 *VAR_3)
{
 const char *VAR_4 = (VAR_3[0x0d] < FUNC_0(VAR_1))
  ? VAR_1[VAR_3[0x0d]].name : ((void*)0);

 FUNC_1("GDI: tuner=%s\n", VAR_4 ? VAR_4 : "unknown");
 if (!VAR_4)
  return;
 VAR_2->board.tuner_type = VAR_1[VAR_3[0x0d]].id;
 VAR_2->board.radio.type = VAR_1[VAR_3[0x0d]].fm ?
  VAR_0 : 0;
}
