
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int (* busctl_offset ) (int ,int ) ;} ;
struct musb {TYPE_1__ io; int mregs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct musb *VAR_1, u8 VAR_2,
  u8 VAR_3)
{
 FUNC_0(VAR_1->mregs, VAR_1->io.busctl_offset(VAR_2, VAR_0),
   VAR_3);
}
