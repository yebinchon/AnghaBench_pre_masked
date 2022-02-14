
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int revision_id; } ;
struct netxen_adapter {TYPE_1__ ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct netxen_adapter*,int ) ;
 int FUNC_3 (struct netxen_adapter*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct netxen_adapter *VAR_4, int VAR_5)
{
 u32 VAR_6, VAR_7;

 if (VAR_5 == 0x55555555) {

  FUNC_3(VAR_4, FUNC_0(0x1fc), VAR_1);

  if (!FUNC_4(VAR_4->ahw.revision_id))
   return 0;


  VAR_5 = FUNC_2(VAR_4, FUNC_1(0x4));
  if (!(VAR_5 & 0x4)) {
   VAR_5 |= 0x4;
   FUNC_3(VAR_4, FUNC_1(0x4), VAR_5);
   FUNC_2(VAR_4, FUNC_1(0x4));
  }


  VAR_5 = FUNC_2(VAR_4, VAR_3);
  if (VAR_5 != 0x80000f) {

   FUNC_3(VAR_4, FUNC_0(0x1fc), 0);
   return -VAR_0;
  }


  VAR_6 = FUNC_2(VAR_4, VAR_2);
  FUNC_3(VAR_4, VAR_2, VAR_6 | 0x1);
  VAR_7 = 0;
  do {
   FUNC_5(1);
   VAR_6 = FUNC_2(VAR_4, FUNC_0(0x1fc));

   if (++VAR_7 > 5000)
    return -VAR_0;

  } while (VAR_6 == VAR_1);
 }
 return 0;
}
