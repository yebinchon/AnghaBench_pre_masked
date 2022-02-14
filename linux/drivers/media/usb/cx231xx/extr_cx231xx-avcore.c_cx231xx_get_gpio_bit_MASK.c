
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct cx231xx {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (struct cx231xx*,int ,int *,int,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct cx231xx *VAR_0, u32 VAR_1, u32 *VAR_2)
{
 __le32 VAR_3;
 int VAR_4 = 0;

 VAR_4 = FUNC_0(VAR_0, VAR_1, (u8 *)&VAR_3, 4, 0, 1);
 *VAR_2 = FUNC_1(VAR_3);

 return VAR_4;
}
