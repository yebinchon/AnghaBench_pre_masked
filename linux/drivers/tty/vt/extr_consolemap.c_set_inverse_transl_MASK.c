
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int dummy; } ;
struct uni_pagedir {unsigned char** inverse_translations; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vc_data*,unsigned short) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 unsigned short** VAR_3 ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_4, struct uni_pagedir *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 unsigned short *VAR_9 = VAR_3[VAR_6];
 unsigned char *VAR_10;

 if (!VAR_5) return;
 VAR_10 = VAR_5->inverse_translations[VAR_6];

 if (!VAR_10) {
  VAR_10 = VAR_5->inverse_translations[VAR_6] = FUNC_1(VAR_2, VAR_1);
  if (!VAR_10) return;
 }
 FUNC_2(VAR_10, 0, VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_8 = FUNC_0(VAR_4, VAR_9[VAR_7]);
  if (VAR_8 >= 0 && VAR_8 < VAR_2 && VAR_10[VAR_8] < 32) {

     VAR_10[VAR_8] = VAR_7;
  }
 }
}
