
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct bnxt {scalar_t__ nr_vnics; } ;


 int FUNC_0 (struct bnxt*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct bnxt *VAR_0)
{
 u16 VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_vnics; VAR_1++)
  FUNC_0(VAR_0, VAR_1);
}
