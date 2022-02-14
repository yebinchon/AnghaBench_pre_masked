
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qman_fq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(u32 VAR_3)
{
 VAR_2 = VAR_3;

 VAR_1 = FUNC_2(FUNC_0(sizeof(struct qman_fq *),
           VAR_2, 2));
 if (!VAR_1)
  return -VAR_0;

 FUNC_1("Allocated fq lookup table at %p, entry count %u\n",
   VAR_1, VAR_2 * 2);
 return 0;
}
