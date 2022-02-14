
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; } ;
struct smsc911x_data {scalar_t__ ioaddr; TYPE_1__ config; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct smsc911x_data*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline u32
FUNC_4(struct smsc911x_data *VAR_2, u32 VAR_3)
{
 if (VAR_2->config.flags & VAR_1)
  return FUNC_2(VAR_2->ioaddr + FUNC_1(VAR_2, VAR_3));

 if (VAR_2->config.flags & VAR_0)
  return (FUNC_3(VAR_2->ioaddr +
    FUNC_1(VAR_2, VAR_3)) & 0xFFFF) |
   ((FUNC_3(VAR_2->ioaddr +
   FUNC_1(VAR_2, VAR_3 + 2)) & 0xFFFF) << 16);

 FUNC_0();
 return 0;
}
