
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int transid; } ;
struct kvaser_cmd {TYPE_1__ header; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct kvaser_cmd *VAR_1,
          u16 VAR_2)
{
 VAR_1->header.transid =
   FUNC_0(VAR_2 & VAR_0);
}
