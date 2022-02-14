
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb347_charger {int lock; scalar_t__ mains_online; scalar_t__ usb_online; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct smb347_charger *VAR_0)
{
 bool VAR_1;

 FUNC_0(&VAR_0->lock);
 VAR_1 = VAR_0->usb_online || VAR_0->mains_online;
 FUNC_1(&VAR_0->lock);

 return VAR_1;
}
