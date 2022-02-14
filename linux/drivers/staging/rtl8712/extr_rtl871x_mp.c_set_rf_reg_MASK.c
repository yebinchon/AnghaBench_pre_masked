
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct _adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct _adapter*,int ,int ) ;
 int FUNC_2 (struct _adapter*,int ,int ,int) ;

__attribute__((used)) static u8 FUNC_3(struct _adapter *VAR_1, u8 VAR_2, u8 VAR_3, u32 VAR_4,
       u32 VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;

 if (VAR_4 != VAR_0) {
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
  VAR_7 = FUNC_0(VAR_4);
  VAR_8 = (VAR_6 & (~VAR_4)) | (VAR_5 << VAR_7);
 } else {
  VAR_8 = VAR_5;
 }
 return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_8);
}
