
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct cx231xx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx231xx*,int ,int ,int,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_1(struct cx231xx *VAR_1, u16 VAR_2, u8 *VAR_3)
{
 int VAR_4;
 u32 VAR_5 = 0;

 VAR_4 = FUNC_0(VAR_1, VAR_0,
     VAR_2, 2, &VAR_5, 1);
 *VAR_3 = (u8) VAR_5;
 return VAR_4;
}
