
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * consumer; int * producer; } ;
struct aac_queue {scalar_t__ entries; TYPE_1__ headers; } ;
struct aac_dev {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;

 int VAR_1 ;

 int FUNC_1 (struct aac_dev*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(struct aac_dev * VAR_2, struct aac_queue *VAR_3, u32 VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6;

 if ((FUNC_4(*VAR_3->headers.producer)+1) == FUNC_4(*VAR_3->headers.consumer))
  VAR_5 = 1;

 if (FUNC_4(*VAR_3->headers.consumer) >= VAR_3->entries)
  *VAR_3->headers.consumer = FUNC_2(1);
 else
  FUNC_3(VAR_3->headers.consumer, 1);

 if (VAR_5) {
  switch (VAR_4) {

  case 129:
   VAR_6 = VAR_0;
   break;
  case 128:
   VAR_6 = VAR_1;
   break;
  default:
   FUNC_0();
   return;
  }
  FUNC_1(VAR_2, VAR_6);
 }
}
