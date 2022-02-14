
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct atp_unit {scalar_t__ baseport; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u16 FUNC_1(struct atp_unit *VAR_0, u8 VAR_1)
{
 return FUNC_0(VAR_0->baseport + VAR_1);
}
