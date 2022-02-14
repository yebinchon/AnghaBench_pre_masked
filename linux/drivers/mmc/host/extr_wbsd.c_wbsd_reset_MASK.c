
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wbsd_host {int mmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct wbsd_host*,int ) ;
 int FUNC_3 (struct wbsd_host*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct wbsd_host *VAR_2)
{
 u8 VAR_3;

 FUNC_1("%s: Resetting chip\n", FUNC_0(VAR_2->mmc));




 VAR_3 = FUNC_2(VAR_2, VAR_0);
 VAR_3 |= VAR_1;
 FUNC_3(VAR_2, VAR_0, VAR_3);
}
