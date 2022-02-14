
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsf_qtcb {int dummy; } ;
typedef int mempool_t ;


 int VAR_0 ;
 struct fsf_qtcb* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 struct fsf_qtcb* FUNC_2 (int *,int ) ;
 int FUNC_3 (struct fsf_qtcb*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_1 ;

__attribute__((used)) static struct fsf_qtcb *FUNC_5(mempool_t *VAR_2)
{
 struct fsf_qtcb *VAR_3;

 if (FUNC_1(VAR_2))
  VAR_3 = FUNC_2(VAR_2, VAR_0);
 else
  VAR_3 = FUNC_0(VAR_1, VAR_0);

 if (FUNC_4(!VAR_3))
  return ((void*)0);

 FUNC_3(VAR_3, 0, sizeof(*VAR_3));
 return VAR_3;
}
