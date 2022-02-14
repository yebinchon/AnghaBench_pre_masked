
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct atp_unit {size_t* ioport; } ;


 int FUNC_0 (size_t) ;

__attribute__((used)) static inline u16 FUNC_1(struct atp_unit *VAR_0, u8 VAR_1, u8 VAR_2)
{
 return FUNC_0(VAR_0->ioport[VAR_1] + VAR_2);
}
