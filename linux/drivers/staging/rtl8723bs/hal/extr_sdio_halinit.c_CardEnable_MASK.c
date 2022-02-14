
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct adapter*,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct adapter*,int ,scalar_t__*) ;
 int FUNC_2 (struct adapter*,int ,scalar_t__*) ;
 int FUNC_3 (struct adapter*,int ,int) ;

__attribute__((used)) static u8 FUNC_4(struct adapter *VAR_8)
{
 u8 VAR_9;
 u8 VAR_10 = VAR_5;


 FUNC_1(VAR_8, VAR_0, &VAR_9);
 if (!VAR_9) {


  FUNC_3(VAR_8, VAR_4, 0x0);

  VAR_10 = FUNC_0(VAR_8, VAR_1, VAR_2, VAR_3, VAR_7);
  if (VAR_10 == VAR_6) {
   u8 VAR_11 = 1;
   FUNC_2(VAR_8, VAR_0, &VAR_11);
  }
 } else
  VAR_10 = VAR_6;

 return VAR_10;
}
