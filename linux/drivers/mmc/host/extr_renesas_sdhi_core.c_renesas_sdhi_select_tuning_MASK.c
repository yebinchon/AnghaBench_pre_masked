
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {int tap_num; unsigned long tap_set; int taps; } ;
struct renesas_sdhi {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned long,int ) ;
 struct renesas_sdhi* FUNC_1 (struct tmio_mmc_host*) ;
 int FUNC_2 (struct tmio_mmc_host*,struct renesas_sdhi*,int ) ;
 int FUNC_3 (struct tmio_mmc_host*,struct renesas_sdhi*,int ,int) ;
 scalar_t__ FUNC_4 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_5(struct tmio_mmc_host *VAR_6)
{
 struct renesas_sdhi *VAR_7 = FUNC_1(VAR_6);
 unsigned long VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;


 FUNC_3(VAR_6, VAR_7, VAR_4, 0);






 for (VAR_12 = 0; VAR_12 < VAR_6->tap_num * 2; VAR_12++) {
  int VAR_13 = VAR_6->tap_num * (VAR_12 < VAR_6->tap_num ? 1 : -1);

  if (!FUNC_4(VAR_12, VAR_6->taps))
   FUNC_0(VAR_12 + VAR_13, VAR_6->taps);
 }






 VAR_8 = 0;
 VAR_11 = 0;
 VAR_9 = 0;
 VAR_10 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_6->tap_num * 2; VAR_12++) {
  if (FUNC_4(VAR_12, VAR_6->taps)) {
   VAR_11++;
  } else {
   if (VAR_11 > VAR_8) {
    VAR_9 = VAR_12 - VAR_11;
    VAR_10 = VAR_12 - 1;
    VAR_8 = VAR_11;
   }
   VAR_11 = 0;
  }
 }

 if (VAR_11 > VAR_8) {
  VAR_9 = VAR_12 - VAR_11;
  VAR_10 = VAR_12 - 1;
  VAR_8 = VAR_11;
 }

 if (VAR_8 >= VAR_1)
  VAR_6->tap_set = (VAR_9 + VAR_10) / 2 % VAR_6->tap_num;
 else
  return -VAR_0;


 FUNC_3(VAR_6, VAR_7, VAR_5, VAR_6->tap_set);


 FUNC_3(VAR_6, VAR_7, VAR_2,
         VAR_3 |
         FUNC_2(VAR_6, VAR_7, VAR_2));

 return 0;
}
