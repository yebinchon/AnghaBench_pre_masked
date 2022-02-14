
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_mw {int dummy; } ;
struct mic_device {struct mic_mw aper; } ;
struct cosm_device {int dummy; } ;


 struct mic_device* FUNC_0 (struct cosm_device*) ;

__attribute__((used)) static struct mic_mw *FUNC_1(struct cosm_device *VAR_0)
{
 struct mic_device *VAR_1 = FUNC_0(VAR_0);

 return &VAR_1->aper;
}
