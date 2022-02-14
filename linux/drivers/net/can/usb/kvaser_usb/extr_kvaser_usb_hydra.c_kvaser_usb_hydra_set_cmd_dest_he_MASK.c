
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int he_addr; } ;
struct kvaser_cmd {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct kvaser_cmd *VAR_2,
          u8 VAR_3)
{
 VAR_2->header.he_addr =
  (VAR_2->header.he_addr & VAR_1) |
  (VAR_3 & VAR_0);
}
