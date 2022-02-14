
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsd_host {int dummy; } ;
struct mmc_command {int* resp; int error; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct wbsd_host*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct wbsd_host *VAR_7,
 struct mmc_command *VAR_8)
{
 int VAR_9;




 if (FUNC_0(VAR_7, VAR_5) != VAR_6) {
  VAR_8->error = -VAR_0;
  return;
 }

 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  VAR_8->resp[VAR_9] =
   FUNC_0(VAR_7, VAR_1 + VAR_9 * 4) << 24;
  VAR_8->resp[VAR_9] |=
   FUNC_0(VAR_7, VAR_2 + VAR_9 * 4) << 16;
  VAR_8->resp[VAR_9] |=
   FUNC_0(VAR_7, VAR_3 + VAR_9 * 4) << 8;
  VAR_8->resp[VAR_9] |=
   FUNC_0(VAR_7, VAR_4 + VAR_9 * 4) << 0;
 }
}
