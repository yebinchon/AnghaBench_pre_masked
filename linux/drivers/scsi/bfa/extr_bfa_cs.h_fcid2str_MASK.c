
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (char*,char*,int,int,int) ;

__attribute__((used)) static inline void
FUNC_1(char *VAR_0, u32 VAR_1)
{
 union {
  u32 fcid;
  u8 byte[4];
 } VAR_2;

 VAR_2.fcid = VAR_1;
 FUNC_0(VAR_0, "%02x:%02x:%02x", VAR_2.byte[1], VAR_2.byte[2], VAR_2.byte[3]);
}
