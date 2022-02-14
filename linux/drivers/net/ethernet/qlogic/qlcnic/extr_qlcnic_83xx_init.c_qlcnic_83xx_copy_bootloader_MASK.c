
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u64 ;
typedef int u32 ;
struct qlcnic_adapter {int ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct qlcnic_adapter*,int,int *,int) ;
 int FUNC_2 (struct qlcnic_adapter*,void*,int*,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct qlcnic_adapter *VAR_5)
{
 u8 *VAR_6;
 u32 VAR_7, VAR_8;
 u64 VAR_9;
 int VAR_10 = -VAR_0;

 VAR_7 = VAR_4;
 VAR_9 = FUNC_0(VAR_5->ahw, VAR_2);
 VAR_8 = FUNC_0(VAR_5->ahw, VAR_3);


 if (VAR_8 & 0xF)
  VAR_8 = (VAR_8 + 16) & ~0xF;

 VAR_6 = FUNC_4(VAR_8);
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 VAR_10 = FUNC_1(VAR_5, VAR_7, VAR_6,
      VAR_8 / sizeof(u32));
 if (VAR_10) {
  FUNC_3(VAR_6);
  return VAR_10;
 }

 VAR_10 = FUNC_2(VAR_5, VAR_9, (u32 *)VAR_6,
         VAR_8 / 16);
 if (VAR_10) {
  FUNC_3(VAR_6);
  return VAR_10;
 }
 FUNC_3(VAR_6);

 return VAR_10;
}
