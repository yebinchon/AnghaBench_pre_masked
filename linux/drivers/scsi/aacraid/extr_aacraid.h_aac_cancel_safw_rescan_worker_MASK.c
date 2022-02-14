
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_dev {int safw_rescan_work; scalar_t__ sa_firmware; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct aac_dev *VAR_0)
{
 if (VAR_0->sa_firmware)
  FUNC_0(&VAR_0->safw_rescan_work);
}
