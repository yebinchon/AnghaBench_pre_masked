
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int he_addr; int transid; } ;
struct kvaser_cmd {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline u8 FUNC_1(const struct kvaser_cmd *VAR_3)
{
 return (VAR_3->header.he_addr & VAR_1) >>
  VAR_0 |
  FUNC_0(VAR_3->header.transid) >>
  VAR_2;
}
