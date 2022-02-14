
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input {int req_type; } ;
struct bnxt {int fw_cap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(struct bnxt *VAR_1, struct input *VAR_2)
{
 return (VAR_1->fw_cap & VAR_0 &&
  FUNC_0(FUNC_1(VAR_2->req_type)));
}
