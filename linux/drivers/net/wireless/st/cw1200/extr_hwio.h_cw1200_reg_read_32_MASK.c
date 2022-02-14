
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int tmp ;
struct cw1200_common {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (struct cw1200_common*,int ,int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct cw1200_common *VAR_0,
         u16 VAR_1, u32 *VAR_2)
{
 __le32 VAR_3;
 int VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_3, sizeof(VAR_3));
 *VAR_2 = FUNC_1(VAR_3);
 return VAR_4;
}
