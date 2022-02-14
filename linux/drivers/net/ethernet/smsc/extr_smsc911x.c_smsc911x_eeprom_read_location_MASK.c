
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct smsc911x_data {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smsc911x_data*,int ,char*,size_t) ;
 int VAR_2 ;
 int FUNC_1 (struct smsc911x_data*,size_t) ;
 size_t FUNC_2 (struct smsc911x_data*,int ) ;

__attribute__((used)) static int FUNC_3(struct smsc911x_data *VAR_3,
      u8 VAR_4, u8 *VAR_5)
{
 u32 VAR_6 = VAR_0 | VAR_4;
 int VAR_7;

 FUNC_0(VAR_3, VAR_2, "address 0x%x", VAR_4);
 VAR_7 = FUNC_1(VAR_3, VAR_6);

 if (!VAR_7)
  VAR_5[VAR_4] = FUNC_2(VAR_3, VAR_1);

 return VAR_7;
}
