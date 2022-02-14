
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qeth_qdio_out_buffer {TYPE_2__* buffer; } ;
struct qeth_card {int dummy; } ;
struct TYPE_4__ {TYPE_1__* element; } ;
struct TYPE_3__ {int sflags; } ;


 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*,int,char*,int ,int ) ;
 int FUNC_2 (struct qeth_card*,TYPE_2__*,unsigned int,char*) ;

__attribute__((used)) static void FUNC_3(struct qeth_card *VAR_0,
  struct qeth_qdio_out_buffer *VAR_1, unsigned int VAR_2)
{
 int VAR_3 = VAR_1->buffer->element[15].sflags;

 FUNC_0(VAR_0, 6, "hdsnderr");
 FUNC_2(VAR_0, VAR_1->buffer, VAR_2, "qouterr");

 if (!VAR_2)
  return;

 if ((VAR_3 >= 15) && (VAR_3 <= 31))
  return;

 FUNC_0(VAR_0, 1, "lnkfail");
 FUNC_1(VAR_0, 1, "%04x %02x",
         (u16)VAR_2, (u8)VAR_3);
}
