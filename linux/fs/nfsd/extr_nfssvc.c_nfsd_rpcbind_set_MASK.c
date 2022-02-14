
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct svc_program {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct net*,struct svc_program const*,int ,int,unsigned short,unsigned short) ;

__attribute__((used)) static int
FUNC_3(struct net *VAR_2, const struct svc_program *VAR_3,
   u32 VAR_4, int VAR_5, unsigned short VAR_6,
   unsigned short VAR_7)
{
 if (!FUNC_1(FUNC_0(VAR_2, VAR_1), VAR_4, VAR_0))
  return 0;
 return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5,
   VAR_6, VAR_7);
}
