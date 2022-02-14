
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct av7110 {int debilock; } ;


 int FUNC_0 (struct av7110*,int ,int,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline u32 FUNC_3(struct av7110 *VAR_0, u32 VAR_1, int VAR_2, u32 VAR_3, unsigned int VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_1(&VAR_0->debilock, VAR_5);
 VAR_6=FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4);
 FUNC_2(&VAR_0->debilock, VAR_5);
 return VAR_6;
}
