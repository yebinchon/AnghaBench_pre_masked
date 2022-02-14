
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcan_pccard {scalar_t__ fw_major; scalar_t__ fw_minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pcan_pccard*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct pcan_pccard *VAR_2)
{
 return ((FUNC_0(VAR_2, VAR_0) == VAR_2->fw_major) &&
  (FUNC_0(VAR_2, VAR_1) == VAR_2->fw_minor));
}
