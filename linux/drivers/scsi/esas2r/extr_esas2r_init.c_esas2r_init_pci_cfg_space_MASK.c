
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct esas2r_adapter {int pcid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct esas2r_adapter *VAR_4)
{
 if (FUNC_1(VAR_4->pcid)) {
  u16 VAR_5;

  FUNC_2(VAR_4->pcid, VAR_1, &VAR_5);

  if ((VAR_5 & VAR_2) >
       VAR_3) {
   FUNC_0(VAR_0,
       "max read request size > 512B");

   VAR_5 &= ~VAR_2;
   VAR_5 |= VAR_3;
   FUNC_3(VAR_4->pcid, VAR_1,
         VAR_5);
  }
 }
}
