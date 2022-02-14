
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u32 ;
struct firmware {scalar_t__ data; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__,int) ;

__attribute__((used)) static u32 FUNC_2(const struct firmware *VAR_0, int *VAR_1)
{
 int VAR_2 = *VAR_1;
 __le32 VAR_3;

 FUNC_1(&VAR_3, VAR_0->data + *VAR_1, sizeof(VAR_3));
 VAR_2 += 4;
 *VAR_1 = VAR_2;

 return FUNC_0(VAR_3);
}
