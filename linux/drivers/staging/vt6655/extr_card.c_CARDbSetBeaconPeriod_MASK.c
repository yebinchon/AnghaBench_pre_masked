
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vnt_private {unsigned short wBeaconInterval; scalar_t__ PortOffset; } ;


 int FUNC_0 (struct vnt_private*,int*) ;
 int FUNC_1 (int,unsigned short) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,unsigned short) ;

bool FUNC_5(struct vnt_private *VAR_4,
     unsigned short VAR_5)
{
 u64 VAR_6 = 0;

 FUNC_0(VAR_4, &VAR_6);

 VAR_6 = FUNC_1(VAR_6, VAR_5);


 FUNC_4(VAR_4->PortOffset + VAR_0, VAR_5);
 VAR_4->wBeaconInterval = VAR_5;

 FUNC_3(VAR_4->PortOffset + VAR_1, (u32)VAR_6);
 FUNC_3(VAR_4->PortOffset + VAR_1 + 4,
       (u32)(VAR_6 >> 32));
 FUNC_2(VAR_4->PortOffset, VAR_2, VAR_3);

 return 1;
}
