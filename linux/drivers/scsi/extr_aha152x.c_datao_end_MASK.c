
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scatterlist {int length; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_7__ {int this_residual; struct scatterlist* buffer; scalar_t__ ptr; } ;
struct TYPE_8__ {TYPE_1__ SCp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct scatterlist*) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 struct scatterlist* FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct scatterlist*) ;
 struct scatterlist* FUNC_9 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_10(struct Scsi_Host *VAR_9)
{
 if(FUNC_4(VAR_7, VAR_5)) {
  u32 VAR_10 = FUNC_1();
  int VAR_11 = VAR_4 - FUNC_6(VAR_3);
  int VAR_12;
  struct scatterlist *VAR_13 = FUNC_7(VAR_3);

  FUNC_0(VAR_3, VAR_11 - VAR_10);

  VAR_12 = FUNC_5(VAR_3) - FUNC_6(VAR_3);

  while (VAR_12 > 0 && !FUNC_8(VAR_13)) {
   if (VAR_12 < VAR_13->length)
    break;
   VAR_12 -= VAR_13->length;
   VAR_13 = FUNC_9(VAR_13);
  }

  VAR_3->SCp.buffer = VAR_13;
  VAR_3->SCp.ptr = FUNC_3(VAR_3->SCp.buffer) + VAR_12;
  VAR_3->SCp.this_residual = VAR_3->SCp.buffer->length -
   VAR_12;
 }

 FUNC_2(VAR_8, VAR_0|VAR_1|VAR_2);
 FUNC_2(VAR_8, VAR_0);

 FUNC_2(VAR_6, 0);
}
