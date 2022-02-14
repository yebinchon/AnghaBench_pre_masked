
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct smsc911x_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smsc911x_data*) ;
 int FUNC_1 (struct smsc911x_data*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct smsc911x_data *VAR_2, u8 VAR_3[6])
{
 u32 VAR_4 = (VAR_3[5] << 8) | VAR_3[4];
 u32 VAR_5 = (VAR_3[3] << 24) | (VAR_3[2] << 16) |
     (VAR_3[1] << 8) | VAR_3[0];

 FUNC_0(VAR_2);

 FUNC_1(VAR_2, VAR_0, VAR_4);
 FUNC_1(VAR_2, VAR_1, VAR_5);
}
