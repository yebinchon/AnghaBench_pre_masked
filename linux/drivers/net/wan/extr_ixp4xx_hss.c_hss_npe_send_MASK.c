
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct port {int npe; int id; } ;
struct msg {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct msg*,char const*) ;
 int FUNC_3 (char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct port *VAR_0, struct msg *VAR_1, const char* VAR_2)
{
 u32 *VAR_3 = (u32*)VAR_1;
 if (FUNC_2(VAR_0->npe, VAR_1, VAR_2)) {
  FUNC_3("HSS-%i: unable to send command [%08X:%08X] to %s\n",
   VAR_0->id, VAR_3[0], VAR_3[1], FUNC_1(VAR_0->npe));
  FUNC_0();
 }
}
