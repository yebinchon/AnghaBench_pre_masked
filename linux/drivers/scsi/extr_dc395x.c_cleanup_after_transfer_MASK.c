
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ScsiReqBlk {int dummy; } ;
struct AdapterCtlBlk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct AdapterCtlBlk*,int ) ;
 int FUNC_1 (struct AdapterCtlBlk*,int ) ;
 int FUNC_2 (struct AdapterCtlBlk*,int ,int ) ;
 int FUNC_3 (struct AdapterCtlBlk*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct AdapterCtlBlk*,char*) ;

__attribute__((used)) static void FUNC_5(struct AdapterCtlBlk *VAR_7,
  struct ScsiReqBlk *VAR_8)
{

 if (FUNC_0(VAR_7, VAR_2) & 0x0001) {
  if (!(FUNC_1(VAR_7, VAR_6) & 0x40))
   FUNC_4(VAR_7, "cleanup/in");
  if (!(FUNC_1(VAR_7, VAR_4) & 0x80))
   FUNC_3(VAR_7, VAR_3, VAR_0);
 } else {
  if (!(FUNC_1(VAR_7, VAR_4) & 0x80))
   FUNC_3(VAR_7, VAR_3, VAR_0);
  if (!(FUNC_1(VAR_7, VAR_6) & 0x40))
   FUNC_4(VAR_7, "cleanup/out");
 }
 FUNC_2(VAR_7, VAR_5, VAR_1);
}
