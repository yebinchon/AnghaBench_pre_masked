
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ io_end; scalar_t__ io_start; } ;
struct TYPE_4__ {TYPE_1__ isa_ctlr; } ;
struct controller {TYPE_2__ u; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static u8 FUNC_1(struct controller *VAR_0, u8 VAR_1)
{
 u16 VAR_2;
 u16 VAR_3;
 u8 VAR_4;

 VAR_2 = VAR_0->u.isa_ctlr.io_start;
 VAR_3 = VAR_0->u.isa_ctlr.io_end;
 VAR_4 = FUNC_0(VAR_2 + VAR_1);
 return VAR_4;
}
