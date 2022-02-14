
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * initvals_band; int * initvals; int * pcm; int * ucode; } ;
struct b43legacy_wldev {TYPE_1__ fw; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct b43legacy_wldev *VAR_0)
{
 FUNC_0(VAR_0->fw.ucode);
 VAR_0->fw.ucode = ((void*)0);
 FUNC_0(VAR_0->fw.pcm);
 VAR_0->fw.pcm = ((void*)0);
 FUNC_0(VAR_0->fw.initvals);
 VAR_0->fw.initvals = ((void*)0);
 FUNC_0(VAR_0->fw.initvals_band);
 VAR_0->fw.initvals_band = ((void*)0);
}
