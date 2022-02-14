
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int pf; int mbox; } ;


 int FUNC_0 (struct adapter*,char*,int,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct adapter*,int ,int ,int ,int,int*,int*) ;
 int FUNC_5 (struct adapter*,int ) ;

__attribute__((used)) static unsigned int FUNC_6(struct adapter *VAR_3, int VAR_4)
{
 unsigned int VAR_5;
 u32 VAR_6, VAR_7 = 0;
 int VAR_8;

 VAR_5 = 1 << FUNC_3(FUNC_5(VAR_3, VAR_2));
 if (VAR_4 >= VAR_5) {
  FUNC_0(VAR_3, "TP E2C Channel Port Index %d >= Nports %d\n",
   VAR_4, VAR_5);
  return 0;
 }




 VAR_6 = (FUNC_1(VAR_0) |
   FUNC_2(VAR_1));
 VAR_8 = FUNC_4(VAR_3, VAR_3->mbox, VAR_3->pf,
     0, 1, &VAR_6, &VAR_7);
 if (!VAR_8)
  return (VAR_7 >> (8 * VAR_4)) & 0xff;

 return 0;
}
