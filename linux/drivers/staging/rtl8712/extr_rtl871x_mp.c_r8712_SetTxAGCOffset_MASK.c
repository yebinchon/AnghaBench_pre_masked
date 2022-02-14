
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct _adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct _adapter*,int ,int,int) ;

void FUNC_1(struct _adapter *VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_6 = VAR_5 & 0x000000ff;
 VAR_7 = (VAR_5 & 0x0000ff00) >> 8;
 VAR_8 = (VAR_5 & 0x00ff0000) >> 16;
 VAR_9 = VAR_8 << 8 | VAR_7 << 4 | VAR_6;
 FUNC_0(VAR_4, VAR_3,
   (VAR_0 | VAR_1 | VAR_2), VAR_9);
}
