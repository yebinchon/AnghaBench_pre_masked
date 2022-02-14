
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct _adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct _adapter*,int ) ;
 int FUNC_2 (struct _adapter*,int ,int) ;

__attribute__((used)) static u8 FUNC_3(struct _adapter *VAR_1,
       u16 VAR_2,
       u32 VAR_3,
       u32 VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;

 if (VAR_3 != VAR_0) {
  VAR_5 = FUNC_1(VAR_1, VAR_2);
  VAR_6 = FUNC_0(VAR_3);
  VAR_7 = (VAR_5 & (~VAR_3)) | (VAR_4 << VAR_6);
 } else {
  VAR_7 = VAR_4;
 }
 return FUNC_2(VAR_1, VAR_2, VAR_7);
}
