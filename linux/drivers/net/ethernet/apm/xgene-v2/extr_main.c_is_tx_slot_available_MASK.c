
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xge_raw_desc {int m0; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct xge_raw_desc *VAR_3)
{
 if (FUNC_0(VAR_0, FUNC_1(VAR_3->m0)) &&
     (FUNC_0(VAR_1, FUNC_1(VAR_3->m0)) == VAR_2))
  return 1;

 return 0;
}
