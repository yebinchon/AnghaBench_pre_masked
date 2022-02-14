
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_nsp {int cpp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,unsigned long) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct nfp_nsp*,int ) ;
 scalar_t__ FUNC_4 (unsigned long const,unsigned long const) ;

int FUNC_5(struct nfp_nsp *VAR_7)
{
 const unsigned long VAR_8 = VAR_6 + VAR_4 * VAR_3;
 int VAR_9;

 FUNC_1(VAR_7->cpp, "Waiting for NSP to respond (%u sec max).\n",
  VAR_4);

 for (;;) {
  const unsigned long VAR_10 = VAR_6;

  VAR_9 = FUNC_3(VAR_7, VAR_5);
  if (VAR_9 != -VAR_0)
   break;

  if (FUNC_0(25)) {
   VAR_9 = -VAR_1;
   break;
  }

  if (FUNC_4(VAR_10, VAR_8)) {
   VAR_9 = -VAR_2;
   break;
  }
 }
 if (VAR_9)
  FUNC_2(VAR_7->cpp, "NSP failed to respond %d\n", VAR_9);

 return VAR_9;
}
