
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mci {TYPE_2__* base; } ;
struct TYPE_3__ {int device; } ;
struct ddb_link {TYPE_1__ ids; } ;
struct TYPE_4__ {struct ddb_link* link; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ddb_link*,scalar_t__) ;
 int FUNC_1 (struct ddb_link*,int ,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct mci *VAR_5)
{
 struct ddb_link *VAR_6 = VAR_5->base->link;
 u32 VAR_7 = 0;
 u32 VAR_8 = 40;

 FUNC_1(VAR_6, VAR_2, VAR_0);
 FUNC_1(VAR_6, 0, VAR_0 + 4);
 FUNC_2(300);
 FUNC_1(VAR_6, 0, VAR_0);

 while (1) {
  VAR_7 = FUNC_0(VAR_6, VAR_0);
  if ((VAR_7 & VAR_1) == VAR_1)
   break;
  if (--VAR_8 == 0)
   break;
  FUNC_2(50);
 }
 if ((VAR_7 & VAR_1) == 0)
  return -1;
 if (VAR_6->ids.device == 0x0009)
  FUNC_1(VAR_6, VAR_4, VAR_3);
 return 0;
}
