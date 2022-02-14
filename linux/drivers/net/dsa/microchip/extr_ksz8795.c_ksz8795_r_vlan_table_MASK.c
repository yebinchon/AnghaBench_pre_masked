
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct ksz_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ksz_device*,int ,int,int *) ;

__attribute__((used)) static void FUNC_1(struct ksz_device *VAR_1, u16 VAR_2, u16 *VAR_3)
{
 int VAR_4;
 u16 *VAR_5;
 u16 VAR_6;
 u64 VAR_7;

 VAR_5 = (u16 *)&VAR_7;
 VAR_6 = VAR_2 / 4;
 VAR_4 = VAR_2 & 3;
 FUNC_0(VAR_1, VAR_0, VAR_6, &VAR_7);
 *VAR_3 = VAR_5[VAR_4];
}
