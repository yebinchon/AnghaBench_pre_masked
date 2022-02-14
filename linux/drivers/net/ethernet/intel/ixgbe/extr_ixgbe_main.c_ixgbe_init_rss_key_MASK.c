
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_adapter {int * rss_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(struct ixgbe_adapter *VAR_3)
{
 u32 *VAR_4;

 if (!VAR_3->rss_key) {
  VAR_4 = FUNC_0(VAR_2, VAR_1);
  if (FUNC_2(!VAR_4))
   return -VAR_0;

  FUNC_1(VAR_4, VAR_2);
  VAR_3->rss_key = VAR_4;
 }

 return 0;
}
