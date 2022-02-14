
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; } ;
struct smsc911x_data {int ioaddr; TYPE_1__ config; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline u32 FUNC_3(struct smsc911x_data *VAR_2, u32 VAR_3)
{
 if (VAR_2->config.flags & VAR_1)
  return FUNC_1(VAR_2->ioaddr + VAR_3);

 if (VAR_2->config.flags & VAR_0)
  return ((FUNC_2(VAR_2->ioaddr + VAR_3) & 0xFFFF) |
   ((FUNC_2(VAR_2->ioaddr + VAR_3 + 2) & 0xFFFF) << 16));

 FUNC_0();
 return 0;
}
