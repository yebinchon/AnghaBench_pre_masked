
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qman_fq {int idx; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 struct qman_fq** VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct qman_fq *FUNC_2(u32 VAR_2)
{
 struct qman_fq *VAR_3;





 VAR_3 = VAR_0[VAR_2];
 FUNC_0(!VAR_3 || VAR_2 == VAR_3->idx);

 return VAR_3;
}
