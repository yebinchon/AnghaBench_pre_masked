
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef scalar_t__ u32 ;
struct sym_hcb {int dqueueget; scalar_t__* dqueue; } ;
struct sym_ccb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct sym_ccb* FUNC_3 (struct sym_hcb*,scalar_t__) ;
 int FUNC_4 (struct sym_hcb*,struct sym_ccb*) ;
 char* FUNC_5 (struct sym_hcb*) ;

__attribute__((used)) static int FUNC_6 (struct sym_hcb *VAR_1)
{
 struct sym_ccb *VAR_2;
 int VAR_3, VAR_4;
 u32 VAR_5;

 VAR_4 = 0;
 VAR_3 = VAR_1->dqueueget;


 while (1) {
  VAR_5 = FUNC_2(VAR_1->dqueue[VAR_3]);
  if (!VAR_5)
   break;
  VAR_1->dqueue[VAR_3] = 0;
  if ((VAR_3 = VAR_3+2) >= VAR_0*2)
   VAR_3 = 0;

  VAR_2 = FUNC_3(VAR_1, VAR_5);
  if (VAR_2) {
   FUNC_0();
   FUNC_4 (VAR_1, VAR_2);
   ++VAR_4;
  }
  else
   FUNC_1 ("%s: bad DSA (%x) in done queue.\n",
    FUNC_5(VAR_1), (u_int) VAR_5);
 }
 VAR_1->dqueueget = VAR_3;

 return VAR_4;
}
