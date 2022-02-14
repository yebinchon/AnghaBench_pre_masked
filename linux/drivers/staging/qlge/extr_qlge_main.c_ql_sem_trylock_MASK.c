
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;

 int VAR_10 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*) ;
 int VAR_11 ;
 int FUNC_1 (struct ql_adapter*,int ) ;
 int FUNC_2 (struct ql_adapter*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ql_adapter *VAR_12, u32 VAR_13)
{
 u32 VAR_14 = 0;

 switch (VAR_13) {
 case 129:
  VAR_14 = VAR_8 << VAR_9;
  break;
 case 128:
  VAR_14 = VAR_8 << VAR_10;
  break;
 case 134:
  VAR_14 = VAR_8 << VAR_3;
  break;
 case 133:
  VAR_14 = VAR_8 << VAR_4;
  break;
 case 135:
  VAR_14 = VAR_8 << VAR_2;
  break;
 case 132:
  VAR_14 = VAR_8 << VAR_5;
  break;
 case 130:
  VAR_14 = VAR_8 << VAR_7;
  break;
 case 131:
  VAR_14 = VAR_8 << VAR_6;
  break;
 default:
  FUNC_0(VAR_12, VAR_11, VAR_12->ndev, "bad Semaphore mask!.\n");
  return -VAR_0;
 }

 FUNC_2(VAR_12, VAR_1, VAR_14 | VAR_13);
 return !(FUNC_1(VAR_12, VAR_1) & VAR_14);
}
