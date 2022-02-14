
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct vnt_private {scalar_t__ PortOffset; } ;


 int FUNC_0 (struct vnt_private*,scalar_t__*) ;
 scalar_t__ FUNC_1 (unsigned char,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,int ) ;

bool FUNC_4(struct vnt_private *VAR_3, unsigned char VAR_4,
      u64 VAR_5)
{
 u64 VAR_6;
 u64 VAR_7 = 0;

 FUNC_0(VAR_3, &VAR_6);

 if (VAR_5 != VAR_6) {
  VAR_7 = FUNC_1(VAR_4, VAR_5,
      VAR_6);

  FUNC_3(VAR_3->PortOffset + VAR_1,
        (u32)VAR_7);
  FUNC_3(VAR_3->PortOffset + VAR_1 + 4,
        (u32)(VAR_7 >> 32));
  FUNC_2(VAR_3->PortOffset, VAR_0,
         VAR_2);
 }
 return 1;
}
