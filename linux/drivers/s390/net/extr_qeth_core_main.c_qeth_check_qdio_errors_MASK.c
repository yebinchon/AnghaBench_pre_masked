
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_card {int dummy; } ;
struct qdio_buffer {TYPE_1__* element; } ;
struct TYPE_2__ {unsigned int sflags; } ;


 int FUNC_0 (struct qeth_card*,int ) ;
 int FUNC_1 (struct qeth_card*,int,char const*) ;
 int FUNC_2 (struct qeth_card*,int,char*,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_1,
      struct qdio_buffer *VAR_2,
      unsigned int VAR_3,
      const char *VAR_4)
{
 if (VAR_3) {
  FUNC_1(VAR_1, 2, VAR_4);
  FUNC_2(VAR_1, 2, " F15=%02X",
          VAR_2->element[15].sflags);
  FUNC_2(VAR_1, 2, " F14=%02X",
          VAR_2->element[14].sflags);
  FUNC_2(VAR_1, 2, " qerr=%X", VAR_3);
  if ((VAR_2->element[15].sflags) == 0x12) {
   FUNC_0(VAR_1, VAR_0);
   return 0;
  } else
   return 1;
 }
 return 0;
}
