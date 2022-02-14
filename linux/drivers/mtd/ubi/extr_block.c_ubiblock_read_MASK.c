
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ubiblock_pdu {int usgl; } ;
struct ubiblock {int leb_size; int desc; } ;
struct request {TYPE_1__* q; } ;
struct TYPE_2__ {struct ubiblock* queuedata; } ;


 struct request* FUNC_0 (struct ubiblock_pdu*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int,int *,int,int) ;

__attribute__((used)) static int FUNC_5(struct ubiblock_pdu *VAR_0)
{
 int VAR_1, VAR_2, VAR_3, VAR_4, VAR_5;
 u64 VAR_6;
 struct request *VAR_7 = FUNC_0(VAR_0);
 struct ubiblock *VAR_8 = VAR_7->q->queuedata;

 VAR_5 = FUNC_1(VAR_7);
 VAR_6 = FUNC_2(VAR_7) << 9;


 VAR_3 = FUNC_3(VAR_6, VAR_8->leb_size);
 VAR_2 = VAR_6;
 VAR_4 = VAR_5;

 while (VAR_4) {




  if (VAR_3 + VAR_5 > VAR_8->leb_size)
   VAR_5 = VAR_8->leb_size - VAR_3;

  VAR_1 = FUNC_4(VAR_8->desc, VAR_2, &VAR_0->usgl, VAR_3, VAR_5);
  if (VAR_1 < 0)
   return VAR_1;

  VAR_4 -= VAR_5;
  VAR_5 = VAR_4;
  VAR_2 += 1;
  VAR_3 = 0;
 }
 return 0;
}
