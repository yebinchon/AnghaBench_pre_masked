
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6v5 {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct q6v5 *VAR_1, struct device **VAR_2,
      size_t VAR_3)
{
 int VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  FUNC_0(VAR_2[VAR_5], VAR_0);
  VAR_4 = FUNC_1(VAR_2[VAR_5]);
  if (VAR_4 < 0)
   goto unroll_pd_votes;
 }

 return 0;

unroll_pd_votes:
 for (VAR_5--; VAR_5 >= 0; VAR_5--) {
  FUNC_0(VAR_2[VAR_5], 0);
  FUNC_2(VAR_2[VAR_5]);
 }

 return VAR_4;
}
