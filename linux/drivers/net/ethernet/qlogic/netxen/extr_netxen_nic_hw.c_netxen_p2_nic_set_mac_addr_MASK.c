
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct netxen_adapter {int physical_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct netxen_adapter*,int,int) ;

__attribute__((used)) static int FUNC_1(struct netxen_adapter *VAR_5, u8 *VAR_6)
{
 u32 VAR_7, VAR_8;
 u32 VAR_9, VAR_10;

 u8 VAR_11 = VAR_5->physical_port;

 if (VAR_11 >= VAR_2)
  return -VAR_0;

 VAR_8 = ((u32)VAR_6[0] << 16) | ((u32)VAR_6[1] << 24);
 VAR_7 = VAR_6[2] | ((u32)VAR_6[3] << 8) |
  ((u32)VAR_6[4] << 16) | ((u32)VAR_6[5] << 24);

 VAR_10 = VAR_3 + (0x10000 * VAR_11);
 VAR_9 = VAR_4 + (0x10000 * VAR_11);


 if (FUNC_0(VAR_5, VAR_10, VAR_8) || FUNC_0(VAR_5, VAR_9, VAR_7))
  return -VAR_1;
 if (FUNC_0(VAR_5, VAR_10, VAR_8) || FUNC_0(VAR_5, VAR_9, VAR_7))
  return -VAR_1;

 return 0;
}
