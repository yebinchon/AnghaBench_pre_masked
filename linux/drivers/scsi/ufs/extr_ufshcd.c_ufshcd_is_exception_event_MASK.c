
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dword_2; } ;
struct utp_upiu_rsp {TYPE_1__ header; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct utp_upiu_rsp *VAR_1)
{
 return FUNC_0(VAR_1->header.dword_2) &
   VAR_0 ? 1 : 0;
}
